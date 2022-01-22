class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        
        dp = [None for i in range(n+1)]
        if(n == 0):
            return 0
        
        if(n == 1):
            return 1
        
        if(n == 2):
            return 2 
        
        dp[0] = 0
        dp[1] = 1
        dp[2] = 2
        for i in range(3,n+1):
            dp[i] = dp[i-1] + dp[i-2]
            
        print(dp)
        
        return dp[-1]
        