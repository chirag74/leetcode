class Solution {
public:
    void reverse(vector<char>& st, int s, int e){
        
        while(s<e){
            swap(st[s],st[e]);
            s++;
            e--;
        }
    }
    void reverseString(vector<char>& s) {
      int n=s.size();
        reverse(s,0,n-1);
    }
};