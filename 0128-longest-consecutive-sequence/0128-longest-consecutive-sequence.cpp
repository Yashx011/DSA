class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int longest = 1;
        int smaller = INT_MIN;
        int n = nums.size();
        sort(nums.begin() , nums.end());
        int curcnt = 1;
        for(int i = 0; i<n; i++){
           if(nums[i]- 1 == smaller ){
            curcnt++;
            smaller = nums[i];
           }
           else if(smaller != nums[i]){
            curcnt = 1;
            smaller = nums[i];
         }

         longest = max(longest , curcnt);
            
        }
        return longest;
    }
};