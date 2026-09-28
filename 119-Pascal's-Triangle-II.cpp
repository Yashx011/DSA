class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans;
        long long current = 1;
        int n = rowIndex;
        for(int i =0 ; i<=n; i++){
            ans.push_back(current);
            current = current*(n-i);
            current = current/(i+1);
            

        }
        return ans;
    }
};