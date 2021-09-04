#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check (ll mid, ll n)
{
    return ((mid*(mid+1))/2 <= n);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll low = 1;
        ll high = 1e5;
        ll n, ans;
        cin>>n;
        ans = 0;

        while(high-low>=0)         // very important condition
        {
            ll mid = (high+low)/2;

            if(check(mid,n))
            {
                ans = max(ans,mid);
                low = mid+1;
            }
            else
                high = mid -1;
        }
        cout<<ans<<endl; 

    }
}


// MY APPROACH
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check (ll mid, ll n)
{
    return ((mid*(mid+1))/2 <= n);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll low = 1;
        ll n, ans;
        cin>>n;
        ll high = n;
        while(high-low>1)         // very important condition
        {
            ll mid = (high+low)/2;

            if(check(mid,n))
            {
                low = mid;
            }
            else
                high = mid -1;
        }
        if ((high*(high+1))/2 <=n)
        {
            cout<<high<<endl;
        }
        else
            cout<<low<<endl;

    }
}