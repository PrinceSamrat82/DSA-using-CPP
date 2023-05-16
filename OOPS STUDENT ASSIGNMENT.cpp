#include<iostream>
using namespace std;
class main_menu
{
	protected:
		char name[50], address[3];
		int i,sem, mob_no[10];
		char gender[1];
		public:
			void getdata()
			{
				cout<<"Enter student name " "sem " "address " "mob_no " "gender\n";
				cin>>name;
				cin>>sem;
				cin>>address;
			    //cin>>mob_no;
				cin>>gender;
			}
			void display()
			{
				cout<<"Student's detail are as follow\n";
				cout<<"name is "<<name<<" "<<"sem is "<<sem<<" ";
				cout<<"address is "<<address<<" "<<"mob_no is "<<mob_no<<" "<<"gender is "<<gender;
			}
			
};
int main()
{int i;
	main_menu s[70];
	for(i=0;i<70;i++)
	{
	s[i].getdata();
	s[i].display();}
	return 0;
}

