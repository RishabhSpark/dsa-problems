class Solution:
    def countGoodSubstrings(self, s: str) -> int:
        count = 0
        for i in range(len(s)-2):
            s1 = s[i]
            s2 = s[i+1]
            s3 = s[i+2]
            if(s1!=s2 and s2!=s3 and s3!=s1):
                count+=1
            i+=1
        return count