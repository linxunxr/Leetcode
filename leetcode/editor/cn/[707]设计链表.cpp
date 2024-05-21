
using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class MyLinkedList {
public:
    // 定义链表节点结构体 单链表
    struct LinkedNode {
        // 数值
        int val;
        // 下一个节点
        LinkedNode* next;
        // 构造
        LinkedNode(int val):val(val), next(nullptr){}
    };
    // 初始化链表
    MyLinkedList() {
        dummyHead_ = new LinkedNode(0);
        size_ = 0;
    }
    // 获取第index个节点数值，如果index非法，返回-1
    int get(int index) {
        if (index > (size_ - 1) || index < 0) {
            return -1;
        }
        // 临时节点
        LinkedNode* tmp = dummyHead_->next;
        // 遍历
        while (index--) {
            tmp = tmp->next;
        }
        return tmp->val;
    }
    // 在链表最前面插入一个节点
    void addAtHead(int val) {
        // 构建新节点
        LinkedNode* newNode = new LinkedNode(val);
        // 插入链表中
        newNode->next = dummyHead_->next;
        dummyHead_->next = newNode;
        size_++;
    }
    // 在链表结尾插入一个节点
    void addAtTail(int val) {
        // 构建新节点
        LinkedNode* newNode = new LinkedNode(val);
        // 临时节点
        LinkedNode* tmp = dummyHead_;
        // 遍历
        while (tmp->next != nullptr) {
            tmp = tmp->next;
        }
        // 加入
        tmp->next = newNode;
        size_++;
    }
    // 在第index个节点之前插入
    void addAtIndex(int index, int val) {
        if (index > size_) {
            return;
        }
        if (index < 0) {
            index = 0;
        }
        LinkedNode* newNode = new LinkedNode(val);
        LinkedNode* tmp = dummyHead_;
        while (index--) {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
        size_++;
    }
    // 删除第index个节点，如果index 大于等于链表的长度，直接return，注意index是从0开始的
    void deleteAtIndex(int index) {
        if (index >= size_ || index < 0) {
            return;
        }
        LinkedNode* cur = dummyHead_;
        while(index--) {
            cur = cur ->next;
        }
        LinkedNode* tmp = cur->next;
        cur->next = cur->next->next;
        delete tmp;
        size_--;
    }
private:
    int size_;
    LinkedNode* dummyHead_;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
//leetcode submit region end(Prohibit modification and deletion)
