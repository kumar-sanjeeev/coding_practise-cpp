// Vectors and pais
#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,int> p;
    p = make_pair(1,2);     // syntax of pair
    cout<<p.first<<" "<<p.second<<endl; // how to write the output of pair
    pair<int,int> p1 = p;  // copying is allowed in pairs

    // Array of pairs

    pair<int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]=make_pair(3,4);
    p_array[2]=make_pair(5,6);

    for(int i=0; i<3; i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    
}

