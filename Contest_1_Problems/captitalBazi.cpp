#include <bits/stdc++.h>
using namespace std;


char upper(char x)
{
    return 'A'+ x-'a';
}
int main()
{
    while(1)
    {
        string s;
        cin>>s;
        if(s.size()==0)
            break;
        
        for(int i=0; i<s.size(); ++i)
        {
            s[i] = upper(s[i]);
        }
        cout<<s<<endl;
    }
}