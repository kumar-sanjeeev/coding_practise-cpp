#include <bits/stdc++.h>
using namespace std;

void leastPrimeFactor(int n)
{
    //intialize the vector of size n+1 and put all values to Zero
    vector<int> least_prime(n+1,0);

    least_prime[1]=1;

    for(int i=2; i<=n; i++)
    {
        //least prime[i]===0
        //means it is prime
        if(least_prime[i]==0)
        {
            //make prime number as its lpf
            least_prime[i]=i;

            // will mark is as divisor for all its multiple

            for(int j=i*i; j<=n; j+=i)
            {
                if(least_prime[j]==0)
                {
                    least_prime[j]=i;  
                }
            }
        }
    }

    for(int i=1; i<=n; i++)
    {
        cout<<least_prime[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;

    leastPrimeFactor(n);
}