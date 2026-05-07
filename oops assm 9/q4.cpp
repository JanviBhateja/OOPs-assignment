// 4. Character I/O operations

#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main()
{
    char str[100];

    cout<<"Enter string: ";
    cin.getline(str,100);

    cout<<"Length = "<<strlen(str)<<endl;

    ofstream fout("data.txt");

    for(int i=0; str[i]!='\0'; i++)
    {
        fout.put(str[i]);
    }

    fout.close();

    ifstream fin("data.txt");

    char ch;

    cout<<"Stored characters are:"<<endl;

    while(fin.get(ch))
    {
        cout<<ch;
    }

    fin.close();

    return 0;
}