class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        s1 = s[:len(s)//2]
        s2 = s[len(s)//2:]
        vowels = 'aeiouAEIOU'
        v1 = sum(i in vowels for i in s1)
        v2 = sum(i in vowels for i in s2)
        if(v1==v2):
            return True
        else:
            return False