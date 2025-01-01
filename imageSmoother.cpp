class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int dr[]={-1,-1,-1,0,0,1,1,1};
        int dc[]={-1,0,1,-1,1,-1,0,1};
        vector<vector<int>>ans(img.size(),vector<int>(img[0].size(),-1));
        for(int i=0;i<img.size();i++){
            for(int j=0;j<img[0].size();j++){
                int sum=img[i][j];
                int cnt=1;
                for(int k=0;k<8;k++){
                    int newr=i+dr[k];
                    int newc=j+dc[k];
                    if(newr>=0 && newr<img.size() && newc>=0 && newc<img[0].size()){
                        sum+=img[newr][newc];
                        cnt++;
                    }
                }
ans[i][j]=floor(sum/cnt);
            }
        }
        return ans;
    }
};