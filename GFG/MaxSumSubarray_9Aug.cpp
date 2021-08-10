#include <bits/stdc++.h>
using namespace std;

/*
Problem URL: https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1#
FINAL SOLUTION: Don't knw what this techinique called.
*/

class Solution{   
public:
    int maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        
        int intial_sum =0;
        int start_index = 0;
        for(int i=0; i<K; i++)
        {
            intial_sum = intial_sum + Arr[i];
        }
        
        int max_sum = intial_sum;
        
        for(int i=K; i<N; i++)
        {
            intial_sum = intial_sum + Arr[i]-Arr[start_index];
            start_index++;
            if (intial_sum > max_sum)
            {
                max_sum = intial_sum;
            }
        }
        
        return max_sum;
    }
};

/*
Sorting Algo will not work---> bcz we can not change the pos of the element
*/
int main()
{
    int n,k;
    cin>>n>>k;

    vector<int> 
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);           
    int sum =0;
    int j =n-1;
    while(k!=0)
    {
        sum = sum + a[j];
        k--;
        j--;
    }

    cout<<sum<<endl;
}
