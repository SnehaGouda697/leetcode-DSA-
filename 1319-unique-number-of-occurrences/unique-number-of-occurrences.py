class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        """s_1 = set(List[int])
        L_2 = list(s_1)
        if L_2 is List[int]:
            return False
        else:
            return True
        """
        """
        i=0
        for i in arr:
            p = arr.count(i)
            if p > 1:
                return True
            else:
                return False
        """
        counts = []
        for i in set(arr):
           counts.append(arr.count(i))
        return len(counts) == len(set(counts))


        