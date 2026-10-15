class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& grid) {
        // check row

        for (int i = 0; i < 9; i++) {
            unordered_set<char> st;
            for (int j = 0; j < 9; j++) {
                char c = grid[i][j];

        
                if(c == '.') continue ; 

                if(st.count(c)) return false  ; 

                st.insert(c)  ; 
               
            }
        }

        // check col

        for (int i = 0; i < 9; i++) {
            unordered_set<char> st;
            for (int j = 0; j < 9; j++) {
                char c = grid[j][i];

                if(c == '.') continue ; 

                if(st.count(c)) return false  ; 

                st.insert(c)  ;
            }
        }


        // check 3 x 3 grid 

        for(int boxRow= 0 ; boxRow < 9 ; boxRow +=3  ){
            for(int boxCol = 0 ; boxCol < 9 ; boxCol +=3 ){


                unordered_set<char> st ; 

                for (int i = 0 ; i < 3 ; i++){
                    for(int j = 0 ; j < 3 ; j++){
                        char num = grid[boxRow + i][boxCol + j] ; 

                        if(num == '.') continue ; 

                        if(st.count(num)) return false  ; 

                        st.insert(num)  ; 
                    }
                }
            }

        
        }

        return true ; 
    }
};
