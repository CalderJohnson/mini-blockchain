#include "include/crypto.h"
#include "include/transaction.h"
#include "include/block.h"

#include <iostream>
#include <string.h>

Block::Block(string previousHash, Transaction* data) {
    this->previousHash = previousHash;

    char hashDeterminant[strlen(previousHash.c_str())+1];
    strcpy(hashDeterminant, previousHash.c_str());
    this->hash = Hasher::SHA256(hashDeterminant); //base block hash off previous block

    this->data = data;
}
