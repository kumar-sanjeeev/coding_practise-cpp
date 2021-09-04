#include <bits/stdc++.h>
using namespace std;

const int mxN= 1000;
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
    // for(int i=1; i<mxN; i++)
    // {
    //     cout<<spf[i]<<" ";
    // }
}

// vector<int> getFactorization (int x)
// {
//     vector<int> result;

//     while(x!=1)
//     {
//         result.push_back(spf[x]);
//         x=x/spf[x];
//     }
//     return result;
// }

int main()
{
    cout<<"HELLO 1"<<endl;
    SPF();
    // int x= 103;
    // vector<int> p = getFactorization(x);

    // for(int i=0; p.size(); i++)
    // {
    //     cout<<p[i]<<" ";
    // }
    // cout<<endl;
}