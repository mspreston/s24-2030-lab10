/**
 * @file Library.cpp
 * The implementation file for the Library class
 * @author Matthew Preston
 * @date April 2024
*/

#include "Library.h"
#include "Book.h"

Library::Library(int num){
    size = num;
    books = new Book[size];
}

string Library::displayBooks(){
    string bookInfo = "";
    for (int i = 0; i < numBooks; i++){
        bookInfo += books[i].displayInfo() + "\n";
    }
    return bookInfo;
}

void Library::addBook(Book book){
    books[numBooks] = book;
    numBooks++;
}