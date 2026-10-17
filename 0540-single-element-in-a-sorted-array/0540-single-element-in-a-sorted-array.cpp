
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // Make mid even
            if (mid % 2 == 1) {
                mid--;
            }

            if (nums[mid] == nums[mid + 1]) {
                // Single element is in the right half
                low = mid + 2;
            } else {
                // Single element is in the left half or at mid
                high = mid;
            }
        }

        return nums[low];
    }
};
