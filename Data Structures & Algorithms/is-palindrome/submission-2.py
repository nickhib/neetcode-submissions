class Solution:
    def isPalindrome(self, s: str) -> bool:
        s= s.lower()
        s2 = list(s)
        s2 =[x for x in s2 if x.isalnum()];
        i = 0
        j = (len(s2)-1)
       
        while j > i:
            if s2[i] != s2[j]:
                return False
            i += 1
            j -=1
        return True
        