class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        p = set(nums1)
        q = set(nums2)
        r = list(p.intersection(q))
        return r