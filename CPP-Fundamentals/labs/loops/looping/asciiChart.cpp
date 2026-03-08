// create an ASCII chart of characters from 32 to 126
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << "ASCII Chart\n";   
    cout << "Char  Dec  Hex\n";
    for (int i = 32; i <= 127; i++) {
        cout << setw(4) << static_cast<char>(i)                     //    32 to 47
             << setw(5) << i 
             << setw(5) << hex << uppercase << i << dec << endl;
    }


    cout << "ASCII Chart\n";   
    cout << "Char  Dec  Hex     Char  Dec  Hex     Char  Dec  Hex     Char  Dec  Hex     Char  Dec  Hex     Char  Dec  Hex\n";
    for (int i = 32, j = 48, k = 64, l = 80, m = 96, n = 112; n <= 127; i++, j++, k++, l++, m++, n++) {
        cout << setw(4) << static_cast<char>(i)                     //    32 to 47
             << setw(5) << i 
             << setw(5) << hex << uppercase << i << dec << "  |  ";
        cout << setw(4) << static_cast<char>(j)                     //    48 to 63
             << setw(5) << j 
             << setw(5) << hex << uppercase << j << dec << "  |  ";
        cout << setw(4) << static_cast<char>(k)                     //    64 to 79
             << setw(5) << k 
             << setw(5) << hex << uppercase << k << dec << "  |  ";
        cout << setw(4) << static_cast<char>(l)                     //    80 to 95
             << setw(5) << l 
             << setw(5) << hex << uppercase << l << dec << "  |  ";
        cout << setw(4) << static_cast<char>(m)                     //    96 to 111
             << setw(5) << m        
             << setw(5) << hex << uppercase << m << dec << "  |  ";
        cout << setw(4) << static_cast<char>(n)                     //    112 to 127
             << setw(5) << n 
             << setw(5) << hex << uppercase << n << dec << endl;
    }


    cout << "\nDo I notice a pattern in the above code:\n\n";

    for (int i = 32; i <= 47; i++) {
        for ( int j = 0; j < 6; j++) {
            int charCode = i + j * 16;
            if (charCode > 126) break;
            cout << setw(4) << static_cast<char>(charCode) 
                 << setw(5) << charCode 
                 << setw(5) << hex << uppercase << charCode << dec << "  |  ";
        }
        cout << endl;
    }
 
    return 0;
}