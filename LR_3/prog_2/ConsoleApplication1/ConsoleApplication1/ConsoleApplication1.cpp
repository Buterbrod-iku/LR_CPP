#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int a, b, c;
    cout << "Введите a,b,c: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    if ((a > b & a > c & b > c) || (a < b & a < c & b < c)) {
        cout << a * 2 << b * 2 << c * 2;
    }
    else {
        cout << -a << -b << -c;
    }
    return 0;
}