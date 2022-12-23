class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        n = str(n)
        summ=0
        prod=1
        for i in n:
            summ+=int(i)
            prod*=int(i)
        return prod-summ