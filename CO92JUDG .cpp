#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		int a[n];
		int b[n];
		
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
		}

		sort(a, a + n);
		sort(b, b + n);

		int suma = 0;
		int sumb = 0;

		for (int i = 0; i < n-1; i++)
		{
			suma = suma + a[i];
			sumb = sumb + b[i];

		}

		if (suma == sumb)
			cout << "Draw" << endl;
		else if (suma < sumb)
			cout << "Alice" << endl;
		else
			cout << "Bob" << endl;

	}
}
