#include <bits/stdc++.h>
using namespace std;
/*
Approach Used: Two pointer and SORTING
*/
int main()
{
    int n;
    int sum;
    cin>>n>>sum;
    vector<int> v;
    for(int i=0; i<n; i ++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    int i=0, j=n-1, flag = 0;

    while(j-i>=1)
    {
        int sum_elements = v[i]+v[j];
        if(sum_elements==sum)
        {
            flag = 1;
            break;
        }
        else if (sum_elements<sum)
            i++;
        else if (sum_elements>sum)
            j--;
    }

    if(flag==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

}