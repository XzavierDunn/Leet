class Solution:
    def middleNode(self, head):
        nodes = [head]
        while nodes[len(nodes) -1].next:
            nodes.append(nodes[len(nodes) -1].next)
        return nodes[math.floor(len(nodes) / 2)]


