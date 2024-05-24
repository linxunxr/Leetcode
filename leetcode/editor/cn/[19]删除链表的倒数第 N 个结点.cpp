
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
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };*/
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // 双指针法
        // 虚拟头结点
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        // 慢指针
        ListNode* slowIndex = dummyHead;
        // 快指针
        ListNode* fastIndex = dummyHead;
        // 先移动快指针到倒数n个位置
        while (n-- && fastIndex != nullptr) {
            fastIndex = fastIndex->next;
        }
        // 慢指针需要指向删除结点的上一个节点
        fastIndex = fastIndex->next;
        while (fastIndex != nullptr) {
            fastIndex = fastIndex->next;
            slowIndex = slowIndex->next;
        }
        // 删除节点
        slowIndex->next = slowIndex->next->next;
        return dummyHead->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
