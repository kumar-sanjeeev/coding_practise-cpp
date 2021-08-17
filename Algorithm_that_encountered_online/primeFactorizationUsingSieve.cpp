#include <bits/stdc++.h>
using namespace std;

const int mxN= 100;
int spf[mxN];

void SPF()
{
    for(int i=1; i<mxN; i++)
    {
        spf[i]=i;
    }

    for(int i=2; i<mxN; i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i; j<mxN; j+=i)
            {
                if(spf[j]==j)
                    spf[j]=i;
            }
        }
    }
    for(int i=1; i<mxN; i++)
    {
        cout<<spf[i]<<" ";
    }
}

int main()
{
    cout<<"HELLO 1"<<endl;
    SPF();
}