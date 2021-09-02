/*
Right Shift Operator <----->
num>>i ---> it means  num/2^i
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        cout << "Enter the decimal num: " << endl;
        int n;
        cin >> n;

        cout << "Binary representation of " << n << " is: ";
        for (int i = 7; i >= 0; i--)
        {
            int x = n>>i;
            if (x & 1)
                cout << "1";
            else
                cout << "0";
        }
        cout<<endl;
    }
}