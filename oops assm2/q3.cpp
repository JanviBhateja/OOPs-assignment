#include<iostream>
using namespace std;

class Example{
    private:
    void privateFxn(){
        cout<<"this is a pvt fxn"<<endl;
    }

    public:
    void publicFxn(){
        cout<<"this is a public fxn"<<endl;
        privateFxn();
    }

};

int main(){
    Example obj;
    obj.publicFxn();
    return 0;
}