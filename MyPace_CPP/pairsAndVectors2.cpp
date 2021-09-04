//Nesting of vectors
#include <bits/stdc++.h>
using namespace std;

void printVectorPair(vector<pair<int,int>> &v)
{
    cout<<"Vector Size: "<<v.size()<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}
int main()
{
    vector<pair<int,int>> v;
    int sz_v ;
    cin>>sz_v;

    for(int i=0; i<sz_v; i++)
    {
        int x, y;
        cin>>x>>y;
        v.push_back({x,y});
        //or
        //v.push_back(make_pair(x,y))
    }
    printVectorPair(v);
}