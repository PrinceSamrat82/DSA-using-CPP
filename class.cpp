#include<iostream>
using namespace std;
class student
{
 char name[10];
 int age;
 float mob_no;
 char addres[20];
 int pin;
 public:
 void Accept()
 {
    cout<<"student's name\t";
    cin>>name;
    cout<<"student's age\t";
    cin>>age;
    cout<<"student's mobile number\t";
    cin>>mob_no;
    cout<<"student's address \t";
    cin>>addres;
    cout<<"student's pin code\t";
    cin>>pin;
   }
   public:
   void disply()
   {
    cout<<"      =>Student Details<=     "<<endl;
    cout<<"student's name \t"<<name<<endl;
    cout<<"student's age \t"<<age<<endl;
    cout<<"student's mobile number\t"<<mob_no<<endl;
    cout<<"student's address\t"<<addres<<endl;
    cout<<"student's pin code\t"<<pin<<endl;
   }

};
int main()
{
 student s;
 s.Accept();
 s.disply();

return 0;

}