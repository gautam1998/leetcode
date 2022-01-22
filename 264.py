class Solution(object):
    def nthUglyNumber(self, n):
        """
        :type n: int
        :rtype: int
        """
        dp = [None for i in range(n)]
        dp[0] = 1
        
        two = 2
        three = 3
        five = 5
        
        i2 = i3 = i5 = 0 
        
        for i in range(1,n):
            dp[i] = min(two,three,five)
            
            if(dp[i] == two):
                i2 = i2 + 1
                two = dp[i2]*2
                
            if(dp[i] == three):
                i3 = i3 + 1
                three = dp[i3]*3
                
            if(dp[i] == five):
                i5 = i5 + 1
                five = dp[i5]*5
                
        return dp[-1]
    