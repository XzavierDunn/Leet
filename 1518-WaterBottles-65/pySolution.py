
def numWater(numBottles, numExchange):
    total = 0
    total += numBottles
    while True:
        if numBottles - numExchange >= 0:
            numBottles -= numExchange
            numBottles += 1
            total += 1
        else:
            break

    return total

