class Solution {
    public int maxSubArray(int[] nums) {
        int currMax = nums[0];
        int max = currMax;
        
        if(nums.length == 1){
            return nums[0];
        }
        
        for(int i = 1; i < nums.length; i++){
            currMax = Math.max(nums[i], currMax + nums[i]);
            max = Math.max(max, currMax);
        }
        return max;
    
    }
}
