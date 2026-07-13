class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        idx = haystack.find(needle)
        if idx == -1:
            return -1
        else:
            return idx