#include<iostream>
#include<sstream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	
	while (T--)
	{
		int N;

		cin >> N;
		ostringstream str1;
		str1 << N;

		string s = str1.str();
		long long int sum = 0;
		int len = s.length();

		for (int i = 0; i < len; i++)
		{
			char x = s[i];
			int p = x;
			p = p - 48;

			sum = sum + p;

		}

		cout << sum << endl;

	}


}