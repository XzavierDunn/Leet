var lemonadeChange = function (bills) {
  let fives = 0;
  let tens = 0;

  for (let i in bills) {
    if (bills[i] == 5) {
      fives += 1;
    } else if (bills[i] == 10) {
      tens += 1;
      fives -= 1;
    } else if (tens > 0) {
      tens -= 1;
      fives -= 1;
    } else {
      fives -= 3;
    }

    if (fives < 0) {
      return false;
    }
  }
  return true;
};
