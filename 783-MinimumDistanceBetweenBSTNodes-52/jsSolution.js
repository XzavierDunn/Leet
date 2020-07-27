var minDiffInBST = function (root) {
  let dif = [];
  let min = Number.MAX_VALUE;
  let prev = Number.MAX_VALUE;
  recur(root, dif);

  dif.sort((a, b) => {
    return a - b;
  });

  for (let num of dif) {
    min = Math.min(min, Math.abs(num - prev));
    prev = num;
  }

  return min;
};

let recur = (node, dif) => {
  if (!node) {
    return;
  }
  recur(node.left, dif);
  dif.push(node.val);
  recur(node.right, dif);
};
