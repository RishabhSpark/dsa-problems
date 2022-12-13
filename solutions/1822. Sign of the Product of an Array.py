class Solution:
    
    def arraySign(self, nums: List[int]) -> int:
        signNum = 1
        for i in nums:
            if(i==0):
                signNum*=0
            elif(i<0):
                signNum*=-1
        return signNum