class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        count = 0;
        streakl = []

        if(len(nums)==0):
            return 0
        
        for n in nums:
            if n == 1:
                count+=1
            if n == 0:
                streakl.append(count)
                count = 0
            streakl.append(count)
        return max(streakl)