//Array of Vectors 
#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v)
{
    cout<<"Vector Size:"<<v.size()<<endl;
    cout<<"Vector Elemets as: "<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    vector<int> array[n];

    for(int i=0; i<n; i++)
    {
        cout<<"Enter the size of vector: "<<i<<endl;
        int size;
        cin>>size;
        for(int j=0; j<size; j++)
        {
            int x;
            cin>>x;
            array[i].push_back(x);
        }
    }

    for(int i=0; i<n; i++)
    {
        printVector(array[i]);
    }
}