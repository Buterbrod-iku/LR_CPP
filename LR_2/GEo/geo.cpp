#include <iostream>

using namespace std;

int main(){
    int huge, low, vMin, vMax, res;
    cout << "Бона: " << endl;
    cin >> huge;
    cout << "Меньшая сторона: " << endl;
    cin >> low;
    vMax = huge * huge * huge;
    vMin = (((low * low * huge) - (low * low * low)) * 3) - (low * low * low);
    res = vMax - vMin;
    cout << "Результат: " << res;
    return 0;
}