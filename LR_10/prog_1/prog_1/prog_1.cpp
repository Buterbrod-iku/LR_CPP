#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    ifstream fin("C://Users/Buterbrod/Desktop/C++/LR_10/test.txt");
    ofstream fout("C://Users/Buterbrod/Desktop/C++/LR_10/res.txt");
    int N, k;
    int A[1000];
    k = 0;
    while (fin >> N)
    {
        A[k++] = N;
    }
    int elem, max_elem{}, max_position{}, min_position{}, cash;
    int min_elem = 9999999;
    for (int i = 0; i < k; i++)
    {
        if (A[i] > max_elem) {
            max_elem = A[i];
            max_position = i;
        }
        if (A[i] < min_elem) {
            min_elem = A[i];
            min_position = i;
        }
    }
    if (max_position < min_position) {
        cash = max_position;
        max_position = min_position;
        min_position = cash;
    }
    for (int i = min_position + 1; i < max_position; i++)
    {
        A[i] = 0;
    }
    for (int i = 0; i < k; i++)
    {
        fout << A[i] << endl;
    }
    fout.close();
    return 0;
}