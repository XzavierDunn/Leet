class Solution:
    def sortByBits(self, arr: List[int]) -> List[int]:
        all = {}
        final = []
        for i in arr:
            numOnes = bin(i).count("1")
            if numOnes not in all:
                all[numOnes] = [i]
            else:
                all[numOnes].append(i)

        for k, v in sorted(all.items()):
            for val in sorted(v):
                final.append(val)

        return final
