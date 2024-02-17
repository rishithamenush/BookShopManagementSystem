#include "/Users/rishithamenusha/Desktop/Infinity/CSE4002/nethra_bookshop_system/include/user.h"
#include <iostream>
#include <string>

bool login(const std::string& username, const std::string& password) {
    // Implementation that checks the credentials
    if (username == "admin" && password == "password") {
        std::cout << "Login successful.\n";
        return true;
    } else {
        std::cout << "Login failed.\n";
        return false;
    }
}

// Other functions as necessary
