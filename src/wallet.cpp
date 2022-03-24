#include "include/wallet.h"
#include "include/crypto.h"
#include "include/transaction.h"
#include "chain.h"

#include <iostream>
#include <string.h>
#include <random>
#include <time.h>

Wallet::Wallet() {
    //random hash for public key
    srand(time(NULL));
    int hashDeterminants1 = rand();
    char hashDeterminant2[(int)((ceil(log10(hashDeterminants1))+1)*sizeof(char))];
    sprintf(hashDeterminant2, "%d", hashDeterminants1);
    this->publicKey = Hasher::SHA256(hashDeterminant2);
}

void Wallet::sendMoney(string receiver, int amount) {
    Transaction* transaction = new Transaction(this->publicKey, receiver, amount);
    Chain::getInstance()->addBlock(transaction);
}