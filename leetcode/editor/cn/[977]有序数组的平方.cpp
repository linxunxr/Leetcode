
#include <vector>

using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // 双指针法
        // 左指针
        int leftIndex = 0;
        // 右指针
        int rightIndex = nums.size() - 1;
        // 结果数组
        vector<int>  result(nums.size());
        // 结果数组指针
        int resultIndex = rightIndex;
        // 左右指针可以相等 nums非递减
        while (leftIndex <= rightIndex) {
            // 如果左指针位置的平方 大于 右指针位置的平方 则将左指针位置的平方放入结果数组的最后
            if ((nums[leftIndex] * nums[leftIndex]) > (nums[rightIndex] * nums[rightIndex])) {
                result[resultIndex--] = nums[leftIndex] * nums[leftIndex];
                // 左指针右移
                leftIndex++;
            } else {
                result[resultIndex--] = nums[rightIndex] * nums[rightIndex];
                rightIndex--;
            }
        }
        // 返回结果数组
        return result;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
