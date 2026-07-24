class Solution {
private:
    void bfs(int r , int c , vector<vector<int>> &vis , vector<vector<char>>& grid , int n , int m){
        vis[r][c] = 1 ;

        queue<pair<int ,int>> q;
        q.push({r,c});

        int dx[4] = { -1,1,0,0};
        int dy[4] = {0 , 0 ,-1,1};

        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            for(int i = 0 ; i < 4 ; i++){
                int nx = x + dx[i];
                int ny = y + dy[i];

                if(nx >= 0 && nx < n && ny >= 0 && ny < m && !vis[nx][ny] && grid[nx][ny] == '1'){
                    vis[nx][ny] = 1;
                    q.push({nx,ny});
                }
            }

        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n , vector<int>(m,0));
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(vis[i][j] == 0 && grid[i][j] == '1'){
                    cnt++;
                    bfs(i , j , vis , grid , n , m); 
                }
            }
        }
        return cnt ;
    }
};
