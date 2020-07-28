int cmpfunc(const void *a, const void *b)
{
    int av = *(int *)a;
    int bv = *(int *)b;

    int val = __builtin_popcount(av) - __builtin_popcount(bv);
    if (val == 0)
    {
        return av - bv;
    }
    return val;
}

int *sortByBits(int *arr, int arrSize, int *returnSize)
{
    qsort(arr, arrSize, sizeof(int), cmpfunc);

    *returnSize = arrSize;
    return arr;
}