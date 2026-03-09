#include <iostream>
#include <string>
#include <curl/curl.h>
#include "json.hpp"

// using json = nlohmann::json;
using namespace std;

static size_t writeCallback(void* contents, size_t size, size_t nmemb, string* output)
{
    size_t totalSize = size * nmemb;
    output->append((char*)contents, totalSize);
    return totalSize;
}

int main()
{
    CURL* curl;
    CURLcode res;
    string buffer;
    string nasaKey = "Aw0TZ7aE7e6WJnh4t7plOXEk1xdbCg45NMqfUX42";

    string url = "https://api.nasa.gov/planetary/apod?api_key=" + nasaKey;

    curl = curl_easy_init();

    if(curl)
    {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &buffer);

        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

        if(res != CURLE_OK)
        {
            cerr << "Request failed\n";
            return 1;
        }

        cout << buffer << endl;
        // json j = json::parse(buffer);

        // cout << "Title: " << j["title"] << endl;
        // cout << "Date: " << j["date"] << endl;
        // cout << "URL: " << j["url"] << endl;
        // cout << "\nExplanation:\n";
        // cout << j["explanation"] << endl;
    }

    return 0;
}