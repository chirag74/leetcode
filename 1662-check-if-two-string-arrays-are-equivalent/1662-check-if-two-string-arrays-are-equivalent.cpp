#include<string>
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string z;
        string x;
   for(int i=0;i<word1.size();i++)
   {
        z+=word1[i];
   }
        for(int i=0;i<word2.size();i++)
   {
        x+=word2[i];
   }
        if(z==x){
            return true;
        }
        return false;
    }
};