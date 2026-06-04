class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        umap = {}
        for n in nums:
            if n not in umap:
                umap[n] = 0
            umap[n] += 1
        sortnums = sorted(umap.items() , key=lambda x: x[1], reverse=True)
        answer = sortnums[:k]
        realAnswer = []
        for key, value in answer:
            realAnswer.append(key)



        return realAnswer





        