#ifndef BOOK_H
#define BOOK_H

#include <string>

struct Book {
    int id;
    std::string title;
    std::string author;
};

void addBook();
void viewBooks();
void searchBooks();

#endif // BOOK_H
