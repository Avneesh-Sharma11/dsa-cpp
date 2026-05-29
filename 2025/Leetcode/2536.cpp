
// T.C --> O(n^3)
// class Solution {
// public:
//     vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
//         vector<vector<int>> result(n, vector<int>(n, 0));

//         for (int i = 0; i < queries.size(); i++) {
//             int r1 = queries[i][0];
//             int c1 = queries[i][1];
//             int r2 = queries[i][2];
//             int c2 = queries[i][3];
//             for (int i = r1; i <= r2; i++) {
//                 for (int j = c1; j <= c2; j++) {
//                     result[i][j]++;
//                 }
//             }
//         }
//         return result;
//     }
// };


// T.C --> O(q*n + n*n)
// class Solution {
// public:
//     vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
//         vector<vector<int>> result(n, vector<int>(n, 0));

//         for (auto& querie : queries) {
//             int r1 = querie[0];
//             int c1 = querie[1];
//             int r2 = querie[2];
//             int c2 = querie[3];

//             for (int i = r1; i <= r2; i++) {
//                 result[i][c1] += 1;
//                 if (c2 + 1 < n) {
//                     result[i][c2 + 1] -= 1;
//                 }
//             }
//         }
//         for (int i = 0; i < n; i++) {
//             for (int j = 1; j < n; j++) {
//                 result[i][j] += result[i][j - 1];
//             }
//         }
//         return result;
//     }
// };