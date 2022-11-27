#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string inp, cash;

    vector <string> word;

    getline(cin, inp);
    for (int i = 0; i < inp.length(); i++)
    {
        if ((inp[i] == ',') || (inp[i] == '.') || (inp[i] == ' ')) {
            if (cash != "") {
                word.push_back(cash);
            }
            cash = "";
        }
        else {
            cash += inp[i];
        }
    }
    int n1 = word.size();
    int min = 9999999;
    int min_position;
    for (int i = 0; i < n1; i++)
    {
        if (word[i].length() < min) {
            min = word[i].length();
            min_position = i;
        }
    }
    for (int i = 0; i < n1; i++)
    {
        if (word[i].length() == min) {
            cout << word[i] << "     ";
        }
    }
    return 0;
}