#include <iostream>
 
using namespace std;
 
int main()
{
    double a, b, c, d, l;
    cout << "Enter the length(a): "; // длина кирпича
    cin >> a;
    cout << "Enter the width(b): "; // ширина кирпича
    cin >> b;
    cout << "Enter the height(c): "; // высота кирпича
    cin >> c;
    cout << "Enter the length of the oppenings(d): "; // вводим длину отверстия
    cin >> d;
    cout << "Enter the height of the oppenings(l): "; // вводим высоту отверстия
    cin >> l;
        switch ( (b <= d) && (c <= l) ? 1 : (a <= d) && (c <= l) ? 2 : (a <= d) && ( b <= l) ? 3 : -1 ) // составное условие
        {
        case 1  : {cout << "Brick went into the hole by the first party"  << endl; break; } // кирпич прошёл через отверстие первой стороной
        case 2  : {cout << "Brick went into the hole by the second party" << endl; break; } // кирпич прошёл через отверстие второй стороной
        case 3  : {cout << "Brick went into the hole by a third party"    << endl; break; } // кирпич прошёл через отверстие третьей стороной
        default : cout << "Brick did not pass through the hole"           << endl;          // кирпич не прошёл через отверстие
        }
    return 0;
}