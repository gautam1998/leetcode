class Solution(object):
    
    
    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        
        s = ''
        open = 0
        close = 0
        list1 = []
        self.recursiveGenerate(s,list1,open,close,n)
        return list1
        
    def recursiveGenerate(self,s,list1,open,close,n):
        
        if(close == n):
            print(s)
            list1.append(s)
            return
        else:
            if(close<open):
                self.recursiveGenerate(s+')',list1,open,close+1,n)
            
            if(open<n):
                self.recursiveGenerate(s+'(',list1,open+1,close,n)
        
        