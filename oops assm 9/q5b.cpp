

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file("num.txt",ios::out|ios::in);

    file<<"123456789";

    file.seekp(4);

    file.put('X');

    file.close();

    return 0;
}