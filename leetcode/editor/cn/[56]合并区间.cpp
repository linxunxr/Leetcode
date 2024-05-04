
#include <vector>
#include <algorithm>

using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // 对二维数组进行排序，使得区间按照顺序进行排列
        sort(intervals.begin(), intervals.end());
        // 定义结果数组，并将输入数组的第一组值赋值给结果数组
        vector<vector<int>> result;
        result.push_back(intervals[0]);
        // 定义结果数组最后一个位置
        int tmp = 0;
        // 遍历输入数组
        for (int i = 1; i < intervals.size(); ++i) {
            // 判断结果数组的最后一个区间与输入数组的当前遍历区间是否存在重叠区域
            if (result[tmp][1] >= intervals[i][0]) {
                // 如果存在重叠区域，则将区间合并——即将区间右界的最大值赋值给结果数组
                result[tmp][1] = max(result[tmp][1], intervals[i][1]);
            } else {
                // 如果不存在，则将当前遍历区间加入结果数组
                result.push_back(intervals[i]);
                tmp++;
            }
        }
        // 返回结果数组
        return result;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
