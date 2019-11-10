#include <iostream>
#include <cmath>

using namespace std;

void dig_trench(int** Trench, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            Trench[i][j] = abs(j - i);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << Trench[i][j] << " ";

        cout << endl;
    }
}

int main()
{

    int n;

    cin >> n;

    int **Trench = new int* [n];

    for (int i = 0; i < n; i++)
        Trench[i] = new int [n];

    dig_trench((int**)Trench, n);

    for (int i = 0; i < n; i++)
        delete [] Trench[i];

    delete [] Trench;

  return 0;
}
