#include <iostream>

using namespace std;

int strange_multiply(int m, int n)
{
    int res = 0;

	while (n)
	{
		if (n & 1)
			res += m;

		m += m;
		n >>= 1;
	}

	return res;
}

int main()
{
    int n, m;

    cin >> n >> m;

    cout << strange_multiply(m, n);

    return 0;
}
