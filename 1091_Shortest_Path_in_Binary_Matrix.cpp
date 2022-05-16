class Solution {
public:
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int actions[8][2]= {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
		int n = grid.size();        
		if(n==1) return 1;
        if(grid[0][0]==1 || grid[n-1][n-1]==1 || n==1) return -1;
				int count = 1;

        queue<pair<int,int>> q;
        q.push({0, 0}); //starting points
        grid[0][0]=1; // visited
        
        while(!q.empty()){
            int q_size = q.size();
            for(int i=0; i< q_size; i++){
                pair<int, int> p = q.front();
                q.pop();
                int x = p.first, y = p.second;
                for(int j = 0; j < 8; j++){
                    int new_x = x + actions[j][0];
                    int new_y = y + actions[j][1];
                    
                    
                    if(new_x >=0 && new_y >=0 && 
                       new_x < n && new_y < n && 
                       grid[new_x][new_y] == 0){
                        if(new_x == n-1 && new_y ==n-1) return count+1;
                        q.push({new_x, new_y});
                        grid[new_x][new_y] = 1;
                        
                    }
                }
                
            }
            count+=1; 
        }
        return -1;
    }
};