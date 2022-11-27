#include <iostream>
#include <string>

using namespace std;

int main()
{
    string inp, cash;
    char c;
    cin >> inp;
    cin >> c;
    for (int i = 0; i < inp.length(); i++)
    {
        cash += inp[i];
        if (inp[i] == c) {
            cash += '0';
        }
    }
    cout << cash;
    return 0;
}