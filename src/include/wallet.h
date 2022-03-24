#pragma once

#include "crypto.h"
#include "transaction.h"

#include <iostream>
#include <string.h>

using namespace std;

class Wallet {
public:
    string publicKey;
    Wallet();
    void sendMoney(string receiver, int amount);
    /*
    TODO: RSA/Signing implementation, blockchain is currently insecure
    int privateKey;
    int amount; (currently just a ledger)
    */
};