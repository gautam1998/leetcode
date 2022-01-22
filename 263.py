class Solution(object):
    def isUgly(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if(n == 0):
            return False
        if(n < 0):
            return False
        while(n>1):
            
            if(n%2 != 0 and n%3 != 0 and n%5 != 0):
                print("here")
                return False
            
            if(n%2 == 0):
                n = n/2
                
            if(n%3 == 0):
                n = n/3
                
            if(n%5 == 0):
                n = n/5
            
            print(n)
            
        return True
            
        