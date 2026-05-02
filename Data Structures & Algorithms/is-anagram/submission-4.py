class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        freq1 = {}
        freq2 = {}
        for i in range(len(s)):
            freq1[s[i]] = 1+ freq1.get(s[i],0)
            freq2[t[i]] = 1+ freq2.get(t[i],0)
        return freq1 == freq2

            




        