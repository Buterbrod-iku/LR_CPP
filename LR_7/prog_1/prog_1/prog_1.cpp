#include <iostream>
#include <cmath>
using namespace std;

int P(float a, float h) {
    return a + 2 * sqrt((pow((a / 2), 2) + pow(h, 2)));
}

int main()
{
    float a, h;
    cin >> a;
    cin >> h;
    cout << P(a, h);
    return 0;
}