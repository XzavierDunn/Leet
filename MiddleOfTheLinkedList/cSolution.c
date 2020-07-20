#include <stdio.h>
#include <math.h>

int main() {

    struct ListNode* node = head;
    int count = 0;
    struct ListNode* nodes[100];
                
    while (node->next) {
        nodes[count] = node;
        node = node->next;
        count++;
    }
    return nodes[(int)floor(count / 2)];

}
