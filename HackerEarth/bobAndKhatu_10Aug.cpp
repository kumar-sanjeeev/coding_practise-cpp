/* PROBLEM URL: https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/bob-and-string-easy/

Bob and Khatu both love the string. Bob has a string S and Khatu has a string T.
They want to make both string S and T to anagrams of each other. Khatu can apply two operations to convert string T to anagram of string S which are given below:
1.) Delete one character from the string T.
2.) Add one character from the string S.

Khatu can apply above both operation as many times he want. 
Find the minimum number of operations required to convert string T so that both T and S will become anagram of each other.
*/


// APPROACH USED : HASING

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t != 0)
    {
        string s1, s2;
        cin >> s1 >> s2;

        int a[26] = {0};
        int b[26] = {0};

        int size1 = s1.length();
        int size2 = s2.length();

        for (int i = 0; i < size1; i++)
        {
            a[s1[i] - 'a']++;
        }

        for(int i = 0; i< size2; i++)
        {
            b[s2[i] - 'a']++;
        }

        int count = 0;

        for (int i = 0; i < 26; i++)
        {
            while(a[i]!=b[i])
            {
                if(a[i]<b[i])
                {
                    a[i]++;
                    count++;
                }
                else
                {
                    b[i]++;
                    count++;
                }
            }
        }
        cout << count << endl;

        t--;
    }
}