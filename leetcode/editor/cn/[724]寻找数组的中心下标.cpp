
#include <vector>

using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int result = -1;
        // 第一次遍历数组，获取总和
        for (int tmp : nums) {
            sum += tmp;
        }
        int leftSum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            // 如果左侧数之和等于右侧数之和，将下标值赋值给result并结束循环
            if (leftSum == (sum - leftSum - nums[i])) {
                result = i;
                break;
            } else {
                // 如果不等于，则将该下标的数组数字加入左侧数之和
                leftSum += nums[i];
            }
        }
        // 返回结果
        return result;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
