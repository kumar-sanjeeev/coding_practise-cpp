#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,x;
    cin>>n>>m>>x;

    int a[n];
    vector<int> ans;              /* Why this will not create issue/bug in 2nd and so on test cases,
                                  bcz we havent specified the size of the vector*/
                                
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]>=m)
        {
            ans.push_back(i);
            a[i]=-1;
        }
    }

    while(ans.size()<x)
    {
        /*int f_dx=0;
        for(int i=1; i<n; i++)
        {
            if(a[i+1]>a[i])
            {
                f_dx = i+1;                 //For loop will not work here  
                cout<<"INSIDE IF"<<endl;   // bcz we are storing the value of F_dx after complete for loop
            }                             // so else condition will become true as we have put -1 value at these index
            else if (a[i+1]<a[i])
                f_dx = i;
        }*/

        // For loop is not working hence we are moving with while loop

        int i_dx =1;
        int f_dx =1;
        while(i_dx<=n)
        {
            if(a[i_dx]>a[f_dx])
            {
                f_dx = i_dx;
            }
            i_dx++;
        }
        ans.push_back(f_dx);
        a[f_dx]=-1;
    }

    sort(ans.begin(), ans.end());
    cout<<ans.size()<<" ";

    for(auto x: ans)
    {
        cout<<x<<" ";
    }
    cout<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}    