#include <bits/stdc++.h>
using namespace std;

/*
Concept is Simple a long divison concept
12 | 18  --> 12 is divisor & 18 is Dividend
After this 6 is Rem
Now 6 | 12 --> 12 is dividend & 6 is Divisor

Now in case Divisor becomes 0 in that case 
dividend is the gcd
*/

/*
VVI property of LCM AND GCD:
LCM = a*b / GCD;
*/
int gcd (int a, int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    cout<<gcd(15,89)<<endl;
}