#include <bits/stdc++.h>
using namespace std;
/*
In this question I have learned about the set along with its function
i.e size(), find(), erase(), 
*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,q;
        cin>>n>>m>>q;
        set <int> bus;

        int flag =0;

        while(q--)
        {
            char c;
            cin>>c;
            int i;
            cin>>i;

            if(c=='+')
            {
                if(bus.find(i)!=bus.end())    // It will check if i already present then condition false
                    flag = 1;
                else
                {
                    bus.insert(i);
                    if(bus.size()>m)   // it will check that if filled seats has been increased from m or not
                        flag = 1;
                }
            }
            else if (c=='-')
            {
                if(bus.find(i)==bus.end())
                    flag = 1;
                else
                    bus.erase(i);
            }
        }

        if (flag == 0)
        {
            cout<<"Consistent"<<endl;
        }
        else
            cout<<"Inconsistent"<<endl;
    }
}