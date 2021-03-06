/*
In MATLAB, there is a very useful function called 'reshape', which can reshape a matrix into a new one with different size but keep its original data.

You're given a matrix represented by a two-dimensional array, and two positive integers r and c representing the row number and column number of the wanted reshaped matrix, respectively.

The reshaped matrix need to be filled with all the elements of the original matrix in the same row-traversing order as they were.

If the 'reshape' operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.

Example 1:

Input: 
nums = 
[[1,2],
 [3,4]]
r = 1, c = 4
Output: 
[[1,2,3,4]]
Explanation:
The row-traversing of nums is [1,2,3,4]. The new reshaped matrix is a 1 * 4 matrix, fill it row by row by using the previous list.

Example 2:

Input: 
nums = 
[[1,2],
 [3,4]]
r = 2, c = 4
Output: 
[[1,2],
 [3,4]]
Explanation:
There is no way to reshape a 2 * 2 matrix to a 2 * 4 matrix. So output the original matrix.

Note:
 
    The height and width of the given matrix is in range [1, 100].
    The given r and c are all positive.

39ms   53%
*/
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int m = nums.size() , n = nums[0].size();//获取原矩阵的长度与宽度
        if( m * n != r * c )//检测是否矩阵行列相等
        {
            return nums;
        }
        vector<vector<int>> new_matrix(r,vector<int>(c,0));//申请一个新的矩阵，并将其全部赋值为空
        for( int i = 0 ; i < r*c ; i++)
            {
                new_matrix[ i/c ][ i%c ] = nums[ i/n ][ i%n ];//将原矩阵数值赋给新矩阵
            }
        return new_matrix;
    }
};
