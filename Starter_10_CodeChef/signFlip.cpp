#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        multiset<int> neg;
        multiset<int> pos;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x < 0)
                neg.insert(x);
            else
                pos.insert(x);
        }

        // for (auto it = pos.begin(); it != pos.end(); it++)
        // {
        //     cout << *it << " ";
        // }
        // cout << endl;

        // for (auto it = neg.begin(); it != neg.end(); it++)
        // {
        //     cout << *it << " ";
        // }
        // cout << endl;

        long long sum = 0;
        for (auto it = neg.begin(); it != neg.end(); it++)
        {
            if (k != 0)
            {
                sum = sum + (-1 * (*it));
                k--;
            }
            else
                break;
        }

        long long sum_pos = 0;

        for (auto it = pos.begin(); it != pos.end(); it++)
        {
            sum_pos += *it;
        }

        cout << sum + sum_pos<<endl;
    }
}