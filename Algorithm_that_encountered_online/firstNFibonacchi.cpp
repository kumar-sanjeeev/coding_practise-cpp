#include <bits/stdc++.h>
using namespace std;

void fiboN(int n)
{
    int f1=0, f2=1, i;
    if (n<1)
        return;

    cout<<f1<<" ";
    for(int i=1; i<n;i++)
    {
        cout<<f2<<" ";
        int next = f1+f2;
        f1=f2;
        f2=next;
    }  
}

int main()
{
    int n;
    cin>>n;
    fiboN(n);
}