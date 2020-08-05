class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if s:
            longest = s[0]
            curList = []
            col = False
            for l in s:
                if l in curList:
                    col = True
                    if len(curList) > len(longest):
                        longest = "".join(curList)
                    for i, r in enumerate(curList):
                        if r == l:
                            curList = curList[i+1:]
                curList.append(l)
                if col == True:
                    if len(curList) > len(longest):
                        longest = "".join(curList)
                    col = False
            if col == False:
                if len(curList) > len(longest):
                    longest = "".join(curList)
            return len(longest)
        return 0
