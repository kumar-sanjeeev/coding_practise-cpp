
/*PROBLEM URL: https://leetcode.com/problems/single-number/

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

*/


// <-----------------This question can also be solved with Hasing, MAP and XOR ------------->

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        if (nums.size()<2)
        {
            return nums[0];
        }
        
        for(int i=1; i<nums.size(); i=i+2)
        {
            if(nums[i]!=nums[i-1])
            {
                return nums[i-1];
            }
        }
        return nums[nums.size()-1];
    
    }
};