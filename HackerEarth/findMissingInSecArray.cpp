#include <bits/stdc++.h>
using namespace std;

/*
PROBLEM URL: https://practice.geeksforgeeks.org/problems/in-first-but-second5423/1
*/


// Submitted over the GFG -----------------> Complier showing segmentation error ---> I think it is due to space complexity issue
// I will rectufy this after studying the hash tables etc.
class Solution{
	
	public:
	vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    // Your code goes here
	    vector<long long> v;
	    int hash [N+1]={0};
	    for(int i=0; i<M; i++)
	    {
	        hash[B[i]]++;
	    }
	    
	    for(int i=0; i<N; i++)
	    {
	        if(hash[A[i]] == 0)
	        {
	            v.push_back(A[i]);
	        }
	    }
	    
	    return v;
	    
	} 
};


// My VSCODE SOLUTION
int main()
{
    int n=6;
    int m =5;
    int a[n]={1,2,3,4,5,10};
    int b[m]={2,3,1,0,5};

    vector<int> v;

    int hash [n+10]={0};
     for(int i=0; i<m; ++i)
	    {
	        hash[b[i]]++;
            cout<<hash[b[i]]<<endl;
	    }
	    
	    for(int i=0; i<n; i++)
	    {
	        if(hash[a[i]] == 0)
	        {
	            v.push_back(a[i]);
	        }
	    }
	    for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }

}