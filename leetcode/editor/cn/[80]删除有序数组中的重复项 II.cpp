
#include <vector>

using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // 双指针法
        // 先处理特殊情况
        if (nums.size() <= 2) {
            return nums.size();
        }
        // 慢指针
        int slowIndex = 2;
        // 快指针遍历
        for (int fastIndex = 2; fastIndex < nums.size(); ++fastIndex) {
            // 只有当前元素不等于 慢指针-2 位置的元素时进行覆盖
            if (nums[fastIndex] != nums[slowIndex - 2]) {
                nums[slowIndex++] = nums[fastIndex];
            }
        }
        // 返回新长度
        return slowIndex;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
