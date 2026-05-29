// class Solution {
// public:
//     int minLengthAfterRemovals(string s) {
//         int countA = 0;
//         int countB = 0;
//         for (char ch : s) {
//             if (ch == 'a')
//                 countA++;
//             if (ch == 'b')
//                 countB++;
//         }
//         if(countA == countB)return 0;

//         return abs(countA-countB);
//     }
// };