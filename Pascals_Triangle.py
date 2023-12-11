class Solution(object):
    def generate(self, numRows):
        pascal = []

        for i in range(0, numRows):
            temp = []
        
            for j in range(i + 1):
                if j == 0 or j == i:
                    temp.append(1)
                else:
                    val = pascal[-1][j - 1] + pascal[-1][j]
                    temp.append(val)
            pascal.append(temp)
        return pascal
