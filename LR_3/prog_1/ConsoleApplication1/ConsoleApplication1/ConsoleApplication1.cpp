#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int inp;
    cout << "Введите положительное число: ";
    cin >> inp;
    if (((inp < 1000) & (inp > 100)) & (inp % 2 == 0)) {
        cout << "Утверждение верно";
    }
    else {
        cout << "Утверждение неверно";
    }
    return 0;
}