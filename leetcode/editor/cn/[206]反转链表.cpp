
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
    /*struct ListNode {
        int val;
        ListNode *next;
        ListNode(): val(0), next(nullptr) {}
        ListNode(int x): val(x), next(nullptr) {}
        ListNode(int x, ListNode *next): val(x), next(next) {}
    };*/
    ListNode* reverseList(ListNode* head) {
        // 双指针法
        // cur的下一个节点
        ListNode* tmp;
        ListNode* cur = head;
        ListNode* pre = nullptr;
        // 遍历
        while (cur) {
            tmp = cur->next;
            // 翻转
            cur->next = pre;
            // 更新前后两指针
            pre = cur;
            cur = tmp;
        }
        // 返回结果
        return pre;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
