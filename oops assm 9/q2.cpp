// 2. Count alphabets in NOTES.TXT

#include<iostream>
#include<fstream>
#include<cctype>
using namespace std;

void countAlpha()
{
    ifstream fin("NOTES.TXT");
    char ch;
    int count=0;

    while(fin.get(ch))
    {
        if(isalpha(ch))
            count++;
    }

    cout<<"Number of alphabets = "<<count;

    fin.close();
}

int main()
{
    countAlpha();
    return 0;
}