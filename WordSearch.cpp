
//Leetcode Question 79. Word Search
class Solution {
public:
    // Time Complexity : O(N * 3^L)
    bool exist(vector<vector<char>>& board, string word) {
        
        vector<vector<int>> dir = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        
    for ( int i = 0; i < board.size(); i++) 
        for ( int j = 0; j < board[0].size(); j++) 
            if (dfs(board, i, j, word, 0, dir))
                return true;
    return false;
}

bool dfs(vector<vector<char>>& board, int row, int col, string& word, int index, vector<vector<int>>& dir) {
    
    if (index >= word.length())
        return true;
    
    if (row < 0 || row >= board.size() || col < 0 || col >= board[0].size() || board[row][col] != word[index])  
        return false;
    
    char c = board[row][col];
    board[row][col] = '*';
    
   for (int d = 0; d < 4; ++d){
    if (dfs(board, row + dir[d][0], col + dir[d][1], word, index + 1, dir))
        return true;
   }
    board[row][col] = c;
    return false;
}
};
