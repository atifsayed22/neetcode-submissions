class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int res = 0;

        for (int num : nums) {
            if (!st.count(num - 1)) {
                int len = 0;
                int curNum = num;
                while (st.count(curNum)) {
                    len++;
                    curNum++;
                }
            res = max(len, res);
            }

        }

        return res;
    }
};
