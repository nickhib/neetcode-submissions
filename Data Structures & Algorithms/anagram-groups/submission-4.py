class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        umap = {}
        for s in strs:
            olds = s
            val = "".join(sorted(s))
            if val not in umap:
                umap[val] = []
            umap[val].append(olds)
        return list(umap.values())
        
        