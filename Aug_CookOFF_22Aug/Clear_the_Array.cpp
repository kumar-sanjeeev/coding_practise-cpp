#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n, k, x;
        cin>>n>>k>>x;

        vector<ll> a(n);
        for(int l=0; l<n; l++)
        {
            cin>>a[l];
        }
        sort(a.begin(), a.end());
        ll ans = 0;

        int i = n-1;
        while(k!=0 && i>0 && (a[i]+a[i-1]>=x))
        {
            ans += x;
            i -=2;
            k--;
        }

        for (int j=i; j>=0; j--)
        {
            ans +=a[j];
        }

         cout<<ans<<endl;
    }
   
}