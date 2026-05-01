#include<iostream>
using namespace std;

class student{
    private:
    string name; 
    int rollNo; 
    string degree; 
    char hostel; 
    float currentCGPA; 

    public:
    void addDetails(){
        cout<<"enter your name: "<<endl;
        cin>>name;
        cout<<"enter your roll no: "<<endl;
        cin>>rollNo;
        cout<<"enter your degree: "<<endl;
        cin>>degree;
        cout<<"enter your hostel: "<<endl;
        cin>>hostel;
        cout<<"enter your cgpa: "<<endl;
        cin>>currentCGPA;
    }

     void updateDetails()
    {
        cout << "Update Name: ";
        cin >> name;

        cout << "Update Degree: ";
        cin >> degree;
    }

    void updateCGPA()
    {
        cout << "Enter new CGPA: ";
        cin >> currentCGPA;
    }

    void updateHostel()
    {
        cout << "Enter new Hostel: ";
        cin >> hostel;
    }

    void displayDetails()
    {
        cout << "\n----- Student Details -----\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "CGPA: " << currentCGPA << endl;
    }
};

int main(){
    student s1;

    s1.addDetails();
    s1.displayDetails();

    s1.updateCGPA();
    s1.updateHostel();

    s1.displayDetails();
    return 0;
}