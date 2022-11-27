#include <iostream>

using namespace std;

int main() {
    int huge, low, vMin, vMax, res;
    cout << "Input huge edge: ";
    cin >> huge;
    cout << "Input low edge: ";
    cin >> low;
    vMax = huge * huge * huge;
    vMin = (((low * low * huge) - (low * low * low)) * 3) + (low * low * low);
    res = vMax - vMin;
    cout << "Result: " << res;
    return 0;
}