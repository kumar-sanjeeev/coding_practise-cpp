#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    vector<int> a(n);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a.begin(), a.end());
    int lo=0;
    int hi=n-1;
    int ans;
    int flag = 0;

    while(hi-lo>1)
    {
        int mid = (lo+hi)/2;
        if(a[mid]==x)
        {
            ans = mid;
            flag = 1;
            break;
        }
        else if (a[mid]<x)
            lo = mid;
        else if (a[mid]>x)
            hi = mid;
    }

    cout<<endl;
    cout<<"The result is: "<<endl;
    if (flag ==0)
    {
      
        if (a[lo]==x)
            cout<<lo<<endl;
        else if (a[hi]==x)
            cout<<hi<<endl;
        else if (a[lo]!=x || a[hi]!=x)
            cout<<"Element not found"<<endl;
    }

    else
    {
        cout<<ans<<endl;
    }

}