#include<iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;

	while (T--)
	{

		int n;
		cin >> n;

		int sum;

		int first, last;
		last = n % 10;

		first = n;
		while (n >= 10)
		{
			n = n / 10;

		}
		first = n;

		sum = first + last;
		cout << sum << endl;

	}
}