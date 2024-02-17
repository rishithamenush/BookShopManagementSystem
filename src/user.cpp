#include "user.h"
#include <iostream>
#include <string>

bool login(const std::string& username, const std::string& password) {
    // Placeholder for authentication logic
    // In a real application, you would check these against a database or a file
    if (username == "admin" && password == "password") {
        std::cout << "Login successful.\n";
        return true;
    } else {
        std::cout << "Login failed.\n";
        return false;
    }
}

void userLogin() {
    std::string username, password;
    std::cout << "Enter username: ";
    std::cin >> username;
    std::cout << "Enter password: ";
    std::cin >> password;

    if (!login(username, password)) {
        std::cout << "Invalid username or password. Please try again.\n";
    }
}
