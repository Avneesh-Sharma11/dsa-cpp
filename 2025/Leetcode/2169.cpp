// class Solution {
// public:
//     int countOperations(int num1, int num2) {
//         int cnt = 0;
//         while (num1 > 0 && num2 > 0) {
//             int diff = abs(num1 - num2);
//             if (num1 < num2) {
//                 num2 = diff;
//             } else {
//                 num1 = diff;
//             }
//             cnt++;
//         }
//         return cnt;
//     }
// };