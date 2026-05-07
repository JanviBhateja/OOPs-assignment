

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout("data.txt");

    fout<<"This is first line\n";
    fout<<"This is second line\n";
    fout<<"This is third line";

    fout.close();

    ifstream fin("data.txt");

    fin.seekg(10);

    cout<<"Current position = "<<fin.tellg()<<endl;

    char ch;

    while(fin.get(ch))
    {
        cout<<ch;
    }

    fin.close();

    return 0;
}