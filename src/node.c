#include <stdlib.h>
#include <stdio.h>
#include "node.h"

// Takes an individual transaction and validates it
// returns 1 if valid, else 0
int validateTransaction(char *transaction) {
    printf("Validating transaction...\n");

    return 1;
}

// Handles adding blocks to a node's current blockchain
// Block is first validated and then added to a version of the chain
// if multiple chains arise, choose the longest
// Not looking forward to implementing this...
void validateBlock(char *newBlock) {
    printf("Beep boop, magic taking place, consensus achieved\n");

    return;
}