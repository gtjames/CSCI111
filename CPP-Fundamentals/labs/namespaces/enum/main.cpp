#include <iostream>
using namespace std;

namespace School
{
    enum Grade
    {
        Freshman,
        Sophomore,
        Junior,
        Senior
    };
}

int main()
{
    School::Grade g = School::Junior;

    if (g == School::Junior)
        cout << "Upperclassman\n";
}