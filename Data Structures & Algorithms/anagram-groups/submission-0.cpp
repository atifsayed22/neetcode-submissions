class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

     unordered_map<string , vector<string> > mp ; 

     for (string w : strs ){

        string word = w ; 

        sort(w.begin() , w.end()) ; 

        mp[w].push_back(word) ; 

        
     }   

     vector<vector<string>> ans ; 

     for(auto p : mp){
        ans.push_back(p.second)  ; 
     }

     return ans ; 
    
    }
};
