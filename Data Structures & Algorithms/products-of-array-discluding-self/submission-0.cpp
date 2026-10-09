class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         vector<int> left(nums.size());
         vector<int> right(nums.size()) ;


        int n = nums.size() ; 


         left[0] = 1 ; 
         right[n-1] = 1 ; 

        //Calculating prefix 
        for(int i = 1 ; i < n ; i++){
            left[i] = left[i-1] * nums[i-1] ;
        }
        //Calculating suffix 
        for(int i = n-2 ; i >= 0 ; i--){
            right[i] = right[i+1] * nums[i+1] ;
        }

        vector<int> res(n) ; 

        for(int i = 0 ; i < n ; i++){
            res[i] = left[i] * right[i] ; 
        }


        return res ; 


    }
};
