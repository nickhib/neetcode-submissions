class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        seen = set()
        
        for r in range(len(board)):
            for c in range(len(board[r])):
                val = board[r][c]
                if val == '.':
                    continue
                print(val)
            
                if (val,"box",(r//3),(c//3)) in seen or (val,"row",r) in seen or (val,"col",c) in seen:
                    return False
                seen.add((val,"box",(r//3),(c//3)))
                seen.add((val,"row",r))
                seen.add((val,"col",c))
        return True

