class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        int maxProduct = nums[0];
        int minProduct = nums[0];
        int result = nums[0];

        for(int i = 1; i < n; i++) {

            int num = nums[i];

            if(num < 0) {
                swap(maxProduct, minProduct);
            }

            maxProduct = max(num, maxProduct * num);
            minProduct = min(num, minProduct * num);

            result = max(result, maxProduct);
        }

        return result;
    }
};