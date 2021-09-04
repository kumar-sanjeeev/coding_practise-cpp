#include <bits/stdc++.h>
using namespace std;

const int N=100;
int hsh1[N];
int hsh2[N];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string str1, str2;
        cin>>n>>str1>>str2;

        for(int i=0; i<n; i++)
        {
            int x =  str1[i]-'0';
            int y =  str2[i]-'0';
            hsh1[i] = x;
            hsh2[i] = y;
        }

        int count1_1=0, count1_0=0, count0_1=0,count0_0=0;
        int total_count=0;
        for(int i=0; i<n; i++)
        {
            if(hsh1[i]==0 and hsh2[i]==0)
                count0_0++;
            else if (hsh1[i]==1 and hsh2[i]==0)
                count1_0++;
            else if (hsh1[i]==0 and hsh2[i]==1)
                count0_1++;
            else if (hsh1[i]==1 and hsh2[i]==1)
                count1_1++;    
        }
        int temp = min(count0_1,count1_0);
        count0_1 -=temp;
        count1_0 -=temp;

        total_count +=temp;

        temp = min(count1_1, (count0_0+count0_1+count1_0));
        total_count +=temp;
        count1_1 -=temp;

        total_count +=count1_1/2;
        cout<<total_count<<endl;
    }
}

