class Solution:
    def partitionLabels(self, s: str) -> List[int]:
        mp=Counter()
        k=len(s)-1
        while k>=0:
            ch=s[k]
            if ch not in mp:
                mp[ch]=k
            k-=1
        i=0
        res=[]
        while i<len(s):
            t=mp[s[i]]
            j=i
            temp=""
            while j<=t:
                print(t)
                print(j)
                temp+=s[j]
                if(j<len(s)):
                    t=max(t,mp[s[j]])
                j+=1
                
            res.append(len(temp))
            i=t+1
        return res
            


            
        

        