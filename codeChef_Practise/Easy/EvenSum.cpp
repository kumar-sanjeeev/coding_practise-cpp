/*
URL: https://www.codechef.com/problems/EVENGAME
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            if (i%2!=0)
            {
                int x;
                cin>>x;
                a[i] = -1*x;
            }

            else
            {
                cin>>a[i];
            }
        }

        int sum = accumulate(a, a+n, 0);

        if(sum %2 == 0)
            cout<<1<<endl;
        else 
            cout<<2<<endl;
    }
}