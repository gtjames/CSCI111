#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(int argc, char* argv[]) {
    double xG, yG, xD, yD, xH, yH;
    bool testMode = false;

    if (argc == 2 && argv[1][0] == 't')
        testMode = true;
    cin >> xG >> yG >> xD >> yD;
	cout << setprecision(3) << fixed;
    while (cin >> xH >> yH) {

        double gDistSq = (xG - xH)*(xG - xH) + (yG - yH)*(yG - yH);
        double dDistSq = (xD - xH)*(xD - xH) + (yD - yH)*(yD - yH);

        if (testMode) {
            cout << "Golpher Distance: " << gDistSq*2 << "  Dog Distance: " << dDistSq << 
                    ((gDistSq < (dDistSq * 2)) ? " dead" : " alive") << endl;
        }
        if (gDistSq*4 <= dDistSq) {
            cout << "The gopher can escape through the hole at ("
                 << xH << "," << yH << ")." << endl;
            return 0;
        }
    }

    cout << "The gopher cannot escape." << endl;
}