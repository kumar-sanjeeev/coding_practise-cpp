#include <bits/stdc++.h>
using namespace std;


void binary(int n)
{
    for(int i=31; i>=0; i--)
    {
        int x = n>>i;
        if(x&1 !=0)
            cout<<"1";
        else
            cout<<"0";
    }
    cout<<endl;
}

int main()
{
    int n; cin>>n;

    vector<int> masks(n,0);
    for(int i=0; i<n; i++)
    {
        int no_of_fruits;
        cin>>no_of_fruits;
        int mask = 0;
        for(int j=0; j<no_of_fruits; j++)
        {
            int fruit_type;
            cin>>fruit_type;
            mask = (mask | (1<<fruit_type));
        }
        masks[i] = mask;
    }

    for(int i=0; i<n; i++)
    {
        cout<<masks[i]<<endl;
        binary(masks[i]);
    }
}