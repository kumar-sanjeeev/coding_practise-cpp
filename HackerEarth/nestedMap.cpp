/*
Problem: https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    map<int, multiset<string>> m;

    while (t--)
    {
        string s;
        int marks;
        cin >> s >> marks;
        m[marks].insert(s);
    }

    auto it = m.end();
    do
    {
        it--;
        auto name = it->second;

        for (auto &n : name)
        {
            cout << n << " " << it->first << endl;
        }
    } while (it != m.begin());
}
