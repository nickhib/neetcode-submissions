class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

            int high = matrix.size()-1;
            int low = 0;
            int end = matrix[0].size()-1;
            int row = 0;
            while(low <= high)
            {
                int mid = low+ (high-low)/2;
                if(matrix[mid][0] > target)
                {
                    high = mid-1;
                }
                else if(matrix[mid][end] < target)
                {
                    low = mid+1;
                }
                else
                {
                    row = mid;
                    break;
                }

            }
            high = matrix[row].size()-1;
            low = 0;
            while(low <= high)
            {
                int mid = low+ (high-low)/2;
                if(matrix[row][mid]== target)
                {
                    return true;
                }
                else if(matrix[row][mid]> target)
                {
                    high = mid-1;
                }
                else
                {
                    low = mid+1;
                }  
            } 

        return false;
        
    }
};
