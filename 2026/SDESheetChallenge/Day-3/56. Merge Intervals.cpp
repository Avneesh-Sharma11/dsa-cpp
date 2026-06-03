class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        res.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++) {
            vector<int> pre = res.back();

            if (pre[1] >= intervals[i][0]) {
                res.pop_back();
                if (pre[1] < intervals[i][1])
                    pre[1] = intervals[i][1];
                res.push_back(pre);
            } else {
                res.push_back(intervals[i]);
            }
        }
        return res;
    }
};
