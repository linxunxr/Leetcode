
#include <vector>

using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // 双指针法
        // 慢指针
        int slowIndex = 0;
        // 快指针查找
        for (int fastIndex = 0; fastIndex < nums.size(); ++fastIndex) {
            // 如果快指针指向不等于目标值，则将其赋值给慢指针位置，慢指针右移
            if (nums[fastIndex] != val) {
                nums[slowIndex++] = nums[fastIndex];
            }
        }
        // 返回新数组大小，即慢指针
        return slowIndex;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
