#include <bits/stdc++.h>
using namespace std;


/*
URL: https://leetcode.com/problems/reverse-integer/
Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
*/

// Solution Submitted

class Solution {
public:
    int reverse(int x) {
        
        long long signed t = INT_MAX;
        if (x>t)
            return 0;
        long long signed result = 0;
        while(x!=0)
        {
            result = result*10 + (x%10);
            x=x/10;
        }
        
        if(result>t or result <-t)
            return 0;
        else
            return result;
    }
};


// Approach -----> For logic building----> In VS code
int main()
{
    int x = -123;
    int result = 0;
    while(x!=0)
    {
        int last_digit = x%10;
        result = result*10 + last_digit;
        x = x/10;
    }

    cout<<result<<endl;
}