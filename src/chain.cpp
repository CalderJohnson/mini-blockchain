#include "include/block.h"
#include "include/chain.h"
Chain* Chain::instance = NULL;
#include "include/transaction.h"

#include <iostream>
#include <string.h>

using namespace std;

Chain::Chain() {
    Transaction* genesisTransaction = new Transaction("Genesis", "0", 0);
    this->chain[0] = new Block("0", genesisTransaction); //example genesis block
    this->chainLength = 1;
}

Chain* Chain::getInstance() {
    if (!instance) {
        instance = new Chain();
    }
    return instance;
}

Block* Chain::getLastBlock() {
    return this->chain[this->chainLength - 1];
}

void Chain::addBlock(Transaction* transaction) { //, string senderPublicKey, string signature)
    Block* block = new Block(this->chain[this->chainLength - 1]->hash, transaction);
    if(this->chainLength < 1000) {
        this->chain[this->chainLength] = block;
        this->chainLength++;
    }
    else {
        cout << "Chain is full" << std::endl;
    }
}