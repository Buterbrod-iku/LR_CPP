#include <iostream>
#include <string>

using namespace std;

int main()
{
    int B, count;
    int N, cash;
    string res;
    cout << "input char B: ";
    cin >> B;
    cout << "input count: ";
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> N;
        if ((N > B) && (cash < B)) {
            res += to_string(B);
            res += to_string(N);
        }
        else {
            res += to_string(N);
        }
        cash = N;
    }
    cout << res;
    return 0;
}