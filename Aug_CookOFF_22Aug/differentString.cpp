#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        set<string> st;
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            st.insert(s);
        }

        //Now we will try N+1 strings and will check wheather each of them is among the given strings
        //The pigeonHole principle tells us that atleast one of these N+1 strings will be an answer

        for(int i=0; i<=n; i++)
        {
            int num=i;
            string bin="";

            while(num)
            {
                bin += to_string(num%2);
                num = num/2;
            }

            reverse(bin.begin(), bin.end());

            cout<<"BIN: "<<bin<<endl;
            // Now make this bin string length equal to n
            int cur = bin.size();
            string res = string(n-cur, '0');
             res += bin;

             //Now look this string into the given set

             if(st.find(res)==st.end())
             {
                 cout<<res<<endl;
                 break;
             }

        }
    }
}