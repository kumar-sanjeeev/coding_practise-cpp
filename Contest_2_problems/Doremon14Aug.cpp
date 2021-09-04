#include <bits/stdc++.h>
using namespace std;

const int N=1e5+10;
const int M=1e5+10;
int lock_door[N];

int main()
{
    int m,n;
    cin>>m>>n;
    while(m--){
        int key, lock;
        cin>>key>>lock;
        lock_door[lock]++;
    }
    int count =0;
    int temp;
    for (int i=1; i<=n; i++)
    {
        cin>>temp;
        if(lock_door[temp]==0)
        {
            count =1;
            break;
        }
    }
    if(count==1) cout<<"NO\n";
    else cout<<"YES\n";
    
}