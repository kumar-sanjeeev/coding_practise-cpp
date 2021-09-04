/*
Problem URL:https://www.hackerearth.com/problem/algorithm/monks-birthday-party/
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    set<string> s;
    int n;
    cin>>n;
    while(n--)
    {
      string str;
      cin>>str;
      s.insert(str);
    }

    for(auto it=s.begin(); it!=s.end(); it++)
    {
      cout<<*it<<endl;
    }
  }
}