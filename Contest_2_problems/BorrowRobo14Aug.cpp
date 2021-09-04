#include <bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int a[N];
int hsh[N];

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        hsh[a[i]]++;
    }

    int q;
    cin>>q;

    while(q--)
    {
        int count=0;
        int rpos;
        int robo;
        cin>>rpos>>robo;

        if(a[rpos]==robo)
        {
            cout<<0<<endl;
            continue;
        }

        hsh[a[rpos]]--;

        if(robo>a[rpos])
        {
            count += hsh[robo]+ hsh[robo-a[rpos]];
            if(count==0) cout<<-1<<endl;
            else cout<<count<<endl;
        }

        if (robo<a[rpos])
        {
            count +=hsh[robo];

            if(count==0) cout<<-1<<endl;
            else cout<<count<<endl;
        }
        hsh[a[rpos]]++;
    }
}