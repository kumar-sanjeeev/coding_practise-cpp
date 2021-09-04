#include <bits/stdc++.h>
using namespace std;

int  main()
{
    int n;
    cin>>n;
    int a[n];

    int count = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(abs(a[i]-a[j])==abs(a[j]-a[k]))
                {
                    cout<<"( "<<a[i]<<","<<a[j]<<","<<a[k]<<" )"<<endl;
                    count++;
                }
            }
        }
    }

    cout<<count<<endl;
}