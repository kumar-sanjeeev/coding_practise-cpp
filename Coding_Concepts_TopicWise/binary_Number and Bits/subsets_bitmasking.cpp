#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets (vector<int> &v)
{
    int size = v.size();
    int subset_counts = (1<<size);

    vector<vector<int>> all_subset;
    for(int i=0; i<subset_counts; i++)
    {
        vector<int> small_subset;
        for(int j=0; j<size; j++)
        {
            if( (i & (1<<j)) !=0 )
            {
                small_subset.push_back(v[j]);
            }
        }
        all_subset.push_back(small_subset);
    }

    return all_subset;
}


int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];

    auto all_subsets = subsets(v);

    for(auto total_subsets : all_subsets)
    {
        for(auto element: total_subsets)
        {
            cout<<element<<" ";
        }
        cout<<endl;
    }
}