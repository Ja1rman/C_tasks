#include <iostream>

using namespace std;

int* cut(int* Arr, int l1, int l2)
{
	int k = l1;
	int* arr = new int[l2 - l1];

	for (; k < l2; k++)
		arr[k - l1] = Arr[k];

	return arr;
}

int strange_sum(int n, int* arr)
{
	if (n == 1)
	    return arr[0];

	int sum = strange_sum(n / 2, cut(arr, 0, n / 2)) + strange_sum(n - n / 2, cut(arr, n / 2, n));

	return sum;
}


int main()
{
    int n;

    cin >> n;

    int *arr = new int [n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << strange_sum(n, (int*)arr);

    delete [] arr;

    return 0;
}
