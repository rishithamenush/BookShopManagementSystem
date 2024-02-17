#include <iostream>
#include "/Users/rishithamenusha/Desktop/Infinity/CSE4002/nethra_bookshop_system/include/book.h"
#include "/Users/rishithamenusha/Desktop/Infinity/CSE4002/nethra_bookshop_system/include/order.h"
#include "/Users/rishithamenusha/Desktop/Infinity/CSE4002/nethra_bookshop_system/include/user.h"
#include "/Users/rishithamenusha/Desktop/Infinity/CSE4002/nethra_bookshop_system/include/utils.h"

using namespace std;

// ANSI Color Codes
const string RED = "\033[31m";
const string GREEN = "\033[32m";
const string YELLOW = "\033[33m";
const string CYAN = "\033[36m";
const string RESET = "\033[0m";


bool isLoggedIn = false; 

void displayMainMenu();
void clearConsole();
void manageBooks();
void manageOrders();
void userLogin();
void exitSystem();

int main() {
    cout << CYAN << "\n╔══════════════════════════════════════════════════════════════╗\n";
    cout << "║                                                              ║\n";
    cout << "║                  Nethra Bookshop Automation System           ║\n";
    cout << "║                                                              ║\n";
    cout << "╚══════════════════════════════════════════════════════════════╝\n" << RESET;
    cout << "\n";


    userLogin();

    char choice;

    while(isLoggedIn) { 
        clearConsole();
        displayMainMenu();
        cin >> choice;
        switch(choice) {
            case '1':
                manageBooks();
                break;
            case '2':
                manageOrders();
                break;
            case '3':
                exitSystem();
                return 0; 
            default:
                cout << RED << "Invalid choice. Please try again.\n" << RESET;
        }
    }

    return 0;
}


void displayMainMenu() {
        cout << CYAN;
    cout << "\n╔══════════════════════════════════════════════════════════════╗\n";
    cout << "║                                                              ║\n";
    cout << "║             Welcome Nethra Bookshop Automation System        ║\n";
    cout << "║                                                              ║\n";
    cout << "╚══════════════════════════════════════════════════════════════╝\n" << RESET;
    cout << "\n";
    cout <<GREEN<< "1. Manage Books\n";
    cout << "\n";
    cout <<GREEN<< "2. Manage Orders\n";
    cout << "\n";
    cout <<GREEN<< "3. Exit\n";
    cout << "\n";
    cout <<GREEN<< "Enter your choice: ";
}

void manageBooks() {
    int choice;
    do {
        clearConsole();
         cout << CYAN;
    cout << "\n╔══════════════════════════════════════════════════════════════╗\n";
    cout << "║                                                              ║\n";
    cout << "║                        Books Management                      ║\n";
    cout << "║                                                              ║\n";
    cout << "╚══════════════════════════════════════════════════════════════╝\n" << RESET;
    cout << "\n";
        cout <<GREEN<<  "1. Add a Book\n";
        cout << "\n";
        cout <<GREEN<< "2. View All Books\n";
        cout << "\n";
        cout <<GREEN<< "3. Search for a Book\n";
        cout << "\n";
        cout <<GREEN<< "4. Return to Main Menu\n";
        cout << "\n";
        cout <<GREEN<< "Enter your choice: ";
        



        cin >> choice;

        switch(choice) {
            case 1:
                addBook();
                break;
            case 2:
                viewBooks();
                break;
            case 3:
                searchBooks();
                break;
            case 4:
                cout << "Returning to main menu...\n";
                break;
            default:
                cout << "\n";
                cout << RED << "Invalid choice. Please try again.\n" << RESET;
        }
    } while(choice != 4);
}

void manageOrders() {
    int choice;
    do {
        clearConsole();
         cout << CYAN;
    cout << "\n╔══════════════════════════════════════════════════════════════╗\n";
    cout << "║                                                              ║\n";
    cout << "║                        Order Management                      ║\n";
    cout << "║                                                              ║\n";
    cout << "╚══════════════════════════════════════════════════════════════╝\n" << RESET;
    cout << "\n";
        cout << GREEN<< "1. Add an Order\n";
        cout << "\n";
        cout <<GREEN<< "2. View All Orders\n";
        cout << "\n";
        cout <<GREEN<< "3. Return to Main Menu\n";
        cout << "\n";
        cout <<GREEN<< "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                addOrder();
                break;
            case 2:
                viewOrders();
                break;
            case 3:
            cout << "\n";
                cout << "Returning to main menu...\n";
                break;
            default:
            cout << "\n";
                cout << RED << "Invalid choice. Please try again.\n" << RESET;
        }
    } while(choice != 3);
}

void userLogin() {
    string username, password;
    do {
        cout << "Enter username: ";
        
        cin >> username;
        cout << "\n";
        cout << "Enter password: ";
        
        cin >> password;
        cout << "\n";

        if (login(username, password)) {
            isLoggedIn = true;
            clearConsole();
        } else {
            cout << "\n";
            cout << RED << "Login failed. Please try again.\n" << RESET;
            isLoggedIn = false;
        }
    } while (!isLoggedIn); 
}

void exitSystem() {
    cout << YELLOW << "Exiting the system. Goodbye!\n" << RESET;
}

void clearConsole() {
    
    cout << "\033[2J\033[1;1H"; 
}