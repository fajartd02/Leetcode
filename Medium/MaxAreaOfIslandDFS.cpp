#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int max(int a, int b) {
        if(a > b) return a;
        return b;
    }
    
    int dfs(vector<vector<int>>& grid, int row, int col, int size_row, int size_col) {
        
        if(col < 0 || row < 0) return 0;
        if(col >= size_col || row >= size_row) return 0;
        if(grid[row][col] != 1) return 0;
        
        grid[row][col] = 0;
        return 1 + 
            dfs(grid, row + 1, col, size_row, size_col) + 
            dfs(grid, row-1, col, size_row, size_col) + 
            dfs(grid, row, col + 1, size_row, size_col) + 
            dfs(grid, row, col-1, size_row, size_col);
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        
        int size_row = grid.size();
        int size_col = grid[0].size();
        
        int result = 0;
        for(int i = 0; i < size_row; i++) {
            for(int j = 0; j < size_col; j++) {
                if(grid[i][j] == 1) result = max(result, dfs(grid, i, j, size_row, size_col));
            }
        }
        
        return result;
        
    }
};

int main() {
    // vector<int> tes(100,0);
    // tes[0] = 1;
    // // tes.push_back(10);
    // cout << tes[0];
    // cout << "Hello";


    return 0;
}