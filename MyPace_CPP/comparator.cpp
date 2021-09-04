#include <bits/stdc++.h>
using namespace std;

bool should_i_swap(pair<int,int> a, pair<int,int> b)
{
    if(a.first != b.first)
    {
        if(a.first>b.first) return true;
        return false;
    }
    else
    {
        if(a.second<b.second) return true;
        else false;
    }
}

void printVector(vector<pair<int,int>> &a)
{
    for(int i=0; i<a.size(); i++)
        cout<<a[i].first<<" "<<a[i].second<<endl;
    
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    // sorting O(n^2)

    for (int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(should_i_swap(a[i],a[j]))
                swap(a[i],a[j]);
        }
    }
    printVector(a);
}