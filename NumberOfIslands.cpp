class Solution {
public:
    int count = 0;

    void dfs(int i, int j, vector<vector<char>>& grid ){
        if ( i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size()) 
            return;
        if(grid[i][j] == '0' || grid[i][j] == '#'){
            return;
        }
        grid[i][j] = '#';

        dfs(i+1, j, grid);
        dfs(i-1, j, grid);
        dfs(i, j +1, grid);
        dfs(i, j-1, grid);
    }

    int numIslands(vector<vector<char>>& grid) {
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == '1'){
                    dfs(i, j, grid); 
                    count++;
                }
            }
        }


        return count;
    }
};
