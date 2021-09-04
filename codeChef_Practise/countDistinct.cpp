#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    set<int> s;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        s.insert(x);
    }

    // APPROACH 1- By Simple comparing
    sort(v.begin(), v.end());

    int i=1, count =1;

    while(i<n)
    {
        if(v[i]!=v[i-1])
            count++;
        i++;
    }
    cout<<count<<endl;

    //Approach 2--Using set

    cout<<s.size()<<endl;
}