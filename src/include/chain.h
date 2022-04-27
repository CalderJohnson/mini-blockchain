#pragma once

#include "block.h"

#include <iostream>
#include <string.h>

//singleton block chain
class Chain {
private:
    static Chain* instance;
    Chain();
    ~Chain();
    Chain(const Chain&);
    Chain& operator=(const Chain&);
public:
    unsigned int chainLength;
    static Chain* getInstance();
    Block* chain[1000];
    Block* getLastBlock();
    void addBlock(Transaction* transaction);
};