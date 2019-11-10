#include <iostream>

using namespace std;

void build_ziggurat(int** Ziggurat, int n)
{
    if (n % 2 == 0)
        for (int i = 0; i < n / 2; i++)
        {
            int k = n - 1 - i;
            int ii = i + 1;

            for (int j = i; j < n - i; j++)
            {
                Ziggurat[i][j] = ii;
                Ziggurat[k][j] = ii;
                Ziggurat[j][i] = ii;
                Ziggurat[j][k] = ii;
            }
        }
    else
        for (int i = 0; i <= n / 2; i++)
        {
            int k = n - 1 - i;
            int ii = i + 1;

            for (int j = i; j < n - i; j++)
            {
                Ziggurat[i][j] = ii;
                Ziggurat[k][j] = ii;
                Ziggurat[j][i] = ii;
                Ziggurat[j][k] = ii;
            }
        }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << Ziggurat[i][j] << " ";

        cout << endl;
    }


}

int main()
{
    int n;

    cin >> n;

    int **Ziggurat = new int* [n];

    for (int i = 0; i < n; i++)
        Ziggurat[i] = new int [n];

    build_ziggurat((int**)Ziggurat, n);

    for (int i = 0; i < n; i++)
        delete [] Ziggurat[i];

    delete [] Ziggurat;
    return 0;
}
