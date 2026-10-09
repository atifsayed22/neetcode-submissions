class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = i;
        }
        vector<int> ans(2);
        for (int i = 0; i < nums.size(); i++) {
            int b = target - nums[i];

            if (mp.find(b)!=mp.end() && mp[b] != i ) {
               

               return {i , mp[b]} ; 
                
            }
        }

        return {}; 
    }
};
