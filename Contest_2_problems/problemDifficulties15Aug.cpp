#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){

        int a[4]={0};
        for(int i=0; i<4; i++)
        {
            cin>>a[i];
        }
        int count=0;
        sort(a,a+4);
        for(int i=0; i<4; i++)
        {
            while(i<3 and a[i]==a[i+1])
            {
                i++;
            }
            count++;
        }
        if (count==4)
        {
            cout<<2<<endl;
        }
        else if (count==2 || count==3)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<0<<endl;
        }

    }
}

// void solve()
// {
//     int a[4];
//     int hsh[10];
//     for(int i=1;i<=4; i++)
//     {
//         cin>>a[i];
//         hsh[a[i]]++;
//     }
//     int q1 = hsh[a[1]];
//     int q2 = hsh[a[2]];
//     int q3 = hsh[a[3]];
//     int q4 = hsh[a[4]];

//     if(q1==q2==q3==q4==1)
//         cout<<2<<endl;
//     if()

// }

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//         solve();
// }