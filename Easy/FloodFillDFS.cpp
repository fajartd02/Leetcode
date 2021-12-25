#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void dfs(vector<vector<int>> &image, int r, int c, int sizeRows, int sizeCol, int color, int newColor) {
        if(r < 0 || c < 0 || r >= sizeRows || c >= sizeCol) return;
        else if(image[r][c] != color) return;
            
        image[r][c] = newColor;
        dfs(image, r-1, c, sizeRows, sizeCol, color, newColor); // top
        dfs(image, r+1, c, sizeRows, sizeCol, color, newColor); // bottom
        dfs(image, r, c-1, sizeRows, sizeCol, color, newColor); // left
        dfs(image, r, c+1, sizeRows, sizeCol, color, newColor); // right
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] == newColor) return image;
        int color = image[sr][sc];
        int sizeRows = image.size();
        int sizeCol = image[0].size();
        dfs(image, sr, sc, sizeRows, sizeCol, color, newColor);
        return image;
    }
    
};

int main() {

    return 0;
}