#include<iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int b;
		cin >> b;
		if (b == 1 || b == 2 || b == 3)
			cout << "0" << endl;
		else
		{


			if (b % 2 == 0)
			{
				int area = 0.5 * b * b;
				int x = (area - b) / 4;
				cout << x << endl;
			}
			else
			{
				b = b - 1;

				int area = 0.5 * b * b;
				int x = (area - b) / 4;
				cout << x << endl;

			}
		}
	}


}