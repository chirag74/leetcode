class Solution {
public:
    int maxDepth(string s) {
        stack<string> st;
        int x=0;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push("(");
                x++;
                ans=max(ans,x);
            }
            else if(s[i]==')'){
                x--;
            }
        }
        return ans;
        
    }
};