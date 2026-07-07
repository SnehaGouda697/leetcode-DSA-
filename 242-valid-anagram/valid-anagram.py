class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        p = len(s)
        q = len(t)
        if p != q:
            return False
        return sorted(s) == sorted(t)