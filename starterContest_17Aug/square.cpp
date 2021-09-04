#include <bits/stdc++.h>
using namespace std;

int prerfectSq(int N)
{
    int prevN = floor(sqrt(N));
    int sr = sqrt(N);
    if(sr*sr == N)
    {
        return (sqrt(N));
    }
    else if (prevN * prevN == N)
        prevN -= 1;
    return sqrt(prevN * prevN);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, side;
        cin>>n>>side;
        int val = prerfectSq(n);
        cout<<side*val<<endl;
        
    }
}