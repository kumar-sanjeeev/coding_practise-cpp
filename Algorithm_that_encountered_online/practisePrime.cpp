#include <bits/stdc++.h>
using namespace std;

/*
 This is code to find all the prime number from 0 to n inclusive;
 Time complexity---> O(N^3/2)
 */
bool isPrime(int n)
{
    if (n<=1)
        return false;
    if (n==2)
        return true;
    if(n!=2 and n%2==0)
    {
        return false;
    }

    for(int i =3; i*i<=n; i +=2)
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

    for(int i=0; i<=n; i++)
    {
        if(isPrime(i))
        {
            cout<<i<<" ";
        }
    }
}