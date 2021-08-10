/* PROBLEM URL:https://leetcode.com/problems/contains-duplicate/
Given an integer array nums, return true if any value appears at least twice in the array,
 and return false if every element is distinct.

 1 <= nums.length <= 105
-109 <= nums[i] <= 109
*/



/*
Approach No1:
I have used the Sorting approach for this problem
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size()-1; i++)
        {
            
            if(nums[i]==nums[i+1])
            {
                return true;
            }
        }
        return false;
        
    }
};

