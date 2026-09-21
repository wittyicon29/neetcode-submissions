class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        # only 2 things to track as we move through the array
        # minimum price so far and maximum profit so far
        min_price = float('inf')
        max_profit = 0

        for price in prices:
            if price < min_price:
                min_price = price
            elif price - min_price > max_profit:
                max_profit = price - min_price
        
        return max_profit
