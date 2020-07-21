void deleteNode(struct ListNode* node) {
    if (node->next != NULL) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
}
