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
		int fact = 1;
		if (n < 0)
			cout << "Error! Factorial of a negative number doesn't exist." << endl;
		else {

			for (int i = 1; i <= n; ++i) {
				fact *= i;
			}
			//printf("Factorial of %d = %llu", n, fact);
			//cout << n<< endl;
			cout << fact << endl;
		}
	}
}