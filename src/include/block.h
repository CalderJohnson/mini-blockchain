#pragma once

#include "transaction.h"
#include "block.h"

#include <iostream>
#include <string.h>

using namespace std;

//model for a block on the blockchain
class Block {
public:
    Block(string previousHash, Transaction* data);
    string previousHash;
    string hash;
    Transaction* data;
};