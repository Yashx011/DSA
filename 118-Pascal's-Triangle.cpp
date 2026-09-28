class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
    vector<vector<int>> ansTri;
    for(int i =1; i <=n; i++){
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int j = 1; j<i; j++){
            ans = ans*(i-j);
            ans = ans/(j);
            ansRow.push_back(ans);
        }
    
    ansTri.push_back(ansRow);
    }
 
    return ansTri;
    }
};