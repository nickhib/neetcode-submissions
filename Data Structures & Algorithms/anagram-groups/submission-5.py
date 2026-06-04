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
        # we used a dictionary to store the strings we would sort the strings
        # because a anagram will have the same string sorted
        # we do this by using join. join combines elements of an iterable
        # into a single string. this specifically works for this because
        # we want to sort the string and add it to our string
        # we use a "" string and do join(sorted(s)) to sort the string into a
        # array this will be turned into a string then we will use that as a key
        # at the end we grab all values using the values() method from dictionaries
        