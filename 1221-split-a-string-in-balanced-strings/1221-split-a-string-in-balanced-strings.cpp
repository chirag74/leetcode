class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0;
            int ptr1=0;
            int ptr2=0;
            for(int i=0;i<s.length();i++){
                    if(s[i]=='R'){
                            ptr1++;
                    }
                    else{
                            ptr2++;
                    }
                    if(ptr1==ptr2){
                            count++;
                    }
            }
            return count;
    }
};