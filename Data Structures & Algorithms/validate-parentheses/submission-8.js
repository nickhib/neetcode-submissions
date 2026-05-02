class Solution {
    /**
     * @param {string} s
     * @return {boolean}
     */
    isValid(s) {
        let stack = [];
        let umap = new Map([
            [']' , '['],
            ['}' , '{'],
            [')','(']
        ]);
        for(let c of s)
        {
            if(umap.has(c))
            {
                if(stack.length > 0 && stack[stack.length -1]=== umap.get(c))
                {
                    stack.pop();
                }
                else
                {
                    return false;
                }

            }
            else
            {
                stack.push(c);
            }

        }
        if(stack.length > 0)
            return false;
        return true;

    }
}
