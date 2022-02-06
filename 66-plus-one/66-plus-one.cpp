class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        digits[digits.size()-1]+=1;
        int carry=digits[digits.size()-1]/10;
        digits[digits.size()-1]%=10;
        for(int i=digits.size()-2;i>=0;i--){
            if(carry==1){
                digits[i]+=1;
                carry=digits[i]/10;
                digits[i]%=10;
            }
        }
        if(carry==1){
            digits.insert(digits.begin(),1);
        }
        
    
        return digits;
    }
};