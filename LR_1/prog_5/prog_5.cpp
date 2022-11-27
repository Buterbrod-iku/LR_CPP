#include <iostream>

using namespace std;

int main(){
    int first, second, res;
    cout << "ОСТАТОК ОТ ДЕЛЕНИЯ" << endl << "Первое число: " << endl;
    cin >> first;
    cout << "Второе число: " << endl;
    cin >> second;
    res = first % second;
    cout << "Результат: " << res;
    return 0;
}