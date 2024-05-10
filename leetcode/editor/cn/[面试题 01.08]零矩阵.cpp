
#include <vector>

using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // 使用两个标记数组完成置零
        // 行标记数组
        vector<bool> tagRow(matrix.size(), false);
        // 列标记数组
        vector<bool> tagColumn(matrix[0].size(), false);
        // 遍历数组，对0进行标记
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix[i].size(); ++j) {
                if (matrix[i][j] == 0) {
                    tagRow[i] = true;
                    tagColumn[j] = true;
                }
            }
        }
        // 行置零
        for (int i = 0; i < tagRow.size(); ++i) {
            if (tagRow[i]) {
                for (int j = 0; j < matrix[i].size(); ++j) {
                    matrix[i][j] = 0;
                }
            }
        }
        // 列置零
        for (int i = 0; i < tagColumn.size(); ++i) {
            if (tagColumn[i]) {
                for (int j = 0; j < matrix.size(); ++j) {
                    matrix[j][i] = 0;
                }
            }
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)
