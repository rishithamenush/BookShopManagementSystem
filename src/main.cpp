#include <iostream>
#include "/Users/rishithamenusha/Desktop/Infinity/CSE4002/nethra_bookshop_system/include/book.h"
#include "/Users/rishithamenusha/Desktop/Infinity/CSE4002/nethra_bookshop_system/include/order.h"
#include "/Users/rishithamenusha/Desktop/Infinity/CSE4002/nethra_bookshop_system/include/user.h"
#include "/Users/rishithamenusha/Desktop/Infinity/CSE4002/nethra_bookshop_system/include/utils.h"

using namespace std;

void displayMainMenu();
void manageBooks();
void manageOrders();
void userLogin();
void exitSystem();

int main() {
    bool isLoggedIn = false; // Track if user is logged in
    char choice;

    do {
        displayMainMenu();
        cin >> choice;
        switch(choice) {
            case '1':
                if (isLoggedIn) {
                    manageBooks();
                } else {
                    cout << "Please login first." << endl;
                }
                break;
            case '2':
                if (isLoggedIn) {
                    manageOrders();
                } else {
                    cout << "Please login first." << endl;
                }
                break;
            case '3':
                userLogin();
                isLoggedIn = true; // Assume login is successful for simplicity
                break;
            case '4':
                exitSystem();
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while(choice != '4');

    return 0;
}

void displayMainMenu() {
    cout << "\n=== Nethra Bookshop Automation System ===\n";
    cout << "1. Manage Books\n";
    cout << "2. Manage Orders\n";
    cout << "3. User Login\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
}

void manageBooks() {
    // Placeholder for managing books
    cout << "Book Management Module. Implement corresponding functions." << endl;
    // Example function call: addBook(), viewBooks(), searchBooks()
}

void manageOrders() {
    // Placeholder for managing orders
    cout << "Order Management Module. Implement corresponding functions." << endl;
    // Example function call: viewOrders(), prepareQuotation()
}

void userLogin() {
    // Placeholder for user login functionality
    cout << "User Login Module. Implement login functionality here." << endl;
    // Example function call: login(username, password)
}

void exitSystem() {
    cout << "Exiting the system. Goodbye!" << endl;
    // Perform any cleanup necessary before exiting
    // Example: save data to file, close database connections, etc.
}
