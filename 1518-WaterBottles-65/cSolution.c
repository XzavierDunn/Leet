#include <stdio.h>

int main() {
    
    int total = numBottles;

    while (true) {
        if (numBottles - numExchange >= 0) {
            numBottles -= numExchange;
            numBottles++;
            total++;
        } else {
            break;
        }
    }

    return total;

}
