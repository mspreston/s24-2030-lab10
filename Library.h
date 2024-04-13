/**
 * @file Library.h
 * The header file for the Book class
 * @author Matthew Preston
 * @date April 2024
*/

#ifndef LIBRARY_H
#define LIBRARY_H

#include<string>  
#include "Book.h"
using namespace std;

class Library{
    private:
        int size;
        int numBooks = 0;
        Book* books;

    public:
        /*
        * Default constructor
        */
        Library(int size);

        /**
         * Display the information of the book
         * @return A string containing the information of the book
         */
        string displayBooks();

        /**
         * Add a book to the library
         * @param book The book to add
         */
        void addBook(Book book);
};

#endif // LIBRARY_H