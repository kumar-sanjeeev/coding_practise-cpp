#include <bits/stdc++.h>
using namespace std;

/* PROBLEM STATEMENT URL: https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/xsquare-and-double-strings-1/

____________ METHOD USED TO SOLVE THE PROBLEM_____________

I have used the hashing concept to solve this problem.
_________________________________________________________
*/

int main()
{   
    int t;
    cin>>t;
    
    while(t--)
    {
        int temp =0;
        string s;
        cin>>s;
        int hash_arr [26]={0};
        for(int i=0; s[i]!='\0'; i++)
        {
            hash_arr[s[i]-'a']++;
        }

        for(int i=0; i<26; i++)
        {
            if (hash_arr[i]>=2)
            {
                temp =1;
            }
        }

        if(temp==1)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;  
        
    }
}
   

