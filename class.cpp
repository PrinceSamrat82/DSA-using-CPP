#include<iostream>
#include<string>
using namespace std;
class AdmissionForm
 {
 	private :
 		string name;
 		string fname;
 		int age;
		int dob;
 		public : void filltheForm()
 		{
 			cout<<"Enter your name :";
 			getline(cin,name);
 			cout<<"Enter your father's name :";
 			getline(cin,fname);
 			cout<<"Enter your age :";
 		    cin>>age;

		 }
 	     void showInfo()
 	     {
 	     	cout<<"Your name is ="<<name<<endl;
 	     	cout<<"Your father name is ="<<fname<<endl;
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
return 0;
 }
