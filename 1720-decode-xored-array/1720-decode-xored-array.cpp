class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n=encoded.size();
        vector<int> st(n+1);
        st[0]=first;
        for(int i=0;i<n;i++){
            st[i+1]=encoded[i]^st[i];
        }
        return st;
    }
};