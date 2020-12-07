class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int pEnd = nums1.size()-1;
        int p1 = m - 1;
        int p2 = n - 1;
        
        while(pEnd >= 0){
            if(p2 < 0){
                break;
            } 
            if(p1 < 0){
                for(int i = 0; i <= p2; i++){
                    nums1[i] = nums2[i];
                }
                break;
            }
            nums1[pEnd] = nums1[p1] > nums2[p2]? nums1[p1--] : nums2[p2--];
            pEnd--;
        }
        
    }
};
