class Solution:
    def average(self, salary: List[int]) -> float:
        salary.sort()
        salary.pop(0)
        salary.pop(-1)
        return sum(salary)/len(salary)