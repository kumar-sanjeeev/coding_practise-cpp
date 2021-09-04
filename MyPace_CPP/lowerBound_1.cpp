/*
Problem URL: https://www.hackerrank.com/challenges/cpp-lower-bound/problem?isFullScreen=true
*/
#include <bits/stdc++.h>
# define ll long long
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        ll y;
        cin>>y; 
        auto it = lower_bound(a.begin(), a.end(), y);
        
        if(*it == y)
        {
            cout<<"Yes"<<" "<<it-a.begin()+1<<endl;
        }
        else 
        {
            cout<<"No"<<" "<<it-a.begin()+1<<endl;
        }
    }
    return 0;
}
