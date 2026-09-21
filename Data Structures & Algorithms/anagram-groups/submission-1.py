from collections import defaultdict

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        # Dictionary to map the sorted string -> list of original anagrams
        anagram_map = defaultdict(list)
        
        for s in strs:
            # Sort the string and join it back into a string to use as a key
            sorted_key = "".join(sorted(s))
            
            # Append the original string to its respective group
            anagram_map[sorted_key].append(s)
            
        # Return all the grouped lists of anagrams
        return list(anagram_map.values())