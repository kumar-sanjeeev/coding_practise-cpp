#include <bits/stdc++.h>
using namespace std;

/*

Very important concept which combines both hashing and prefixing

*/
const int N=1e5+10;
int hsh[N][26];

int main()
{
    int t;
    cin>>t;
    while (t--){
        for(int i=0; i<N; i++){
            for(int j=0; j<26; j++)
            {
                hsh[i][j]=0;                  // I am doing this bcz to refresh the hash array in every test case;
            }
        }
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;

        for(int i=0; i<n; i++){
            hsh[i+1][s[i]-'a']++;              // for incrementing the particular char count in the 1-26 char array.
        }

        for(int i=0; i<26; i++){
            for(int j=1; j<=n; j++){
                hsh[j][i] +=hsh[j-1][i];
            }
        }

        while(q--){
            int l,r;
            cin>>l>>r;
            int oddct=0;
            for(int i=0; i<26; i++)
            {
                int charct = hsh[r][i]-hsh[l-1][i];
                if(charct%2 !=0) oddct++;
            }
            if(oddct>1) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
}










// BRUTE FORCE APPROACH
/*
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;

        while(q--)
        {
            int l,r;
            cin>>l>>r;
            int hash[26];

            for(int i=0; i<26; i++)
            {
                hash[i]=0;
            }

            l--, r--;   // To make them 0 made indexing

            for(int i=l; i<=r; i++)
            {
                hash[s[i]-'a']++;
            }

            int count=0;

            for(int i=0; i<26; i++)
            {
                if(hash[i]%2 != 0)
                {
                    count ++;
                }
            }

            if(count>1)
            {
                cout<<"NO"<<endl;
            }
            else
                cout<<"YES"<<endl;
        }
    }
}
*/