#include <bits/stdc++.h>
using namespace std;

// MY APPROACH
// TC: O(N^2)

int main()
{
    int n;
    cin>>n;
    int count = 0;
    for(int i=2; i<=n; i++)
    {
        count=0;
        for(int j=2; j<(i); j++)
        {
            if(i%j==0)
                count++;
        }
        if (count==1)
            cout<<i<< " ";
    }
}



// // Second APPROACH----> TC(N^3/2)
bool isPrime(int n)
{
    if(n<=1)
        return false;
    if (n==2)
        return true;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;

    for(int i=2; i<=n; i++)
    {
        if(isPrime(i))
            cout<<i<<" ";
    }
}



// GFG APPROACH
bool isPrime(int n)
{
    if(n<=1)
        return false;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
void printPrime(int n)
{
    for(int i=2; i<=n; i++) 
        if(isPrime(i))
            cout<<i<<" ";
}
int main()
{
    int n;
    cin>>n;
}
