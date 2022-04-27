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
};