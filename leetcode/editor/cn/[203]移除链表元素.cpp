
using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)

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
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // 构造虚拟头结点，用来将可能删除结点为头结点转化为非头结点的删除
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode* cur = dummyHead;
        // 开始遍历
        while (cur->next != nullptr) {
            // 如果下一指针的值等于目标值，则进行删除
            if (cur->next->val == val) {
                ListNode* tmp = cur->next;
                cur->next = cur->next->next;
                delete tmp;
            } else {
                // 如果不是，则右移
                cur = cur->next;
            }
        }
        // 去掉虚拟头结点
        head = dummyHead->next;
        delete dummyHead;
        return head;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
