/**
 * @file 1464.cpp
 * @brief Maximum product of two elements in an array
 * optimization: sorted the array/heap
 * @author Kevenny
 * @date 2022/10/2
 *
 */


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int len = nums.size();
        int sum = 0;
        
        for(int i = 0; i<len; i++){
            for (int j=i+1; j<len; j++){
                int tmp = (nums[i]-1)*(nums[j]-1);       
                if(tmp>sum){
                    sum = tmp;
                }
            }   
        }
        return sum;
    }
};