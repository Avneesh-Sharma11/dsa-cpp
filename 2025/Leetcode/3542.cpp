// T.C --> O (n * u) u -> size of set...
// 
// class Solution {
// public:
//     int minOperations(vector<int>& nums) {
//         unordered_set<int> st(nums.begin(), nums.end());
//         int op = 0;
//         for(int num : st){
//             if(num == 0) continue;

//             bool flow = false;

//             for(int i = 0; i < nums.size(); i++){
//                 if(num == nums[i]){
//                     if(!flow){
//                         flow = true;
//                         op++;
//                     }
//                 }else if(num > nums[i]){
//                     flow = false;
//                 }
//             }
//         }
//         return op;
//     }
// };



// T.C --> O(2*n) --> O(n)
// 
// class Solution {
// public:
//     int minOperations(vector<int>& nums) {
//         stack<int> st;

//         int ops = 0;
//         for (int num : nums) {
//             while (!st.empty() && num < st.top()) {
//                 st.pop();
//             }
//             if (num == 0) continue;
//             if (st.empty() || num > st.top()) {
//                 st.push(num);
//                 ops++;
//             }
//         }
//         return ops;
//     }
// };