class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> st(n);
        for(int i=0;i<n;i++){
        int z=start+2*i;
            st.push_back(z);
        }
        int ans=st[0];
        for(int i=1;i<st.size();i++){
        ans^=st[i];
        }
        return ans;
    }
};