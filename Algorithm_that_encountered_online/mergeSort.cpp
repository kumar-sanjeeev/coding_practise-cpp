#include <bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int a[N];
void merge(int l, int r, int mid)
{
    int l_size = mid-l+1;
    int Left[l_size + 1];
    int r_size = r-(mid+1)+1;
    int Right[r_size + 1];

    // copying elements from a into Left array (from l to mid)
    for(int i=0; i<l_size; i++)
    {
        Left[i]=a[i+l];
    } 

    // copying elements from a into Left array (from l to mid)
    for(int i=0; i<r_size; i++)
    {
        Right[i]=a[mid+1+i]; 
    } 

    Left[l_size] = Right[r_size] = INT_MAX;   // did to remove the while loop

    //Now I am writing the merge algorithm from two already sorted array(which has been divided
   //into two parts left and Right)

   int l_i = 0;
   int r_i = 0;
   for(int i = l ; i<=r; i++)
   {
       if(Left[l_i]<=Right[r_i])
       {
           a[i]=Left[l_i];
           l_i++;
       }
       else
       {
           a[i]= Right[r_i];
           r_i++;
       }
   }
}


void mergeSort(int l, int r)
{
    if(l==r)
        return;
    int mid = (l+r)/2;
    mergeSort(l,mid);
    mergeSort(mid+1,r);
    merge(l,r,mid);
}


int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    mergeSort(0,n-1);
    for(int i = 0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
} 