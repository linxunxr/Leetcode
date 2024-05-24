
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
    ListNode* swapPairs(ListNode* head) {
        // 设置虚拟头结点用以方便交换
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode* cur = dummyHead;
        // 遍历
        while (cur->next != nullptr && cur->next->next != nullptr) {
            // 两个临时节点
            ListNode* tmp = cur->next;
            ListNode* tmp1 = cur->next->next->next;
            // 交换
            cur->next = cur->next->next;
            cur->next->next = tmp;
            cur->next->next->next = tmp1;
            // 移动，准备下一轮交换
            cur = cur->next->next;
        }
        ListNode* result = dummyHead->next;
        delete dummyHead;
        return result;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
