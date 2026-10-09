class Solution {
public:

    string encode(vector<string>& strs) {

        string s = "" ; 

        for (string str : strs){
            s += to_string(str.size()) + "#" + str ; 
        }

        return s ;
    }

    vector<string> decode(string s) {


        if (s.empty()) return {} ; 
        vector<string> ans ; 

        int i = 0 ; 

        while(i < s.size()){
            int j = i ; 
            while(s[j]!='#'){
                j++ ;
            }
            int len = stoi(s.substr(i , j - i )) ; 

            // extract the word 

            string w = s.substr(j+1 , len) ; 

            ans.push_back(w) ;

            i = j + len + 1 ; 
        }


        return ans ; 
      
    }
};
