#include <iostream>

using namespace std;

int proper_fraction(int n)
{
    int result = n;

	for (int i = 2; i * i <=n; ++i)
		if (n % i == 0) {
			while (n % i == 0)
				n /= i;
			result -= result / i;
		}
	if (n > 1)
		result -= result / n;
	return result * 2;
}

int main()
{
    int n;

    cin >> n;

    if (n == 1 || n == - 1)
        cout << 0;
    else
        cout << proper_fraction(n);

    return 0;
}
