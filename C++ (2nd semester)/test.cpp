#include <iostream>
#include <iomanip> // For format manipulators
using namespace std;

int main() {
    double num = 123.456;
    int value = 255;

    // 1. std::fixed: Displays floating-point numbers in fixed-point notation
    cout << "1. Fixed-point notation:" << endl;
    cout << fixed << setprecision(2) << num << endl; // Outputs: 123.46

    // 2. std::scientific: Displays floating-point numbers in scientific notation
    cout << "\n2. Scientific notation:" << endl;
    cout << scientific << setprecision(3) << num << endl; // Outputs: 1.235e+02

    // 3. std::hex (hexadecimal): Displays integers in hexadecimal format
    cout << "\n3. Hexadecimal format:" << endl;
    cout << hex << value << endl; // Outputs: ff

    // 4. std::setw and std::setfill: Sets the field width and fill character
    cout << "\n4. Field width and fill character:" << endl;
    cout << setw(10) << setfill('#') << value << endl; // Outputs: #######255

    // 5. std::showpos: Displays a '+' sign for positive numbers
    cout << "\n5. Show positive sign:" << endl;
    cout << showpos << num << endl; // Outputs: +123.456

    return 0;
}
