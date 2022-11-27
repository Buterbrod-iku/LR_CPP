#include <iostream>

using namespace std;

int main() {
    int inp_1, inp_2, res;
    cout << "Input x1: ";
    cin >> inp_1;
    cout << "Input x2: ";
    cin >> inp_2;
    res = inp_2 - inp_1;
    res = abs(res);
    cout << "Result: " << res;
    return 0;
}