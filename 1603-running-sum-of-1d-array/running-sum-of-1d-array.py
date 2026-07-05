class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        count = 0
        l2 = []
        for i in nums:
            ans = count + i
            l2.append(ans)
            count += i
        return(l2)
