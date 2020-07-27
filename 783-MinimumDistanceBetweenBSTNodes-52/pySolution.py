def recur(self, node):
    if not node:
        return
    self.dif.append(node.val)
    self.recur(node.left)
    self.recur(node.right)


def minDiffInBST(self, root):
    self.dif = []
    self.recur(root)
    self.dif = sorted(self.dif)
    return min(b-a for a, b in zip(self.dif, self.dif[1:]))
