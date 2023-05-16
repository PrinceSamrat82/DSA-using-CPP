#include<iostream>
#include<string>
using namespace std;
class AdmissionForm
 {
 	public:
 		string name;
 		string fname;
 		int age;
 		public : void filltheForm()
 		{
 			cout<<"Enter your name :";
 			cin>>name;
 			cout<<"Enter your father's name :";
 			cin>>fname;
 			cout<<"Enter your age :";
 			cin>>age;

		 }
 	     void showInfo()
 	     {
 	     	cout<<"Your name is ="<<name<<endl;
 	     	cout<<"Your father's name is ="<<fname<<endl;
 	     	cout<<"Your age is = "<<age<<endl;
		  }


 };
 int main()
 {
 	AdmissionForm naveen,prince,pritam;
 	naveen.filltheForm();
 	prince.filltheForm();
 	pritam.filltheForm();
 	naveen.showInfo();
 	prince.showInfo();
 	pritam.showInfo();
return(0);
 }
