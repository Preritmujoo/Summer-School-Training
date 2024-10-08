// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     int longestValidParentheses(string s) {
//         stack<int> st;
//         st.push(-1);
//         int count =0;
//         for(int i=0;i<s.length();i++){
//             if(s[i]=='('){ 
//                 st.push(i);
//             }
//             else{
//                 st.pop();
//                 if(!st.empty()){ 
//                     int m = i - st.top();
//                     count = max(count, m);
//                 }

//                 else{ 
//                     st.push(i);
//                 }
//             }
//         }
//         return count;
        
//     }
// };



#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int count =0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){ 
                st.push(i);
            }
            else{
                st.pop();
                if(st.empty())
                    st.push(i);
                else
                    count = max(count, i - st.top());
            }
        }
        return count;
        
    }
};
