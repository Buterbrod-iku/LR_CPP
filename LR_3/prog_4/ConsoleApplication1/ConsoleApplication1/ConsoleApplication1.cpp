#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int x;
    float a;
    cout << "Введите x: ";
    cin >> x;
    switch(x) 
    {
        case 4:
            a = 7.2 * x + 3.9 * x * x;
            cout << "f(x) = " << a;
            break;
        case 6:
            a = exp(x) + x * x;
            cout << "f(x) = " << a;
            break;
        case 9:
            a = sin(3.9 * x) * sin(3.9 * x);
            cout << "f(x) = " << a;
            break;
        default:
            cout << "Функция не определена в этой точке";
            break;
    }
    return 0;
}