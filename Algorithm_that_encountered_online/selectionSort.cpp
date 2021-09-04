#include <bits/stdc++.h>
using namespace std;

void selectionSort(int a[], int size)
{
    cout<<"------Running Selection Sort--------"<<endl;
    for(int i=0; i<size; i++)
    {
        int minIndex = i;
        for(int j=i+1; j<size; j++)
        {
            if(a[j]<a[minIndex])
                minIndex = j;
        }
        swap(a[i],a[minIndex]);
    }
}
int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    selectionSort(a,n);

    for(int i = 0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}