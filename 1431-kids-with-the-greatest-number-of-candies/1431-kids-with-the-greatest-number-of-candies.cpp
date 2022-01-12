class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
     vector<bool> s;
        int max=candies[0];
        
        for(int i=0;i<candies.size();i++){
            if(candies[i]>=max){
                max=candies[i];
            }
           }
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=max){
                s.push_back(true);
            }
            else{
                s.push_back(false);
            }
        }
        return s;
    }
};