#include <bits/stdc++.h>

using namespace std;

/*

URL : https://leetcode.com/problems/remove-element/

Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.
*/


class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {

        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == val)
            {
                count++;
            }
        }

        remove(nums.begin(), nums.end(), val);
        return nums.size() - count;
    }
};




// -------------->Approach 2 <-----------------------
// int removeElement(vector<int> &nums, int val)
// {
//     int j = nums.size() - 1;
//     int counter = 0;
//     int temp;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] == val && nums[i + 1] != val && i < nums.size() - 1)
//         {
//             temp = nums[i];
//             nums[i] = nums[i + 1];
//             nums[i + 1] = temp;
//             counter++;
//         }

//         else if (nums[i] == val && nums[i + 1] == val && i < j)
//         {
//             while (j != i)
//             {
//                 if (nums[j] != val)
//                 {
//                     temp = nums[i];
//                     nums[i] = nums[j];
//                     nums[j] = temp;
//                     counter++;
//                     j--;
//                     break;
//                 }
//                 else
//                 {
//                     j--;
//                 }
//             }
//         }
//     }

//     int val_rev = counter;
//     while (counter != 0)
//     {
//         nums.pop_back();
//         counter--;
//     }
//     return val_rev;
// }


// int main()
// {
//     vector<int> v = {0, 1, 2, 2, 3, 0, 4, 2};
//     int val = 2;
//     cout << removeElement(v, val) << endl;

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }
