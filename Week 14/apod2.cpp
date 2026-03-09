#include <iostream>
#include <fstream>
#include <string>
#include <curl/curl.h>
#include "json.hpp"

using json = nlohmann::json;
using namespace std;

size_t writeString(void* ptr, size_t size, size_t nmemb, string* data)
{
    data->append((char*)ptr, size * nmemb);
    return size * nmemb;
}

size_t writeFile(void* ptr, size_t size, size_t nmemb, FILE* stream) {
    return fwrite(ptr, size, nmemb, stream);
}

bool downloadFile(const string& url, const string& filename) {
    CURL* curl = curl_easy_init();
    if(!curl) return false;

    FILE* fp = fopen(filename.c_str(), "wb");

    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeFile);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);

    CURLcode res = curl_easy_perform(curl);

    fclose(fp);
    curl_easy_cleanup(curl);

    return res == CURLE_OK;
}

string fetch(string url) {
    string buffer;
    CURL* curl = curl_easy_init();

    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeString);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &buffer);

    curl_easy_perform(curl);
    curl_easy_cleanup(curl);
    return buffer;
}

void getAPOD(int argc, char* argv[]) {
    string nasaKey = "Aw0TZ7aE7e6WJnh4t7plOXEk1xdbCg45NMqfUX42";

    string api = "https://api.nasa.gov/planetary/apod?api_key=" + nasaKey;;
    if (argc > 1) {
        api = api + "&date=" + string(argv[1]);
    }

    string buffer = fetch(api);
    json j = json::parse(buffer);

    string explanation = j["explanation"];
    cout << "Title: "        << j["title"] << endl;
    cout << "Date : "        << j["date"] << endl;
    cout << "Explanation:\n" << explanation.substr(1,200) << endl;
    cout << "URL  : "        << j["url"] << endl << endl;

    string imageURL = j["url"];
    string filename = imageURL.substr(imageURL.rfind("/")+1);

    if(downloadFile(imageURL, filename))
        cout << "Image saved as " << filename << endl;
    else
        cout << "Image download failed\n";
}

int main(int argc, char* argv[]) {
    getAPOD(argc, argv);

    string buffer;
    string data = fetch("http://ip-api.com/json");
    json j = json::parse(data);

    cout << "Lat: "        << j["lat"] << endl;
    cout << "Lon: "        << j["lon"] << endl;
    cout << "City:"        << j["city"] << endl;

    string weatherData = fetch("https://api.openweathermap.org/data/3.0/onecall?appid=d069f3bb4cdfd9920b9ce2c73df016f8&lat=32.753177&lon=-97.3327459&exclude=minutely,hourly");
    json weather = json::parse(weatherData);
    cout << weatherData << endl;
    cout << "Current Temp: " << weather["current"]["temp"] << "K\n";
    for (auto& day : weather["daily"]){
        long dt = day["dt"];
        std::time_t t = dt;
        std::tm* timeInfo = std::localtime(&t);

        std::cout << "Date: "
                << std::put_time(timeInfo, "%A %Y-%m-%d")
                << std::endl;

        std::cout << "Max Temp: " << day["temp"]["max"] << std::endl;
        std::cout << "Min Temp: " << day["temp"]["min"] << std::endl;

        std::cout << "--------------------" << std::endl;
    }

    return 0;    
}
