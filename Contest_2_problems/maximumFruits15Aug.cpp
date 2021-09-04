#include <bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int arr[N];
int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int q;
    cin>>q;
    while(q--){

        int x,l,r;
        cin>>x>>l>>r;

        for(int i=l; i<=r; i++)
        {
            a[i] +=x;
        }
    }
    cout<<*max_element(a,a+n)<<endl;
}