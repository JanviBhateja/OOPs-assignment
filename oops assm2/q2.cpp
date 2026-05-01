#include<iostream>
using namespace std;

class Student{
    private:
    int rollNo;
    float marks;

    void displaypvtData(){
        cout<<"enter your roll no"<<rollNo<<endl;
        cout<<"enter your marks"<<marks<<endl;
    }
    
    public:
    void setData(int r, float m){
        rollNo=r;
        marks=m;
    }
     void showData() {
        displaypvtData();  // calling private function
    }
};

int main(){
    Student s1;

    s1.setData(101, 95.5);  
    s1.showData(); 
    return 0;
}