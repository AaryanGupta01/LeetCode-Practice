class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int min = *min_element(nums1.begin(),nums1.end());
        bool all_even = true;
        int n = nums1.size();
        for(int num:nums1){
            if(num % 2 != 0){
                all_even = false;
                break;
            }
        }
        bool all_odd = true;
        for(int num:nums1){
            if(num % 2 == 0){
                all_odd = false;
                break;
            }
        }
        if(all_even || all_odd){
            // for(int i=0;i<n;i++){
            //     nums2[i] = nums1[i];
            // }
            return true;
        }
        else{
            if(min % 2 == 0){
            return false;
            }
            else{
                return true;
            }
        }
    }
};