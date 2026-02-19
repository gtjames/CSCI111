#include <iostream>
#include <string>

using namespace std;

    string q0 =
                "  +---+\n"
                "  |   |\n"
                "      |\n"
                "      |\n"
                "      |\n"
                "      |\n"
                "=========\n";
    string q1 =
                "  +---+\n"
                "  |   |\n"
                "  O   |\n"
                "      |\n"
                "      |\n"
                "      |\n"
                "=========\n";
    string q2 =
                "  +---+\n"
                "  |   |\n"
                "  O   |\n"
                "  |   |\n"
                "      |\n"
                "      |\n"
                "=========\n";
    string q3 =
                "  +---+\n"
                "  |   |\n"
                "  O   |\n"
                " /|   |\n"
                "      |\n"
                "      |\n"
                "=========\n";
    string q4 =
                "  +---+\n"
                "  |   |\n"
                "  O   |\n"
                " /|\\  |\n"
                "      |\n"
                "      |\n"
                "=========\n";
    string q5 =
                "  +---+\n"
                "  |   |\n"
                "  O   |\n"
                " /|\\  |\n"
                " /    |\n"
                "      |\n"
                "=========\n";
    string q6 =
                "  +---+\n"
                "  |   |\n"
                "  O   |\n"
                " /|\\  |\n"
                " / \\  |\n"
                "      |\n"
                "=========\n";
void printStage(int stage) {
    cout << "\nStage " << stage << ":" << endl;
    switch (stage) {
        case 0:
            cout << q0;
            break;

        case 1:
            cout << q1;
            break;

        case 2:
            cout << q2;
            break;

        case 3:
            cout << q3;
            break;

        case 4:
            cout << q4;
            break;

        case 5:
            cout << q5;
            break;

        case 6:
            cout << q6;
            break;
    }
}

int main(int argc, char **argv) {
    if (argc == 2) {
        printStage(atoi(argv[1]));
    } else {
        for (int i = 0; i < 7; i++) {
            printStage(i);
        }
    }

    return 0;
}
