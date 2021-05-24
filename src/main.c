#include <stdlib.h>
#include <stdio.h>
#include "wallet.h"
#include "node.h"
#include "miner.h"

/*
   $$$$$\ $$\                                        $$$$$$\            $$\           
   \__$$ |\__|                                      $$  __$$\           \__|          
      $$ |$$\ $$$$$$\$$$$\  $$$$$$\$$$$\  $$\   $$\ $$ /  \__| $$$$$$\  $$\ $$$$$$$\  
      $$ |$$ |$$  _$$  _$$\ $$  _$$  _$$\ $$ |  $$ |$$ |      $$  __$$\ $$ |$$  __$$\ 
$$\   $$ |$$ |$$ / $$ / $$ |$$ / $$ / $$ |$$ |  $$ |$$ |      $$ /  $$ |$$ |$$ |  $$ |
$$ |  $$ |$$ |$$ | $$ | $$ |$$ | $$ | $$ |$$ |  $$ |$$ |  $$\ $$ |  $$ |$$ |$$ |  $$ |
\$$$$$$  |$$ |$$ | $$ | $$ |$$ | $$ | $$ |\$$$$$$$ |\$$$$$$  |\$$$$$$  |$$ |$$ |  $$ |
 \______/ \__|\__| \__| \__|\__| \__| \__| \____$$ | \______/  \______/ \__|\__|  \__|
                                          $$\   $$ |                                  
                                          \$$$$$$  |                                  
                                           \______/                                   

This is the proof of concept prototype for JimmyCoin, created to establish basic cryptography
and mining for the blockchain without implementing the brain bending network stuff. It acts
as the wallet, node and miner for every transaction, the end goal is to split up the functions
within main into individual programs which can be distributed, with data transferred via a P2P network.
*/

/*
The main function for my concept prototype
*/
int main(int argc, char *argv[]) {
    // Simulates wallet sending out transaction
    char *transaction = runClient();
    // Simulates a node checking the transaction is valid
    int valid = validateTransaction(transaction);

    char *newBlock = NULL;

    // Simulating a mining node
    if (valid) {
        addToPool(transaction);
        newBlock = mineBlock();
    }

    // Node receives block, validates it and adds it to the chain 
    validateBlock(newBlock);
}