class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        longest_streak = 0
        numberSet = set(nums)
        
        for num in numberSet:
            if num - 1 not in numberSet:
                currentNum = num
                currentStreak = 1
                
                while currentNum + 1 in numberSet:
                    currentNum += 1
                    currentStreak += 1
                
                longest_streak = max(longest_streak, currentStreak)
                
        return longest_streak
