class Solution:
    def middleNode(self, head):
        node = head
        nodeDouble = head

        while nodeDouble.next:
            node = node.next

            if nodeDouble.next.next:
                nodeDouble = nodeDouble.next.next
            elif not nodeDouble.next:
                break;

        return node

