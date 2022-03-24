#include "include/transaction.h"

#include <iostream>
#include <string.h>

Transaction::Transaction(string sender, string receiver, int amount) {
    this->sender = sender;
    this->receiver = receiver;
    this->amount = amount;
}