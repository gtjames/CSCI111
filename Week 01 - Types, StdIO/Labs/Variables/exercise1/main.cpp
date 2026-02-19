// solution to Exercise 1
#include <string>
#include <iostream>
using namespace std;

int main() {
    long st_id; // student id
    string st_first_name; // first name
    string st_last_name;
    string st_address; // complete address
    string emg_contact_name; // emergency contact's full name
    float GPA;
    // courses enrollment info?

    st_id = 700123456;
    cin >> st_first_name;
    st_last_name = "Smith";
    st_address = "123 Awesome Street";
    emg_contact_name = "Joe Smith";
    GPA = 4.0;      // FIXME1: assign your values to the variables

    cout << "Student Information:\n";   
    cout << "ID: " << st_id << '\n';
    cout << "Name: " << st_first_name << " " << st_last_name << " GPA:" << GPA << '\n';
    cout << "Address: " << st_address << '\n';
    cout << "Emergency Contact: " << emg_contact_name << '\n';
    
    return 0;
}