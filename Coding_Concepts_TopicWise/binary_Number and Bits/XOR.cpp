#include <bits/stdc++.h>
using namespace std;

int main()
{
//Code for swapping two numbers using XOR function;
    int a = 10, b = 15;
    a = a^b;
    b = b^a;
    a = a^b;
    cout<<a<<" "<<b<<endl;
//
}