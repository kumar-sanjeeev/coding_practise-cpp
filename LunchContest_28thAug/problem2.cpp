#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
int pf[N];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            pf[i] = pf[i - 1] + i;
        }

        int r = n;
        int l = 1;
        int ans = 0;
        while(r!=0)
        {
            if ((pf[r])%2 == 0)
            {
                ans = r;
                break;
            }
            else
            {
                if ((pf[r]-pf[l])%2==0)
                {
                    ans = r-l;
                    break;
                }
                else
                {
                    --r;
                    l++;
                }
            }
        }
        cout<<ans<<endl;
    }
}