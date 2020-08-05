bool searchMatrix(int **matrix, int matrixSize, int *matrixColSize, int target)
{
    for (int i = 0; i < matrixSize; i++)
    {
        if (*matrixColSize == 0)
            return false;
        if (target <= matrix[i][*matrixColSize - 1])
        {
            for (int v = 0; v < *matrixColSize; v++)
            {
                if (target == matrix[i][v])
                    return true;
            }
            return false;
        }
    }
    return false;
}