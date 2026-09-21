class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}  # Maps value -> index
        
        for i, num in enumerate(nums):
            diff = target - num
            
            # If the needed complement is already in our dictionary, we found our pair!
            if diff in seen:
                return [seen[diff], i]
                
            # Otherwise, store the current number and its index
            seen[num] = i
            
        return []