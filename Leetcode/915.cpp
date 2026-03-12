// T.C --> O(n), S.C --> O(n)
class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n);
        vector<int> right(n);
        int l = INT_MIN, r = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            l = max(l, nums[i]);
            r = min(r, nums[n - i - 1]);

            left[i] = l;
            right[n - i - 1] = r;
        }

        for (int i = 0; i < n-1; i++) {
            if (left[i] <= right[i + 1])
                return i + 1;
        }
        return -1;
    }
};

// T.C --> O(n), S.C --> O(1)

class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int left = nums[0];
        int maxi = nums[0];
        int pidx = 0;

        for (int i = 1; i < nums.size(); i++) {
            maxi = max(maxi, nums[i]);

            if (nums[i] < left) {
                pidx = i;
                left = maxi;
            }
        }
        return pidx + 1;
    }
};