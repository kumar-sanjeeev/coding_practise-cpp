#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,p,k;
        cin>>n>>p>>k;
        int hsh[k]={0};
        for(int i=0; i<n;i++)
        {
            hsh[i%k]++; 
        }
        int pf[k]={0};
        pf[0]= hsh[0];
        for(int i=0; i<k; i++)
        {
            pf[i+1] =pf[i] + hsh[i+1];
        }
        cout<<endl;
        cout<<"HASH ARRAY"<<endl;
        for(int i=0; i<p; i++)
        {
            cout<<hsh[i]<<" ";
        }

        cout<<endl;
        cout<<"PREFIX ARRAY"<<endl;
        for(int i=0; i<p; i++)
        {
            cout<<pf[i]<<" ";
        }

        cout<<endl;
        if(p<k)
        {
            cout<<pf[p%k]-1<<endl;
        }
        if(p>=k)
        {
            cout<<pf[p%k]<<endl;
        }
    }
}

/* SUbmitted at COdeChef
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,p,k;
        cin>>n>>p>>k;
        int hsh[k]={0};
        for(int i=0; i<n;i++)
        {
            hsh[i%k]++; 
        }
        int pf[k]={0};
        pf[0]= hsh[0];
        for(int i=0; i<k; i++)
        {
            pf[i+1] =pf[i] + hsh[i+1];
        }
        if(p<k)
        {
            cout<<pf[p%k]-1<<endl;
        }
        if(p>=k)
        {
            cout<<pf[p%k]<<endl;
        }
    }
}*/