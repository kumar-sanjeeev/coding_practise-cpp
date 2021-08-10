/*
Problem URL: https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/pair-sums/


ISSUE with my code: Out of 5 test cases only 2 Accepted, 2 wrong and 1 Run time Error
*/


// SOLUTION NO1 : Using the Hashing

#include <bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int hash_arr [N];

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];
    string result="No";
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
        hash_arr[a[i]]++;
    }

    for(int i=0; i<n; i++)
    {
        if(hash_arr[k-a[i]]!=0)
        {
            result = "Yes";
            break;
        }
    }

    cout<<result<<endl;

}


// Solution No2: Using the sorted array and two pointer approach

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);               // STL sorting algo

    int start = 0;
    int end = n-1;

    string result = "NO";
    while(start<=end)
    {
       int  sum = a[start] + a[end];
        if (sum==k)
        {
            result = "YES";
            break;
        }
        else if (sum>k)
        {
            end--;
        }
        else
        {
            start++;
        }
    }

    cout<<result<<endl;
}