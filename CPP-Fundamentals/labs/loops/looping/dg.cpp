#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double xG, yG, xD, yD, xH, yH;
    
    cin >> xG >> yG >> xD >> yD;
     while (cin >> xH >> yH) {

        double gDistSq = (xG - xH)*(xG - xH) + (yG - yH)*(yG - yH);
        double dDistSq = (xD - xH)*(xD - xH) + (yD - yH)*(yD - yH);
        if (gDistSq*4 < dDistSq) {
            cout << "The gopher can escape through the hole at ("
                << xH << "," << yH << ")." << endl;
            return 0;
        }
    }

    cout << "The gopher cannot escape." << endl;
}