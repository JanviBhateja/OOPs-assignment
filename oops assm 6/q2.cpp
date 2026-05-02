#include <iostream>
using namespace std;

class Book {
public:
    string title, author;
    int ISBN;

    Book() {
        this->title = "";
        this->author = "";
        this->ISBN = 0;
    }

    Book(string t, string a, int i) {
        this->title = t;
        this->author = a;
        this->ISBN = i;
    }

    Book(const Book &b) {
        this->title = b.title;
        this->author = b.author;
        this->ISBN = b.ISBN;
    }

    void display() {
        cout << title << " " << author << " " << ISBN << endl;
    }
};

int main() {
    Book b1;
    Book b2("Math", "RD", 101);
    Book b3 = b2;

    b1.display();
    b2.display();
    b3.display();

    return 0;
}