class Solution {
public:
    string getHint(string secret, string guess) {
        int x=0;
        int y=0;
        vector<int>sec(10,0);
        vector<int>gue(10,0);
        for(int i=0;i<secret.length();i++){
            if(secret[i]==guess[i]) x++;
            else{
                sec[secret[i]-'0']++;
                gue[guess[i]-'0']++;
            }
        }
            for(int i=0;i<10;i++){
                y+=min(sec[i],gue[i]);
            }
            string ans="";
            ans+=to_string(x);
            ans+="A";
            ans+=to_string(y);
            ans+="B";
            return ans;
        
    }
};