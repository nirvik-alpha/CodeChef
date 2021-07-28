#include<iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int a[6] = { 100 , 50 ,10 ,5,2,1 };

		int x;
		cin >> x;
		
		int i = 0;
		int count = 0;
		while (i < 7)
		{
			count = count + x / a[i];
			x = x % a[i];
			i++;

		}
		cout << count << endl;

	}
}