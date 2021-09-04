#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
int n;
long long m;
long long int t[N];

bool isSufficient(int h)
{
    long long wood_collected = 0;
    for (int i = 0; i < n; i++)
    {
        if (t[i] >= h)
        {
            wood_collected += t[i] - h;
        }
    }
    if (wood_collected >= m)
        return true;
    else
        return false;
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    long long lo = 0, hi = 1e9, mid;

    while (hi - lo > 1)
    {
        mid = (hi + lo) / 2;

        if (isSufficient(mid))
        {
            lo = mid;
        }
        else
            hi = mid - 1;
    }

    if (isSufficient(hi))
        cout << hi << endl;
    else
        cout << lo << endl;
}