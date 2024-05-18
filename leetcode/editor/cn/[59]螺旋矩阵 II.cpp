
#include <vector>

using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        // 按照顺序进行螺旋
        // 定义 n*n 结果数组
        vector<vector<int>> result(n, vector<int>(n,0));
        // 定义四个边界 左边界 右边界 上边界 下边界
        int left = 0, right = n - 1, top = 0, bottom = n - 1;
        // 定义初始 目标值
        int num = 1, target = n * n;
        // 开始螺旋遍历
        while (num <= target) {
            // 从左到右
            for (int i = left; i <= right; ++i) {
                result[top][i] = num++;
            }
            // 一行结束时候，上边界下移
            top++;
            // 从上到下
            for (int i = top; i <= bottom; ++i) {
                result[i][right] = num++;
            }
            // 一列结束，右边界左移
            right--;
            // 从左到右
            for (int i = right; i >= left; i--) {
                result[bottom][i] = num++;
            }
            // 一行结束，下边界上移
            bottom--;
            // 从下到上
            for (int i = bottom; i >= top; i--) {
                result[i][left] = num++;
            }
            // 一列结束，左边界右移
            left++;
        }
        // 返回结果数组
        return result;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
