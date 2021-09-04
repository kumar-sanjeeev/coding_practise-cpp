#include <bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int positions[N];
int cows,n;

bool cowPlace(int minDist)
{
    int last_pos = -1;
    int cows_count = cows;

    for(int i=0; i<n; i++)
    {
        if(last_pos==-1 || positions[i]-last_pos>=minDist)
        {
            cows_count --;
            last_pos = positions[i];
        }

        if(cows_count==0) 
            break;
    }
    if(cows_count==0)   
        return true;
    else
        return false;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        cin>>n>>cows;

        for(int i=0; i<n; i++)
            cin>>positions[i];
        
        sort(positions,positions+n);

        int lo=0, hi=1e9, mid;

        while(hi-lo>1)
        {
            mid = (hi+lo)/2;

            if(cowPlace(mid))
            {
                lo=mid;
            }
            else
            {
                hi = mid-1;
            }
        }
        if(cowPlace(hi))
            cout<<hi<<endl;
        else
            cout<<lo<<endl;
    }
}
