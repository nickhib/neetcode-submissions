class Solution:
    def isPalindrome(self, s: str) -> bool:
        filtered =[x for x in s.lower() if x.isalnum()];
        i = 0
        j = (len(filtered)-1)
       
        while j > i:
            if filtered[i] != filtered[j]:
                return False
            i += 1
            j -=1
        return True
        