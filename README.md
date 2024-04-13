# CPSC 2030 (Lab_10)

Monday, April 15th

**Due**: By the end of the day (Friday, April 26th)

**Instructions**  
Write a C++ version of the program that you wrote in Python for Lab 2. That was the lab where you implemented `Book` and `Library` classes. I have completed `main.cpp`, `Library.cpp`, and `Library.h` for you. Your work will focus on implementing the Book class. 

You should satisfy the following requirements:
- Implement the `Book` class by creating `Book.h` and `Book.cpp`
- The `Book` class should have the following *private* attributes: genre (string), year (int), and isAvailable(bool)
- The `Book` class should have the following *public* attributes: title (string) and author (string).
- Write a *default* constructor for the `Book` class that sets `title`, `author`, and `genre` to empty strings, `year` to 0, and `isAvailable` to false.
- Write a *parameterized* constructor that accepts new values for `title`, `author`, `genre`, and `year`. By the fact of creating a new instance, `isAvailable` should be set as true within the parameterized constructor.
- Write a *function* called `displayInfo()` that returns a string with all five attributes neatly formatted.
- Write a *function* called `getGenre()` that is a getter for `genre`.
- Write a *function* called `setGenre()` that is a setter for a new `genre` value.
- Write a *function* called `getYear()` that is a getter for `year`.
- Write a *function* called `setYear()` that is a setter for a new `year` value.
- Use good programming style.

Good Programming Style:
- File begins with a header containing Doxygen comments, including @file, brief description, @author, @date
- Header files include Doxygen for any non-constructor functions including @param and/or @return information where appropriate.
- Uses #define or const variables for all constants.
- Variables are i) clearly named according to purpose; 2) declared at the beginning of the function; 3) initialized when declared; 4) commented on the same line when declared
- Code is commented for each task (not necessarily every line)
- Indentation is consistent inside each level of {} in if/for/while statements.
- Program exists with `return 0;`
