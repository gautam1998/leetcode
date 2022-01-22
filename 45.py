class Solution(object):
    def jump(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        
        if(n == 1):
            return 0
        
        if(n == 2):
            return 1
        
        dp = [None for i in range(n)]
        
        dp[0] = 0
        dp[1] = 1
        
        for i in range(n-1):
            for j in range(i+1,i+nums[i]+1):
                if(j<n):
                    if(dp[j]):
                        dp[j] = min(dp[i] + 1,dp[j])
                    else:
                        dp[j] = dp[i] + 1
        print(dp)
        
        return dp[-1]