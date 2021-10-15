class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        max_sum = nums[0]
        ending_here = nums[0]
        for i in range(1,len(nums)):
            
            if(nums[i] < ending_here + nums[i]):
                ending_here = ending_here + nums[i]
            else:
                ending_here  = nums[i]
            
                
            if(max_sum < ending_here):
                max_sum = ending_here
                    
                    
        return max_sum