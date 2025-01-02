class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>arr;
        for(int i=1;i<=n;i++){
            arr.push_back(i);
        }
        int strt=0;
        while(arr.size()>1){
            int rem=(strt+k-1)%arr.size();
            arr.erase(arr.begin()+rem);
            strt=rem;
        }
        return arr.front();
    }
};
