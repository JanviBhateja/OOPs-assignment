// 6. tellp() and random access

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file("hello.txt",ios::out|ios::in);

    char str[]="Hello World";

    for(int i=0; str[i]!='\0'; i++)
    {
        file.put(str[i]);
        cout<<"Position = "<<file.tellp()<<endl;
    }

    file.seekp(6);

    file<<"C++";

    file.close();

    return 0;
}