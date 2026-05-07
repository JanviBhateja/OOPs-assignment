// 1. Write numbers 1 to 200 in NUM.TXT

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout("NUM.TXT");

    for(int i=1;i<=200;i++)
    {
        fout<<i<<" ";
    }

    fout.close();
    return 0;
}