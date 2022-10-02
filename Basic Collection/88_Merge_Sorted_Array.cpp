class Solution {
public:
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

//         if(m=0){
//             nums1 = nums2;
//         }
        
        // nums1: 1 2 3 0 0 0 (6-3)
        // nums2: 2 5 6 
        int n1 = nums1.size()-m;
        int i = 0, j = 0;
        
        // place nums2 in nums1
        for(int i=m; i < nums1.size(); i++){
            nums1[i] = nums2[j];
            j++;
        }

        // sorting nums1
        for(int i =0; i<nums1.size(); i++){
            for(int j =i+1; j< nums1.size(); j++){
                if(nums1[i]>nums1[j]){
                    int tmp = nums1[i];
                    nums1[i] = nums1[j];
                    nums1[j] = tmp;
                }
            }
        }
        
    }
};