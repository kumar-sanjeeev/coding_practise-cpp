#include <bits/stdc++.h>
using namespace std;

void decToBin (int n)
{
    for(int i=10; i>=0; i--)
    {
        int x = n>>i;
        if(x&1)
            cout<<"1";
        else
            cout<<"0";
    }
}

int main()
{
    cout<<"Enter the number: ";
    int n; cin>>n;
    cout<<"Binary rep: ";
    decToBin(n);

    cout<<endl;

    // How to check the nth bit is set or Unset;
    // Take the and operation help for this work
    // Take help of left shift opeartor

    int i=0;
    if (n & (1<<i)!=0)
        cout<<"Set bit"<<endl;
    else
        cout<<"Unset bit"<<endl;

    // How to set the ith bit 
    // Use the Or operation

    decToBin( n | (1<<i));
    cout<<endl;

    // How to invert the binary representation
    decToBin(~n);
    cout<<endl;

    //How to unset the ith Bit
    decToBin(n&(~(1<<i)));
    cout<<endl;

    //How to toggle the bit ( means 1 -> 0 & vice versa)
    // Use the XOR Function 
    decToBin( n^ (1<<3));

    //How to count no of set bits
    cout<<endl;
    int ct = 0;
    for(int i=31; i>=0; i--)
    {
        if( (n & (1<<i))!= 0)
            ct++;
    }

    cout<<ct<<endl;

}