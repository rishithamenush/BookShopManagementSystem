#ifndef ORDER_H
#define ORDER_H

#include <string>

struct Order {
    int id;
    int bookId;
    int quantity;
};

void addOrder();
void viewOrders();

#endif // ORDER_H
