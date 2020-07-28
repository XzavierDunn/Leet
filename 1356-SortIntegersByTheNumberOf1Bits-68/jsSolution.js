var sortByBits = function (arr) {
  all = {};
  final = [];
  for (let i in arr) {
    numOnes = 0;
    let x = arr[i];
    while (x != 0) {
      x = x & (x - 1);
      numOnes++;
    }
    if (numOnes in all) {
      all[numOnes].push(arr[i]);
    } else {
      all[numOnes] = [arr[i]];
    }
  }

  for (let k of Object.keys(all)) {
    for (let i in all[k].sort(function (a, b) {
      return a - b;
    })) {
      final.push(all[k][i]);
    }
  }

  return final;
};
