#include <iostream>

using namespace std;

int main() {
    int inp, a, b, c;
    cin >> inp;
    a = inp % 10;
    b = (inp % 100) / 10;
    c = inp / 100;
    cout << abs(c) << abs(a) << abs(b);
    return 0;
}