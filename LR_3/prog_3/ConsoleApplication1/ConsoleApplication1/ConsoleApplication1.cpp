#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    float x, a;
    cout << "Введите x: ";
    cin >> x;
    if (x < 3) {
        a = 7.2 * x + 3.9 * x * x;
        cout << "f(x) = " << a;
    }
    else if (3 <= x <= 6){
        a = exp(x) + x * x;
        cout << "f(x) = " << a;
    }
    else if (x > 6) {
        a = sin(3.9 * x) * sin(3.9 * x);
        cout << "f(x) = " << a;
    }
    return 0;
}