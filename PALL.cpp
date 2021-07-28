#include<iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int a;
		cin >> a;
		
		int b = a;
		int  temp = 0;
		while (a > 0)
		{
			temp = (temp * 10) + (a % 10);
			a = a / 10;
		}

		if (b == temp)
			cout << "wins" << endl;
		else
			cout << "losses" << endl;

	}
	

}