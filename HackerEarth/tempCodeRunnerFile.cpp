#include <bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int hash_arr [N];

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];
    string result="No";
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
        hash_arr[a[i]]++;
    }

    for(int i=0; i<n; i++)
    {
        if(hash_arr[k-a[i]]!=0)
        {
            result = "Yes";
        }
    }

    cout<<result<<endl;

}