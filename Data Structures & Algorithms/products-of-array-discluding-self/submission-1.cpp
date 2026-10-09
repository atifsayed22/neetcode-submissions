class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         vector<int> res(nums.size());
  


        int n = nums.size() ; 


         res[0] = 1 ; 
         

        //Calculating prefix 
        for(int i = 1 ; i < n ; i++){
            res[i] = res[i-1] * nums[i-1] ;
        }
       

        int suffix = 1 ; 


        for(int i = n-1 ; i >= 0 ; i--){
            res[i] *= suffix; 
            suffix *= nums[i] ; 
        }


        return res ; 


    }
};
