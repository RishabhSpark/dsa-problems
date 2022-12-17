class Solution:
    def canMakeArithmeticProgression(self, arr: List[int]) -> bool:
        arr.sort()
        rem = arr[1] - arr[0]
        for i in range(2, len(arr)):
            if(arr[i]-arr[i-1]!=rem):
                return False
        return True