class Solution:
    def reverseWords(self, s: List[str]) -> None:

        temp=[]
        p=""
        for x in s:
            if x==" ":
                temp.append(p)
                p=""
            else:
                p+=x
        temp.append(p)
            
            

        
        res=[]
        
        for i in temp[::-1]:
            t=i
            print(t)
            for x in t:
                res.append(x)
            res.append(" ")
        res.pop()
        s[:]=res
            

        """
        Do not return anything, modify s in-place instead.
        """
        