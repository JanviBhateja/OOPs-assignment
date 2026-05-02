#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("demo.txt", ios::in | ios::out | ios::trunc);

    file << "Hello World";

    cout << file.tellp() << endl;

    file.seekg(0);
    cout << file.tellg() << endl;

    char ch;
    file.get(ch);
    cout << ch << endl;

    file.seekp(6);
    file << "C++";

    file.seekg(0);

    string s;
    getline(file, s);
    cout << s;

    file.close();

    return 0;
}