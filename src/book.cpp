#include "/Users/rishithamenusha/Desktop/Infinity/CSE4002/nethra_bookshop_system/include/book.h"
#include <iostream>
#include <fstream>
#include <vector>

std::vector<Book> books;

void addBook() {
    Book newBook;
    std::cout << "Enter book ID: ";
    std::cin >> newBook.id;
    std::cout << "Enter book title: ";
    std::cin.ignore();
    std::getline(std::cin, newBook.title);
    std::cout << "Enter author name: ";
    std::getline(std::cin, newBook.author);
    books.push_back(newBook);
    std::cout << "Book added successfully.\n";
}

void viewBooks() {
    std::cout << "Available Books:\n";
    for (const auto& book : books) {
        std::cout << "ID: " << book.id << ", Title: " << book.title << ", Author: " << book.author << "\n";
    }
}

void searchBooks() {
    std::string title;
    std::cout << "Enter book title to search: ";
    std::cin.ignore();
    std::getline(std::cin, title);

    bool found = false;
    for (const auto& book : books) {
        if (book.title == title) {
            std::cout << "Book Found: ID: " << book.id << ", Title: " << book.title << ", Author: " << book.author << "\n";
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "No book found with the title " << title << ".\n";
    }
}
