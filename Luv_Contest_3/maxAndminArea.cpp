#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<pair<int,int>> v;
    set<pair<int,int>> s;
    for(int i=0; i<n; i++)
    {
        // cin>>v[i].first>>v[i].second;
        // s.insert(v[i]);
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
        s.insert(make_pair(x,y));
    }

    for(auto it=s.begin(); it!=s.end(); it++)
        cout<<it->first<<" "<<it->second<<endl;

    int min_area = INT_MAX;
    int max_area = INT_MIN;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            auto p1 = v[i];
            auto p2 = v[j];
            if(p1.first==p2.first)
                continue;
            if(p1.second==p2.second)
                continue;
            if(p1.first>p2.first)
                swap(p1,p2);
            
            int x1 = p1.first;
            int y1 = p2.second;
            int x2 = p2.first;
            int y2 = p1.second;

            if(s.count({x1,y1}) && s.count({x2,y2}))
            {
                int area = abs(p1.first-p2.first) * abs(p2.second-p1.second);
                min_area = min(min_area,area);
                max_area = max(max_area, area);
            }
        }
    }

    if (min_area==INT_MAX)
        cout<<-1<<endl;
    else
    {
        cout<<max_area- min_area<<endl;
    }
}