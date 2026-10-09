class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

     unordered_map<string , vector<string> > mp ; 

     for (string w : strs ){

       vector<int> freq(26 , 0) ; 

       for(char c : w) {
            freq[c - 'a']++ ; 
       }

       string k = "" ; 

       for(int n : freq) {
        k+= to_string(n) + "#" ; 
       }


       mp[k].push_back(w) ; 


     }   

     vector<vector<string>> ans ; 

     for(auto p : mp){
        ans.push_back(p.second)  ; 
     }

     return ans ; 
    
    }
};
