class Solution(object):
    def uniquePaths(self, m, n):
        """
        :type m: int
        :type n: int
        :rtype: int
        """
        
        dp = [[0 for i in range(0,n)] for j in range(0,m)]
        
        for j in range(n):
            dp[0][j] = 1
            
        for j in range(m):
            dp[j][0] = 1
        
        
        for i in range(1,m):
            for j in range(1,n):
                dp[i][j] = dp[i-1][j] + dp[i][j-1]
        

        return dp[m-1][n-1]
        
    
    