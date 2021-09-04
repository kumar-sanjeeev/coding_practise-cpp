#include <bits/stdc++.h>
using namespace std;

const int N=1e7+10;

int p[N];
void primeSieve(int *p)
{
    for(int i=3; i<1e6; i+=2)
    {
        p[i]=1;
    }

    for(long long i=3; i<1e6; i+=2)
    {
        if(p[i]==1)
        {
            for(long long j=i*i; j<=1e6; j=j+i)
            {
                p[i]=0;
            }
        }
    }
    p[2]=1;
    p[0]=0;
    p[1]=0;
}

int main()
{
    int n; cin>>n;
    primeSieve(p);

    for(int i=0; i<=n; i++)
    {
        if(p[i]==1)
            cout<<i<<" ";
    }
}
