/***
905. Sort Array By Parity
Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.
Return any array that satisfies this condition.

level: easy
***/


// class Solution {
// public:
//     vector<int> sortArrayByParity(vector<int>& nums) {
        
        
//         vector<int> idx_odd, ans;
        
//         for(int i=0; i < nums.size(); i++){
            
//             if(nums[i]%2 == 0){
//                 ans.push_back(nums[i]);
//             }
//             else{
//                 idx_odd.push_back(i);
//             }
//         }
        
//         for(int i =0; i< idx_odd.size(); i++){
//             ans.push_back(nums[idx_odd[i]]);
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int j = 0;
        for(int i =0; i<nums.size(); i++){
            if(nums[i]%2 == 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
        
        return nums;
    }
};