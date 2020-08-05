class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        return rowRecur(matrix, target)


def rowRecur(arr, target):
    if len(arr) == 1:
        return colRecur(arr[0], target)

    middle = len(arr) // 2
    if not arr:
        return False
    if target >= arr[middle][0]:
        return rowRecur(arr[middle:], target)
    else:
        return rowRecur(arr[:middle], target)


def colRecur(row, target):
    if len(row) == 1:
        return target == row[0]

    mid = len(row) // 2
    if not row:
        return False
    if target >= row[mid]:
        return colRecur(row[mid:], target)
    else:
        return colRecur(row[:mid], target)
