#include <bits/stdc++.h>
using namespace std;


int first(int a[], int n, int x)
{
    int lo=0; int hi= n-1; int ans = -1;

    while(hi>=lo)
    {
        int mid = (lo+hi)/2;

        if(a[mid]==x)
        {
            ans = mid;
            hi = mid-1;                  
        }
        else if (a[mid]<x)
            lo = mid + 1;
        else if (a[mid]>x)
            hi = mid - 1;
    }
    return ans;
}

int last(int a[], int n, int x)
{
    int lo=0; int hi= n-1; int ans = -1;

    while(hi>=lo)
    {
        int mid = (lo+hi)/2;

        if(a[mid]==x)
        {
            ans = mid;
            lo = mid+1;
        }
        else if (a[mid]<x)
            lo = mid + 1;
        else if (a[mid]>x)
            hi = mid - 1;
    }
    return ans;
}
int main()
{
    int n,x;
    cin>>n>>x;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int ans;
    int l = last(a,n,x);
    int f = first(a,n,x);

    if (l==-1 || f==-1)
    {
        ans = 0;
    }
    else
        ans = l-f+1;
    
    cout<<ans;
}