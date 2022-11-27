#include <iostream>
#include <vector>

using namespace std;

int main()
{

    setlocale(LC_ALL, "");
    int m, ** A, elem, min_elem;

    cout << "введите размерность: ";
    cin >> m;
    A = new int* [m];

    for (int i = 0; i < m; i++)
    {
        A[i] = new int[m];
    }
    cout << "заполняете строки:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> elem;
            A[i][j] = elem;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << A[i][j];
        }
        cout << endl;
    }

    for (int i = m-1; i >= 0; i--)
    {
        for (int j = 0; j < m; j++)
        {
            A[i][j] = A[j][i];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << A[i][j];
        }
        cout << endl;
    }
    return 0;
}