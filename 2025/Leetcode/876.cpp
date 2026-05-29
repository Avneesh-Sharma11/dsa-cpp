/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* temp = head;
//         int count = 0;
//         while (temp != NULL) {
//             count++;
//             temp = temp -> next;
//         }
//         if (count % 2 != 0) {
//             count /= 2;
//             ListNode* temp1 = head;
//             while (temp1 != NULL) {
//                 if (count == 0) {
//                     return temp1;
//                 }
//                 temp1 = temp1->next;
//                 count--;
//             }
//         } else {
//             count /= 2;
//             ListNode* temp2 = head;
//             while (temp2 != 0) {
//                 if (count == 0) {
//                     return temp2;
//                 }
//                 count--;
//                 temp2 = temp2->next;
//             }
//         }
//         return head;
//     }
// };