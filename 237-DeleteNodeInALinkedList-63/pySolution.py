class Solution:
    def deleteNode(self, node):
        if node.next != None:
            node.val = node.next.val
            node.next = node.next.next
