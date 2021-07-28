#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	int a[100000];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];

	}

	int len = sizeof(a) / sizeof(a[0]);

	sort(a, a + len);

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}


}