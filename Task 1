#include <iostream>

using namespace std;

int* delete_duplicates(int* Array, int n)
{
    int* arr = new int[n + 1];

    int k = 1;

    for (int i = 1; i <= n; i++)
    {
        int p = 0;

        for (int j = 1; j < i; j++)
        {
            if (Array[i] == Array[j])
            {
                p++;
            }
        }

        if (p == 0)
        {
            arr[k] = Array[i];
            k++;
        }
    }
    arr[0] = k - 1;

    return arr;
}

int main()
{
    int n;

    cin >> n;

    int* Array = new int[n + 1];

    Array[0] = n;

    for (int i = 1; i <= n; i++)
        cin >> Array[i];

    Array = delete_duplicates(Array, n);

    for (int i = 1; i <= Array[0]; i++)
        cout << Array[i] << " ";
    delete [] Array;

    return 0;
}

