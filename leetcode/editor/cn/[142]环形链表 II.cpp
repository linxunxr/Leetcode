
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
    ListNode *detectCycle(ListNode *head) {
        // 双指针法
        ListNode* fastIndex = head;
        ListNode* slowIndex = head;
        // 遍历
        while (fastIndex != nullptr && fastIndex->next != nullptr) {
            slowIndex = slowIndex->next;
            fastIndex = fastIndex->next->next;
            // 两指针相遇，此时从head 和 相遇点，同时查找
            while (slowIndex == fastIndex) {
                ListNode* index1 = fastIndex;
                ListNode* index2 = head;
                while (index1 != index2) {
                    index1 = index1->next;
                    index2 = index2->next;
                }
                // 返回环入口
                return index2;
            }
        }
        return nullptr;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
