class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char t: s){
            if(t == '('||t=='{'||t=='['){
                st.push(t);
            }
            else if(!st.empty()&&((t==')' and st.top() =='(')||(t=='}' and st.top() =='{')||(t==']' and st.top() =='['))){
                
                    st.pop();
                
            }
             else{
                 return false;
            }
            
        }
        return st.empty();
    }
};
