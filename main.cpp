#include <iostream>
#include "Book.h"
#include "Library.h"

using namespace std;

int main(){

    Book book1("The Great Gatsby", "F. Scott Fitzgerald", "Fiction", 1925);
    cout << "Added book: " << book1.title << " by " << book1.author << endl;

    Book book2("To Kill a Mockingbird", "Harper Lee", "Fiction", 1960);
    string preposition = "";
    if (book2.getYear() < 1985){
        preposition = "before";
    } else {
        preposition = "after";
    }
    cout << "Added a book that was released " << preposition << " C++ first appeared." << endl;

    Book book3("Dr. Who", "BBC", "Science Fiction", 1963);
    book3.setGenre("Non-Fiction");
    cout << "Added book: " << book3.title << " which belongs to the genre of " << book3.getGenre() << endl;

    Library myLibrary(100);
    myLibrary.addBook(book1);
    myLibrary.addBook(book2);
    myLibrary.addBook(book3);

    cout << myLibrary.displayBooks() << endl;

    return 0;
}