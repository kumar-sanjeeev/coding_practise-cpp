#include <bits/stdc++.h>
using namespace std;

const int N = 26;
int hash_char[N];
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        hash_char[s[i] - 'a']++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        int a[26]={0};
        int length = 0;
        int flag = 0;
        while(n--)
        {
            char c;
            cin>>c;
            a[c-'a']++;
        }

        for (int i = 0; i<n ; i++)
        {
            if (a[i] >= 1)
            {
                if (hash_char[i] % 2 == 0)
                {
                    length = length + hash_char[i];
                }
                else
                {
                    length = length + hash_char[i] - 1;
                    flag = 1;
                }
            }
        }

        if (flag == 1)
        {
            cout << length + 1 << endl;
        }
        else
            cout << length << endl;
    }
}
