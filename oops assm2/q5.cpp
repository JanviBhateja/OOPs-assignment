#include<iostream>
using namespace std;

class Complex{
    private:
    float real;
    float img;

    public:
    void setComplex(float r, float i){
        real=r;
        img=i;
    }
    void displayComplex() {
        cout << real;
        if (img >= 0)
            cout << " + " << img << "i";
        else
            cout << " - " << -img << "i";
        cout << endl;
    }
     Complex addComplex(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }

};

int main(){
    Complex c1, c2, sum;

    // Initialize complex numbers
    c1.setComplex(3.5, 2.5);
    c2.setComplex(1.5, 4.5);

    cout << "First Complex Number: ";
    c1.displayComplex();

    cout << "Second Complex Number: ";
    c2.displayComplex();

    // Calculate sum
    sum = c1.addComplex(c2);

    cout << "Sum of Complex Numbers: ";
    sum.displayComplex();
    return 0;
}