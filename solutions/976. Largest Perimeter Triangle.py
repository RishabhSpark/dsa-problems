class Solution:
    def largestPerimeter(self, nums: List[int]) -> int:
        nums.sort()
        per = 0
        for i in range(0,len(nums)-2):
            summ=0
            if(nums[i]+nums[i+1])>nums[i+2]:
                summ=nums[i]+nums[i+1]+nums[i+2]
                if(summ>per):
                    per = summ
        return per