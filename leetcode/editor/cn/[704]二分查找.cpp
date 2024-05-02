
#include <vector>

using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        /**
         * 二分法,区间选取左闭右闭区间
         */
         int left = 0;
         int right = nums.size() - 1;
         // 开始循环，等left与right相等时，区间仍然有效
        while (left <= right) {
            // 中间位置，防止溢出
            int middle = left + ((right - left) / 2);
            if (nums[middle] > target) {
                // 目标值在左区间内
                right = middle - 1;
            } else if (nums[middle] < target) {
                // 目标值在右区间内
                left = middle + 1;
            } else {
                // 找到目标值
                return middle;
            }
        }
        // 未找到目标值
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
