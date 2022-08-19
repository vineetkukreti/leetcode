https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/discuss/2450651/C++-oror-100-faster-oror-very-easy-approach-or-stack

921. Minimum Add to Make Parentheses Valid
*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Minimum Add to Make Parentheses Valid.
Memory Usage: 6.4 MB, less than 26.47% of C++ online submissions for Minimum Add to Make Parentheses Valid.

#include<stack>
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> sk;
        int count = 0;
        for(char a : s)
        {
            if(a=='(')
            {
                sk.push(a);
                
            }
            else
            if(a==')' && sk.empty()!=true )    
            {
             if(sk.top()=='(')
              {
                    sk.pop();
                 count++;
              }
               
            }
        }
        
      

        return s.length() - count*2;;
    }
};