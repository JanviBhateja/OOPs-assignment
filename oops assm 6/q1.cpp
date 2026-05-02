#include <iostream>
using namespace std;

class Book {
public:
    string title, author;
    int ISBN;
};

class Library {
    Book b[10];
    int count = 0;

public:
    bool addNewBook(string &t, string &a, int &i) {
        if (count >= 10) return false;
        b[count].title = t;
        b[count].author = a;
        b[count].ISBN = i;
        count++;
        return true;
    }

    bool removeBooks(int &i) {
        for (int j = 0; j < count; j++) {
            if (b[j].ISBN == i) {
                for (int k = j; k < count - 1; k++) {
                    b[k] = b[k + 1];
                }
                count--;
                return true;
            }
        }
        return false;
    }

    void displayDetails() {
        for (int i = 0; i < count; i++) {
            cout << b[i].title << " " << b[i].author << " " << b[i].ISBN << endl;
        }
    }
};

int main() {
    Library l;

    string t, a;
    int i;

    for (int j = 0; j < 5; j++) {
        cin >> t >> a >> i;
        l.addNewBook(t, a, i);
    }

    cin >> i;
    l.removeBooks(i);

    l.displayDetails();

    return 0;
}