/*
This approach is called the Kadene's Algrothim
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i =0; i<n; i++)
        cin>>a[i];

    int c_sum = a[0]; int m_sum = a[0];

    for(int i=1; i<n; i++)
    {
        c_sum = max(a[i],c_sum+a[i]);
        m_sum = max(m_sum, c_sum);
    }
    cout<<m_sum<<endl;
}