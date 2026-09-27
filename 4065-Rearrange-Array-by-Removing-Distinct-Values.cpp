class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        vector<int> ans;
        map<int, int> freq;

        
        for (int x : nums) {
            freq[x]++;
        }

        
        int remaining = nums.size();

        
        while (remaining > 0) {

            // map automatically ascending order mein hai
            for (auto &it : freq) {

                
                if (it.second > 0) {

                    
                    ans.push_back(it.first);

                    
                    it.second--;

                    
                    remaining--;
                }
            }
        }

        return ans;
    }
};