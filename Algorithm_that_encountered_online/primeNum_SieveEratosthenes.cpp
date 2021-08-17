#include <bits/stdc++.h>
using namespace std;

void primeSieve(int *p)
{
    //first make all odd numbers as prime---(we have all even numbers are not prime)
    for(int i=3; i<=1000000; i+= 2){
        p[i]=1;
    }

    //Sieve Code
    for(long long i=3; i<=100000;i+= 2)
    {
        //check is the current no is not maked(prime)
        if(p[i]==1)
        {
            //As it is prime make all its multiple as non prime
            for(long long j=i*i; j<=100000; j=j+i)
            {
                p[j]=0;
            }
        }
    }

    //Special Cases
    p[2]=1;
    p[1]=p[0]=0;

}

int main()
{

    int n;
    cin>>n;
    int p[100000]={0};
    primeSieve(p);
    cout<<"XXX"<<endl;
    for(int i=0; i<=n; i++)
    {
        if(p[i]==1)
            cout<<i<<" ";
    }
    cout<<endl;

}