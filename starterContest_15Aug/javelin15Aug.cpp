#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m >> x;

        vector<int> r(n, 0);
        int copy[n] = {0};
        vector<int> f(x);
        for (int i = 1; i <= n; i++)
        {
            cin >> r[i];
            copy[i] = r[i];
        }

        int count = 0;

        for (int i = 1; i <= n; i++)
        {
            if (r[i] >= m)
            {
                count++;
                
            }
        }

        if (count < x)
        {
            int diff = x - count;
            int start = n - count;
            sort(copy, copy + n);
            cout<<"\nCOPY ARRAY"<<endl;
            for (int i = 1; i <= n; i++)
            {
                cout << copy[i] << " ";
            }
            int i = 1;
            while (diff != 0 and i <= x)
            {
                f[i] = copy[start];
                i++;
                start--;
                diff--;
            }
            sort(f.begin(), f.end());
            cout<<"\nFINAL SORTED ARRAY"<<endl;
            for (int i = 1; i <= x; i++)
            {
                cout << f[i] << " ";
            }

            cout<<endl;
            vector<int>::iterator it;
            cout << f.size() << " ";
            for (int i = 1; i <= x; i++)
            {
                it = find(r.begin(), r.end(), f[i]);
                if (it != r.end())
                {
                    cout << it - r.begin() << " ";
                    continue;
                }
            }
        }
        else if(count>x)
        {
            cout << count << " ";

            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }  
        }
    }
}
