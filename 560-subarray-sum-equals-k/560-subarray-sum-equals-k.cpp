class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      int count=0;
//             for(int start=0;start<nums.size();start++){
//                     int sum=0;
                    
//                     for(int end=start;end<nums.size();end++){
//                             sum+=nums[end];
//                             if(sum==k)
//                                     count++;
//                     }
//             }
//             return count;
            
            int sum=0;
            
            unordered_map<int,int>map;
            map[0]++;
            for(int i=0;i<nums.size();i++){
                    sum+=nums[i];
                    auto itr=map.find(sum-k);
                    if(itr!=map.end())
                          count+=itr->second;
                    map[sum]++;
            }
            return count;
    }
};