int arr[100];
void recur(struct TreeNode *root, int *id)
{
    if (!root)
        return;

    recur(root->left, id);
    arr[(*id)++] = root->val;
    recur(root->right, id);
    return;
}

int minDiffInBST(struct TreeNode *root)
{
    int min = INT_MAX;
    int id = 0;

    recur(root, &id);

    for (int i = 1; i < id; i++)
    {
        if (arr[i] - arr[i - 1] < min)
        {
            min = arr[i] - arr[i - 1];
        }
    }

    return min;
}
