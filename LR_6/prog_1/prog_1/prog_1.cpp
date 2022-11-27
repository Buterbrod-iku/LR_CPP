#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int array_M, array_N, elem, sum, **M;
    cout << "Введите кол-во строк: ";
    cin >> array_M;
    cout << "Введите кол-во столбцов: ";
    cin >> array_N;
    M = new int* [array_M];
    for (int i = 0; i < array_N; i++)
    {
        M[i] = new int[array_N];
    }
    cout << "Вы заполняете строки!!!" << endl;
    for (int i = 0; i < array_M; i++)
    {
        for (int j = 0; j < array_N; j++)
        {
            cin >> elem;
            M[i][j] = elem;
        }
    }
    sum = 1;
    for (int i = 0; i < array_N; i++)
    {
        for (int j = 0; j < array_M; j++)
        {
            sum = sum * M[j][i];
        }
        cout << sum << "; ";
        sum = 1;
    }
    return 0;
}