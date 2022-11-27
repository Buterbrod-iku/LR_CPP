#include <iostream>

using namespace std;

int main()
{
    int N, elem, max_elem{}, max_numb{}, min_numb{}, cash;
    int min_elem = 99999;
    int* a;
    cout << "";
    cin >> N;
    a = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> elem;
        a[i] = elem;
        if (a[i] > max_elem) {
            max_elem = a[i];
            max_numb = i;
        }
        if (a[i] < min_elem)
        {
            min_elem = a[i];
            min_numb = i;
        }
    }
    if (max_numb < min_numb)
    {
        cash = max_numb;
        max_numb = min_numb;
        min_numb = cash;
    }
    for (int i = min_numb+1; i < max_numb; i++)
    {
        a[i] = 0;
    }
    cout << "--------------------------------" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}