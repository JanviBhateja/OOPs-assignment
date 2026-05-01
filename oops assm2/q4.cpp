#include<iostream>
using namespace std;

class Rectangle{
    private:
    float length;
    float breath;

    public:
    void getData(){
        cout<<"enter length: ";
        cin>>length;
        cout<<"enter width: ";
        cin>>breath;
    }
    void calculateArea(){
         float area= length*breath; 
         cout<<"area is: "<<area<<endl;
    }

};

int main(){
   Rectangle rect;  // Create an object of Rectangle

    rect.getData();       // Initialize width and height
    rect.calculateArea();
    return 0;
}