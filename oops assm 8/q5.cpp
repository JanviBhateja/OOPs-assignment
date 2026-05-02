#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string s;

    getline(cin, s);

    cout << s.length() << endl;

    ofstream fout("string.txt");
    fout << s;
    fout.close();

    ifstream fin("string.txt");
    char ch;

    while (fin.get(ch)) {
        cout << ch;
    }

    fin.close();
    return 0;
}