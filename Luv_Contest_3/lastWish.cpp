/*
I have tried this approach, although answer and concept is right
but it is giving TLE


#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first + a.second < b.first + b.second)
        return true;
    else if (a.first + a.second == b.first + b.second)
    {
        if (a.first < b.first)
            return true;
        else
            return false;
    }
    else
        return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        vector<pair<int, int>> g(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first >> v[i].second;
            g[i].first = v[i].first;
            g[i].second = v[i].second;
        }
        // cout << "Before Sorting" << endl;
        // for (int i = 0; i < n; i++)
        //     cout << v[i].first << " " << v[i].second << endl;

        sort(v.begin(), v.end(), cmp);

        // cout << "After Sorting" << endl;
        // for (int i = 0; i < n; i++)
        //     cout << v[i].first << " " << v[i].second << endl;

        for(int i=0; i<n; i++)
        {
            auto it =find(v.begin(), v.end(), g[i]);
            cout<<it-v.begin()<<" ";

        }

    }
}
*/

// bool cmp(pair<int,pair<int,int>> a, pair<int,pair<int,int>> b)
// {
//     int sum1 = a.second.first + a.second.first;
//     int sum2 = b.second.first + b.second.first;

//     if(sum1!=sum2)
//     {
//         return sum1<sum2;
//     }
//     return a.second.first<b.second.first;
// }






#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, pair<int,int>> a, pair<int,pair<int,int>> b)
{
    if (a.second.first + a.second.second < b.second.first + b.second.second)
        return true;
    else if (a.second.first + a.second.second == b.second.first + b.second.second)
    {
        if (a.second.first < b.second.first)
            return true;
        else
            return false;
    }
    else
        return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector< pair<int,pair<int,int> > > v(n);

        for (int i = 0; i < n; i++)
        {
            v[i].first = i;
            cin >> v[i].second.first>>v[i].second.second;
        }
        // cout << "Before Sorting" << endl;
        // for (int i = 0; i < n; i++)
        //     cout<<v[i].first<<" "<<v[i].second.first<<" "<<v[i].second.second<<endl;

        sort(v.begin(), v.end(), cmp);

        // cout << "After Sorting" << endl;
        // for (int i = 0; i < n; i++)
        //     cout<<v[i].first<<" "<<v[i].second.first<<" "<<v[i].second.second<<endl;
        
        vector<int> f(n);

        for(int i=0; i<n; i++)
        {
            f[v[i].first]= i;
        }

        for(auto x: f)
        {
            cout<<x<<" ";
        }
        cout<<endl;

    }
}


// SUBMITTED over THE HACKER-EARTH PORTAL

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,pair<int,int>> a, pair<int,pair<int,int>> b)
{
    int sum1 = a.second.first + a.second.second;
    int sum2 = b.second.first + b.second.second;

    if(sum1!=sum2)
    {
        return sum1<sum2;
    }
    return a.second.first<b.second.first;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector< pair<int,pair<int,int> > > v(n);

        for (int i = 0; i < n; i++)
        {
            v[i].first = i;
            cin >> v[i].second.first>>v[i].second.second;
        }

        sort(v.begin(), v.end(), cmp);
        
        vector<int> f(n);

        for(int i=0; i<f.size(); i++)
        {
            f[v[i].first]= i;
        }

        for(auto x: f)
        {
            cout<<x<<" ";
        }
        cout<<endl;

    }
}
