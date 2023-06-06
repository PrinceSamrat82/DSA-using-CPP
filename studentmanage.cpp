#include<iostream>
using namespace std;
class student_information
{
  int s_no;
  char reg_no[20];
  float oop_m,aec_m,dsa_m,eng_m,phy_m,math_m,total_m=600,Tobt_m,percent,cgpa;
  char divison[20];
  char f_name[20];
  char m_name[20];
  char l_name[20];
  int sem;
  char gender[20];
  char addres[20];
  char mob_no[20];
 public:
 void Add_studentd_Details()
 {
   cout<<"        student management system                    "<<endl;
   cout<<"S.No\t";
   cin>>s_no;
   cout<<"Registration no\t";
   cin>>reg_no;
   cout<<"First Name\t";
   cin>>f_name;
   cout<<"Middle Name\t";
   cin>>m_name;
   cout<<"Last Name\t";
   cin>>l_name;
   cout<<"Semester\t";
   cin>>sem;
   cout<<"Gender\t";
   cin>>gender;
   cout<<"Addess\t";
   cin>>addres;
   cout<<"Mobile Number\t";
   cin>>mob_no;
   cout<<"OOP's Marks\t";
   cin>>oop_m;
   cout<<"AEC's Marks\t";
   cin>>aec_m;
   cout<<"DSA's Marks\t";
   cin>>dsa_m;
   cout<<"English's Marks\t";
   cin>>eng_m;
   cout<<"Physics's Marks\t";
   cin>>phy_m;
   cout<<"Mathematics's marks\t";
   cin>>math_m;
   cout<<"Divison\t";
   cin>>divison;
   Tobt_m=oop_m+aec_m+dsa_m+eng_m+phy_m+math_m;
   percent=(oop_m+aec_m+dsa_m+eng_m+phy_m+math_m)/6 ;
   cgpa=percent/10;
   

 }  
 public:
 void Display_student_details()
 {
  cout<<"                                   Student information Details                                            "<<endl;
  cout<<"S.No\tRegistration No.\tFirst Name\tMiddle Name\tLast Name\tSemester\tGendr    \tAddress      \tMobile Number"<<endl;
  cout<<s_no<<"\t"<<reg_no<<"            \t"<<f_name<<"   \t"<<m_name<<"    \t"<<l_name<<"       \t"<<sem<<"          \t"<<gender<<"       \t"<<addres<<"    \t"<<mob_no<<endl;
 }
 public:
 void student_result()
 {
 	cout<<"                  			  Student Result Details																			"<<endl;
 	
 	cout<<"S.No\tRegistration No.\t        Name     \tMarks [OOP's,AEC's,DSA's,ENGLISH's,Physics,Math's]  Total Marks  Obtained Marks Percentage      CGPA  DIVISON";
	cout<<s_no<<"     \t"<<reg_no<<"        \t"<<f_name<<" "<<m_name<<" "<<l_name<<"\t       "<<oop_m<<",  "<<aec_m<<",  "<<dsa_m<<",  "<<eng_m<<",  "<<phy_m<<", "<<math_m<<"                       "<<total_m<<" \t "<<Tobt_m<<"\t        "<<percent<<" \t"<<cgpa<<" "<<divison<<endl;
  }     
};
int main()
{
 student_information s;
 int i;
 
 for(i=1;i<=80;i++)
 {
 s.Add_studentd_Details();
 s.Display_student_details();
 s.student_result();
 } 

return 0;



}
