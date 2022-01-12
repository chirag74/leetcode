class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> s;
        
       //  for(int i=0;i<nums.size();i++){
       //      s.push_back(nums[i]);
       //  }
       // vector<int> r;
       //  r.insert(r.end(),nums.begin(),nums.end());
       //  r.insert(r.end(),s.begin(),s.end());
        s.insert(s.end(),nums.begin(),nums.end());
        s.insert(s.end(),s.begin(),s.end());
        return s;
    }
};