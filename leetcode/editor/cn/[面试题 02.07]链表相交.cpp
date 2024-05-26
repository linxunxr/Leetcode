
#include <algorithm>

using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    /*struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x): val(x), next(nullptr) {}
    };*/
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curA = headA;
        ListNode* curB = headB;
        // AB长度
        int lenA = 0, lenB = 0;
        while (curA != nullptr) {
            lenA++;
            curA = curA->next;
        }
        while (curB != nullptr) {
            lenB++;
            curB = curB->next;
        }
        curA = headA;
        curB = headB;
        // 根据AB长度，让curA称为最长链表的头
        if (lenB > lenA) {
            swap(lenA, lenB);
            swap(curA, curB);
        }
        // 求长度差
        int gap = lenA - lenB;
        // 末尾位置对齐
        while (gap--) {
            curA = curA->next;
        }
        // 开始遍历AB，遇到相同则返回
        while (curA != nullptr) {
            if (curA == curB) {
                return curA;
            }
            curA = curA->next;
            curB = curB->next;
        }
        return nullptr;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
