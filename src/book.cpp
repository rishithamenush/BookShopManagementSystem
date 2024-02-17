#include "/Users/rishithamenusha/Desktop/Infinity/CSE4002/nethra_bookshop_system/include/book.h"
#include <iostream>
#include <fstream>
#include <vector>

std::vector<Book> books;

// Function to read books from a file
void readBooksFromFile() {
    std::ifstream inputFile("books.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Error: Unable to open file for reading.\n";
        return;
    }

    books.clear(); // Clear existing books vector before reading from file

    Book book;
    while (inputFile >> book.id >> std::ws && std::getline(inputFile, book.title) && std::getline(inputFile, book.author)) {
        books.push_back(book);
    }

    inputFile.close();
}

// Function to write books to a file
void writeBooksToFile() {
    std::ofstream outputFile("books.txt");
    if (!outputFile.is_open()) {
        std::cerr << "Error: Unable to open file for writing.\n";
        return;
    }

    for (const auto& book : books) {
        outputFile << book.id << "\n" << book.title << "\n" << book.author << "\n";
    }

    outputFile.close();
}

// Function to add a book
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

    writeBooksToFile(); // Write updated books vector to file after adding a book
}

// Function to view all books
void viewBooks() {
    readBooksFromFile(); // Read books from file before viewing
    std::cout << "Available Books:\n";
    for (const auto& book : books) {
        std::cout << "ID: " << book.id << ", Title: " << book.title << ", Author: " << book.author << "\n";
    }
}

// Function to search for a book by title
void searchBooks() {
    readBooksFromFile(); // Read books from file before searching
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

// Additional functions can be added as needed

