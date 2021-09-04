
// Optimised solution---- using combination of hashing and prefix sum

#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
long long int ar[N];

int main()
{
    int n;
    cin >> n;
    int q;
    cin >> q;
    while (q--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        ar[a] +=k;
        ar[b+1] -=k;
    }

    for(int i=1; i<=n; i++)
    {
        ar[i] = ar[i-1]+ ar[i];
    }

    long long max = -1;
    for (int i = 1; i <= n; i++)
    {
        if (max < ar[i])
        {
            max = ar[i];
        }
    }
    cout << max << endl;
}


// BRUTE FORCE APPROACH
// const int N = 1e7 + 10;
// long long int ar[N];

// int main()
// {
//     int n;
//     cin >> n;
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int a, b, k;
//         cin >> a >> b >> k;

//         for (int i = a; i <= b; i++)
//         {
//             ar[i] += k;
//         }
//     }

//     long long max = -1;
//     for (int i = 1; i <= n; i++)
//     {
//         if (max < ar[i])
//         {
//             max = ar[i];
//         }
//     }
//     cout << max << endl;
// }
