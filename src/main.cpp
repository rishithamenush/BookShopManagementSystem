#include <iostream>
#include "/Users/rishithamenusha/Desktop/Infinity/CSE4002/nethra_bookshop_system/include/book.h"
#include "/Users/rishithamenusha/Desktop/Infinity/CSE4002/nethra_bookshop_system/include/order.h"
#include "/Users/rishithamenusha/Desktop/Infinity/CSE4002/nethra_bookshop_system/include/user.h"
#include "/Users/rishithamenusha/Desktop/Infinity/CSE4002/nethra_bookshop_system/include/utils.h"

using namespace std;
bool isLoggedIn = false; 

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
                isLoggedIn = true; 
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
    int choice;
    do {
        cout << "\n=== Book Management ===\n";
        cout << "1. Add a Book\n";
        cout << "2. View All Books\n";
        cout << "3. Search for a Book\n";
        cout << "4. Return to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                addBook(); // Function defined in book.cpp
                break;
            case 2:
                viewBooks(); // Function defined in book.cpp
                break;
            case 3:
                searchBooks(); // Function defined in book.cpp
                break;
            case 4:
                cout << "Returning to main menu...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while(choice != 4);
}

void manageOrders() {
    int choice;
    do {
        cout << "\n=== Order Management ===\n";
        cout << "1. Add an Order\n";
        cout << "2. View All Orders\n";
        cout << "3. Return to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                addOrder();
                break;
            case 2:
                viewOrders(); 
                break;
            case 3:
                cout << "Returning to main menu...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while(choice != 3);
}


void userLogin() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (login(username, password)) {
        cout << "Login successful.\n";
        isLoggedIn = true;
    } else {
        cout << "Login failed. Please try again.\n";
        isLoggedIn = false;
    }


}

void exitSystem() {

     cout << "Exiting the system. Goodbye!\n";

}
