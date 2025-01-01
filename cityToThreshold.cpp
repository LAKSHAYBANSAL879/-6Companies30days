class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
          vector<vector<long long>> matrix(n, vector<long long>(n, INT_MAX));
        for (const auto& edge : edges) {
            int u = edge[0], v = edge[1], weight = edge[2];
            matrix[u][v] = weight;
            matrix[v][u] = weight;
        }
        for (int i = 0; i < n; ++i) {
            matrix[i][i] = 0;
        }
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    matrix[i][j]=min(matrix[i][j],matrix[i][k]+matrix[k][j]);
                }
            }
        }
        int minCnt=INT_MAX;
        int ans=0;
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(matrix[i][j]<=distanceThreshold){
                    cnt++;
                }
            }
            if(cnt<=minCnt) {
                minCnt=min(minCnt,cnt);
                ans=i;
            }
        }
        return ans;
    }
};