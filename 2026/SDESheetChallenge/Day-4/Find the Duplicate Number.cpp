class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int n = arr.size();
        int repeat = -1;

        for (int i = 0; i < n; i++) {
            int val = abs(arr[i]);

            if (arr[val - 1] > 0) {
                arr[val - 1] = -arr[val - 1];
            } else {
                repeat = val;
            }
        }
        return repeat;
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        slow = nums[slow];
        fast = nums[nums[fast]];

        while (slow != fast) {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};