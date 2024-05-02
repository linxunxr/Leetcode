
#include <vector>

using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        /**
         * 二分法，左闭右闭区间
         * 目的：寻找第一个比目标值小于等于的位置
         */
        int left = 0;
        int result = nums.size();
        int right = result - 1;
        while (left <= right) {
            int middle = left + ((right - left) / 2);
            if (nums[middle] >= target) {
                // 如果中间值大于目标值，则目标值可插入在左侧区间内
                result = middle;
                right = middle - 1;
            } else {
                // 如果中间值小于目标值，则目标值不可插入在左侧区间内
                left = middle + 1;
            }
        }
        return result;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
