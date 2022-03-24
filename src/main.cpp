#include "include/crypto.h"
#include "include/transaction.h"
#include "include/block.h"
#include "include/chain.h"
#include "include/wallet.h"

#include <iostream>
#include <string.h>

int main() {
    //demonstrating blockchain
    Chain* chain = Chain::getInstance();

    Wallet Calder = Wallet();
    Wallet Ruby = Wallet();

    Calder.sendMoney(Ruby.publicKey, 100);

    cout << "Block number: " << chain->chainLength <<"\nBlock #" << chain->getLastBlock()->hash << "\nFrom: " << chain->getLastBlock()->data->sender << "\nTo: " << chain->getLastBlock()->data->receiver << "\nAmount: " << chain->getLastBlock()->data->amount << endl;

    return 0;
}