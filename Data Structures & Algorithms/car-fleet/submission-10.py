class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        stack = []
        newList = sorted(zip(position,speed),reverse=True)
        answer = []
        if len(position) != len(speed):
            return -1;
        for i in range(len(newList)):
            lenLeft = target - newList[i][0]
            toFinish = (lenLeft/newList[i][1])
            print(toFinish, " ",newList[i][1] , " ", lenLeft)

            if len(stack) == 0 or toFinish < stack[-1]:
                if len(stack) > 0 and toFinish < stack[-1]:
                    continue
                stack.append(toFinish)
            if toFinish > stack[-1]:
                stack.append(toFinish)

        return len(stack)
                






        