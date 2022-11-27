#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int N, K;
    float res{};
    int* a;
    cout << "Введите размерность массива: ";
    cin >> N;
    a = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> K;
        a[i] = K;
        res = res + a[i];
    }
    cout << res / N;
    return 0;
}