class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
            if(s.length()==0){
                    return true;
            }
            if(s.length()==1){
                    return false;
            }
        for(int i=0;i<s.length();i++){
                char c=s[i];
            if(c=='}' || c==')' || c==']'){
                    if(st.size()==0)return false;
                    if(c=='}' && st.top()!='{') return false;                                   if(c==')' && st.top()!='(') return false;
                    if(c==']' && st.top()!='[') return false;
                    st.pop();
                         }
                else
                {
                        st.push(s[i]);
                }
        }
            if(st.size()==0)return true;
            
            return false;
    }
            // stack<char> stack;

//     if(s.length() == 0){
//         return true;
//     }
//     if(s.length() == 1){
//         return false;
//     }
    
//     for(int i =0 ; i < s.length(); i++){
//         char c = s[i];
//         cout << c;
//         if(c == '}'|| c == ')' || c == ']'){
//             if(stack.size() == 0 ) return false;
//             if(c == '}' && stack.top() != '{') return false;
//             if(c == ')' && stack.top() != '(') return false;
//             if(c == ']' && stack.top() != '[') return false;
//             stack.pop();
            
//          } else {
//             stack.push(c);
//         }
//     }
//     cout << "reached end";
//     if(stack.size() == 0) return true;
//     return false;
//     }
};