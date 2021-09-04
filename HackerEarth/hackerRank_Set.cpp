/*
Problem URL:https://www.hackerrank.com/challenges/cpp-sets/problem
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    unordered_set<long long> s;
    cin>>t;
    while(t--)
    {
        int q,val;
    
        cin>>q>>val;
        switch (q) {
        case 1:
        {
            s.insert(val);
            break;
        }
        case 2:
        {
            auto it=s.find(val);
            if(it!=s.end())
                s.erase(val);
            break;
        }
        case 3:
        {
            auto it = s.find(val);
            if(it!=s.end())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
            break;
        }
        }
        
    } 
    return 0;
}
