#include <iostream>
#include <vector>

using namespace std;

vector <int> arr_min;


void min_fun(int m, int** A) {
    int min_elem;
    for (int i = m - 1; i >= 0; i--)
    {
        min_elem = A[i][0];
        for (int j = 1; j < m - i; j++)
        {
            if (min_elem > A[i][j]) {
                min_elem = A[i][j];
            }
        }
        arr_min.push_back(min_elem);
    }
}

int main()
{

    setlocale(LC_ALL, "");
    int m, ** A, elem;

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

    min_fun(m, A);

    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = 0; j < m; j++)
        {
            A[i][j] = A[j][i];
        }
    }

    min_fun(m, A);

    for (int i = 0; i < m + m - 1; i++)
    {
        cout << arr_min[i] << "     ";
    }
    return 0;
}