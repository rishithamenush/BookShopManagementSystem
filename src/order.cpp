#include "order.h"
#include <iostream>
#include <vector>

std::vector<Order> orders;

void addOrder() {
    Order newOrder;
    // Assume Order struct has id, bookId, quantity
    std::cout << "Enter order ID: ";
    std::cin >> newOrder.id;
    std::cout << "Enter book ID: ";
    std::cin >> newOrder.bookId;
    std::cout << "Enter quantity: ";
    std::cin >> newOrder.quantity;
    orders.push_back(newOrder);
    std::cout << "Order added successfully.\n";
}

void viewOrders() {
    std::cout << "Current Orders:\n";
    for (const auto& order : orders) {
        std::cout << "Order ID: " << order.id << ", Book ID: " << order.bookId << ", Quantity: " << order.quantity << "\n";
    }
}
