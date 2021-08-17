#include <bits/stdc++.h>
using namespace std;


void primeFactor(int n)
{
    //if num is divided by and pending number is again divisble by 2, as 2 is a prime number print all 2s
    while(n%2==0)
    {
        cout<<2<<" ";
        n=n/2;
    }

    for(int i=3; i*i<=n; i+=2)
    {
        while(n%i==0)             // now will we pending number divisibilty by all odd numbers 
        {
            cout<<i<<" ";
            n=n/i;
        }
    }

    if(n>2)                   // as our upward loop will run only upto sqrt(n), and if we haven't
    {                        // any divisior of number n till its sqrt, then it is prime number
        cout<<n<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    primeFactor(n);
}