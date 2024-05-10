
#include <vector>

using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        // 对角线遍历 对角线为偶数时，向上遍历；为奇数时，向下遍历
        int rowCount = mat.size();
        int columnCount = mat[0].size();
        // 对角线数量
        int diagonalCount = rowCount + columnCount - 1;
        // 结果数组
        vector<int> result;
        // 遍历对角线
        for (int i = 0; i < diagonalCount; ++i) {
            // 对角线为偶数
            if (i % 2) {
                int x = i < columnCount ? 0 : i - columnCount + 1;
                int y = i < columnCount ? i : columnCount - 1;
                while ((x < rowCount) && (0 <= y)) {
                    result.push_back(mat[x][y]);
                    x++;
                    y--;
                }
            } else {
                // 对角线为奇数
                int x = i < rowCount ? i : rowCount - 1;
                int y = i < rowCount ? 0 : i - rowCount + 1;
                while ((0 <= x) && (y < columnCount)) {
                    result.push_back(mat[x][y]);
                    x--;
                    y++;
                }
            }
        }
        return result;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
