class SparseVector {
public:
    unordered_map<int, int> a;
    int size = 0;
    SparseVector(vector<int> &nums) {
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                a.insert({i, nums[i]});
            }
        }
        size = nums.size();
    }
    
    // Return the dotProduct of two sparse vectors
    int dotProduct(SparseVector& vec) {
        int result = 0;
        for(int i = 0; i < size; i++){
            auto iter1 = a.find(i);
            auto iter2 = vec.a.find(i);
            if(iter1 != a.end() && iter2 != vec.a.end()){
                result += iter1->second * iter2->second;
            } 
        }
        return result;
    }
};

// Your SparseVector object will be instantiated and called as such:
// SparseVector v1(nums1);
// SparseVector v2(nums2);
// int ans = v1.dotProduct(v2);
