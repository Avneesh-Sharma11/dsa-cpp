class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int pvt = -1;
        for (int i = nums.size() - 1; i > 0; i--) {
            if (nums[i - 1] < nums[i]) {
                pvt = i - 1;
                break;
            }
        }
        if (pvt != -1) {
            for (int i = nums.size() - 1; i >= pvt; i--) {
                if (nums[pvt] < nums[i]) {
                    swap(nums[pvt], nums[i]);
                    break;
                }
            }
        }
        reverse(nums.begin() + pvt + 1, nums.end());
    }
};