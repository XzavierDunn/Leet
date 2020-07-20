#include <stdio.h>
#include <math.h>

int main() {

    struct ListNode* node = head;
    struct ListNode* nodeDouble = head;
                
    while (nodeDouble->next) {

        node = node->next;
        nodeDouble = nodeDouble->next->next == NULL ? nodeDouble->next : nodeDouble->next->next;

        if (!nodeDouble->next) {
            break;
        }

    }

    return node;

}
