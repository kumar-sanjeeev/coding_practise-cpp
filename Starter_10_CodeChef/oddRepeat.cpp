#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k,s;
        cin>>n>>k>>s;

        int sum_rem = s-(n*n);
        set<int> a;
        int start = 1;
        while(n!=0)
        {
            a.insert(start);
            start= start +2;
            n--;
        }

        auto it = a.find((sum_rem)/(k-1));
        cout<<*it<<endl;
    }
}
