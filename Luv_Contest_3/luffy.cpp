#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int total = n + 1;
        vector<pair<int, int>> v;
        multiset<int> food;
        v.push_back({0, 0});

        for (int i = 0; i < total; i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }

        sort(v.begin(), v.end(), greater<>());

        int food_rem = v[0].second;
        int count = 0;
        int flag = 0;

        cout<<"Printing Vector: "<<endl;
        for(int i=0; i<total+1; i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }

        cout<<"Running the logic: "<<endl;
        for (int i = 1; i < n + 2; i++)
        {
            cout << "i" << i << endl;
            // food.insert(v[i].second);
            int dist = v[i - 1].first - v[i].first;
            if (food_rem >= dist)
            {
                food_rem -= dist;
                food.insert(v[i].second);
                cout<<"DIST: "<<dist<<endl;
                cout<<"FOOD REM: "<<food_rem<<endl;
            }
            else if (food_rem < dist)
            {
                cout<<"Distance: "<<dist<<endl;
                cout<<"REM FOOD: "<<food_rem<<endl;
                if (food.size()==0)
                {
                    flag = 1;
                    break;
                }
                else
                {
                    auto it = --food.end();
                    cout<<"MAX FOOD: "<<*it<<endl;
                    food_rem += *it;
                    food.erase(it);
                    cout<<"ELSE FOOD REM: "<<food_rem<<endl;
                    count++;
                    food_rem -= dist;
                    food.insert(v[i].second);
                }
            }
        }

        if (flag == 0)
        {
            cout << count << endl;
        }

        if (flag == 1)
        {
            cout << -1 << endl;
        }
    }
}


/*Submitted over HackerEarth
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int total = n + 1;
        vector<pair<int, int>> v;
        multiset<int> food;
        v.push_back({0, 0});

        for (int i = 0; i < total; i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }

        sort(v.begin(), v.end(), greater<>());

        int food_rem = v[0].second;
        int count = 0;
        int flag = 0;

        for (int i = 1; i < n + 2; i++)
        {
            int dist = v[i - 1].first - v[i].first;
            if (food_rem >= dist)
            {
                food_rem -= dist;
                food.insert(v[i].second);
            }
            else if (food_rem < dist)
            {
                if (food.size()==0)
                {
                    flag = 1;
                    break;
                }
                else
                {
                    auto it = --food.end();
                    food_rem += *it;
                    food.erase(it);
                    count++;
                    food_rem -= dist;
                    food.insert(v[i].second);
                }
            }
        }

        if (flag == 0)
        {
            cout << count << endl;
        }

        if (flag == 1)
        {
            cout << -1 << endl;
        }
    }
}
*/