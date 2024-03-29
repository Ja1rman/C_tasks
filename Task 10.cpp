#include <iostream>
#include <cmath>

using namespace std;

int* func(int* cubs, int n)
{
    int* temp = new int[8];

    for (int i = 0; i < 8; i++)
        temp[i] = -1;

    int k = ceil(pow(n, 1.0 / 3.0));

    int sum = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int p = k; p > 0; p--)
        {
            int t = p;

            int m = pow (t, 3);

            sum += m;

            if (sum == n)
            {
                temp[i] = t;

                return temp;
            }
            else if (sum > n)
                sum -= m;
            else
            {
                temp[i] = t;

                break;
            }
        }

    }

    for (int i = 0; i < 8; i++)
        temp[i] = -1;

    return temp;
}

int main()
{
    int n;
    cin >> n;

    int* cubs = new int[8];

    cubs = func(cubs, n);

    for (int i = 0; i < 8; i++)
    {
        if (cubs[i] == -1 && i == 0)
        {
            cout << "Impossible";
            break;
        }
        else if (cubs[i] > 0)
            cout << cubs[i] << " ";
        else
            break;
    }

    delete [] cubs;

    return 0;
}