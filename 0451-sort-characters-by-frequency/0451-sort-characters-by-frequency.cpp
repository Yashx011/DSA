class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>freq;
        vector<pair<char, int>>temp;
        string ans = "";
        for(char ch : s){
            freq[ch]++;
        }
        for(auto it : freq){
            
            temp.push_back(it);
           
        }
        sort(temp.begin(), temp.end(), [](auto a, auto b) {
            return a.second > b.second;
}); 
           for (auto it : temp) {
            for (int i = 0; i < it.second; i++) {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};