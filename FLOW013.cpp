#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        int a, b, c, d;
        cin >> a >> b >> c;
        d = a + b + c;
        if (d == 180)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
        t--;
    }
    return 0;
}
