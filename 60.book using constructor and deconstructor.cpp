#include <iostream>
#include <string>

class Book {
public:
    Book(const std::string& bookTitle) : title(bookTitle) {}
    ~Book() {}

    void displayTitle() {
        std::cout << "Title of the book: " << title << std::endl;
    }

private:
    std::string title;
};

int main() {
    std::string title;

    std::cout << "Enter the title of the book: ";
    std::getline(std::cin, title);

    Book book(title);
    book.displayTitle();

    return 0;
}
