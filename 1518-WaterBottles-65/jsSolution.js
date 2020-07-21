let numWater = (numBottles, numExchange) => {
    let total = numBottles;

    while (true) {
        if (numBottles - numExchange >= 0) {
            numBottles -= numExchange;
            numBottles += 1;
            total += 1;
        } else {
            break;
        }
    }
    return total
}

numWater(9, 3);
