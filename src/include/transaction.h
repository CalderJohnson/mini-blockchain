#pragma once

#include <iostream>
#include <string.h>

using namespace std;

//model for a transaction on the blockchain
class Transaction {
public:
    Transaction(string sender="", string receiver="", int amount=0);
    string sender;
    string receiver;
    int amount;
};