#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int reg_no;
    char name[20];
    cout<<"Enter student Reg no. ";
    cin>>reg_no;
    cout<<"student Name ";
    cin>>name;
    ofstream output;
    
    output.open("student");
    output<<reg_no;
    output<<"Student Name:-";
    output<<name;
    
    

}