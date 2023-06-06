#include<iostream>



using namespace std;

string arr1[30],arr2[30],arr3[30],arr4[30],arr5[30],arr6[30],arr7[30],arr8[30],arr9[30],arr16[30];
float tobmarks[30],percent,cgpa,tmarks=600,arr10[30],arr11[30],arr12[30],arr13[30],arr14[30],arr15[30];

int total=0;

void Add_student_Details()

{

		int ch=0;

			cout<<"How many students do u want to enter??"<<endl;

			cin>>ch;

			if(total==0)

			{

			total=ch+total;

			for(int i=0;i<ch;i++)

			{

				cout<<"\nEnter the Details of student "<<i+1<<endl<<endl;

                cout<<"S.No\t";
                cin>>arr1[i];
                cout<<"Registration No.\t";
                cin>>arr2[i];
				cout<<" Enter First Name\t ";
				cin>>arr3[i];
				cout<<" Enter Middle Name\t ";
				cin>>arr4[i];
				cout<<"Enter Last Name\t ";
				cin>>arr5[i];
				cout<<"Enter Semester\t";
				cin>>arr6[i];
				cout<<"Enter Gender\t ";
                cin>>arr7[i];
                cout<<" Enter Address\t";
                cin>>arr8[i];
                cout<<"Enter Mobile Number\t";
                cin>>arr9[i];
                cout<<"Enter OOP's Marks\t";
                cin>>arr10[i];
                cout<<"Enter AEC's Marks\t";
                cin>>arr11[i];
                cout<<"Enter DSA's Marks\t";
                cin>>arr12[i];
                cout<<"Enter English's Marks\t";
                cin>>arr13[i];
                cout<<"Enter Physics's Marks\t";
                cin>>arr14[i];
                cout<<"Enter Mathematics's Marks\t";
                cin>>arr15[i];
                
                
                tobmarks[i]=arr10[i]+arr11[i]+arr12[i]+arr13[i]+arr14[i]+arr15[i];
                percent=(arr10[i]+arr11[i]+arr12[i]+arr13[i]+arr14[i]+arr15[i])/6;
                cgpa=percent/10;
				if(percent>60)
        		cout<<"\nFirst";
    			else if((percent>45)&&(percent<=60))   			
        		cout<<"\nSecond";
   				else if((percent>33)&&(percent<=45))
        		cout<<"\nThird";
    			else
        		cout<<"\nFail";


			}

	    	}

	    	else

	    	{

	    		

	    		for(int i=total;i<ch+total;i++)

			{

				cout<<"\nEnter the Details of student "<<i+1<<endl<<endl;

				cout<<"S.No\t";
                cin>>arr1[i];
                cout<<"Registration No.\t";
                cin>>arr2[i];
				cout<<" Enter First Name\t ";
				cin>>arr3[i];
				cout<<" Enter Middle Name\t ";
				cin>>arr4[i];
				cout<<"Enter Last Name\t ";
				cin>>arr5[i];
				cout<<"Enter Semester\t";
				cin>>arr6[i];
				cout<<"Enter Gender\t ";
                cin>>arr7[i];
                cout<<" Enter Address\t";
                cin>>arr8[i];
                cout<<"Enter Mobile Number\t";
                cin>>arr9[i];
                cout<<"Enter OOP's Marks\t";
                cin>>arr10[i];
                cout<<"Enter AEC's Marks\t";
                cin>>arr11[i];
                cout<<"Enter DSA's Marks\t";
                cin>>arr12[i];
                cout<<"Enter English's Marks\t";
                cin>>arr13[i];
                cout<<"Enter Physics's Marks\t";
                cin>>arr14[i];
                cout<<"Enter Mathematics's Marks\t";
                cin>>arr15[i];
                cout<<"Enter Divison\t";
                cin>>arr16[i];
                tobmarks[i]=arr10[i]+arr11[i]+arr12[i]+arr13[i]+arr14[i]+arr15[i];
                percent=(arr10[i]+arr11[i]+arr12[i]+arr13[i]+arr14[i]+arr15[i])/6;
                cgpa=percent/10;
				

			}

			total=ch+total;

			}

	

}

void Display_student_Details()

{

	if(total==0)

	{

		cout<<"No Details is entered"<<endl;

	}

	else{

		for(int i=0;i<total;i++)

	    		{

	    		cout<<"\n                             =>Student information Details<=                           "<<i+1<<endl<<endl;
                cout<<"S.No\tRegistration No.\tFirst Name\tMiddle Name\tLast Name\tSemester\tGendr    \tAddress      \tMobile Number"<<endl;
                cout<<arr1[i]<<"\t"<<arr2[i]<<"            \t"<<arr3[i]<<"   \t"<<arr4[i]<<"    \t"<<arr5[i]<<"       \t"<<arr6[i]<<"          \t"<<arr7[i]<<"       \t"<<arr8[i]<<"    \t"<<arr9[i]<<endl<<endl;
                

	    	    }

	    	}

}

void search_student_Details()

{

	if(total==0)

	{

		cout<<"No Details is entered"<<endl;

	}

	else{

	string reg_no;

				cout<<"Enter the Regisration number of student"<<endl;

				cin>>reg_no;

				for(int i=0;i<total;i++)

				{

					if(reg_no==arr2[i])

					{

					cout<<"\n                             =>Student information Details<=                           "<<i+1<<endl<<endl;
                    cout<<"S.No\tRegistration No.\tFirst Name\tMiddle Name\tLast Name\tSemester\tGendr    \tAddress      \tMobile Number"<<endl;
                    cout<<arr1[i]<<"\t"<<arr2[i]<<"            \t"<<arr3[i]<<"   \t"<<arr4[i]<<"    \t"<<arr5[i]<<"       \t"<<arr6[i]<<"          \t"<<arr7[i]<<"       \t"<<arr8[i]<<"    \t"<<arr9[i]<<endl<<endl;
                   

					}

				}

			}

}

void update_student_Details()

{

	if(total==0)

	{

		cout<<"No Details is entered"<<endl;

	}

	else{

		string reg_no;

				cout<<"Enter the Registration number of student which you want to update"<<endl;

				cin>>reg_no;

					for(int i=0;i<total;i++)

				{

					if(reg_no==arr2[i])

					{

						cout<<"\nPrevious Details"<<endl<<endl;

						
                        cout<<"\n                             =>Student information Details<=                           "<<i+1<<endl<<endl;
                        cout<<"S.No\tRegistration No.\tFirst Name\tMiddle Name\tLast Name\tSemester\tGendr    \tAddress      \tMobile Number"<<endl;
                        cout<<arr1[i]<<"\t"<<arr2[i]<<"            \t"<<arr3[i]<<"   \t"<<arr4[i]<<"    \t"<<arr5[i]<<"       \t"<<arr6[i]<<"          \t"<<arr7[i]<<"       \t"<<arr8[i]<<"    \t"<<arr9[i]<<endl<<endl;
                        cout<<"\n                  			  Student Result Details																			"<<endl;
 	
 	                    cout<<"S.No\tRegistration No.\t        Name     \tMarks [OOP's,AEC's,DSA's,ENGLISH's,Physics,Math's]  Total Marks  Obtained Marks Percentage      CGPA  DIVISON"<<endl;
	                    cout<<arr1[i]<<"     \t"<<arr2[i]<<"        \t"<<arr3[i]<<" "<<arr4[i]<<" "<<arr5[i]<<"\t       "<<arr10[i]<<",  "<<arr11[i]<<",  "<<arr12[i]<<",  "<<arr13[i]<<",  "<<arr14[i]<<", "<<arr15[i]<<"                       "<<tmarks<<" \t "<<tobmarks[i]<<"\t        "<<percent<<" \t"<<cgpa<<" "<<endl;

	    	        	cout<<"\nEnter new Details"<<endl<<endl;

						cout<<"S.No\t";
                        cin>>arr1[i];
                        cout<<"Registration No.\t";
                        cin>>arr2[i];
				        cout<<" Enter First Name\t ";
				        cin>>arr3[i];
				        cout<<" Enter Middle Name\t ";
				        cin>>arr4[i];
				        cout<<"Enter Last Name\t";
				        cin>>arr5[i];
				        cout<<"Enter Semester\t";
				        cin>>arr6[i];
				        cout<<"Enter Gender\t ";
                        cin>>arr7[i];
                        cout<<" Enter Address\t";
                        cin>>arr8[i];
                        cout<<"Enter Mobile Number\t";
                        cin>>arr9[i];
                        cout<<"Enter OOP's Marks\t";
                        cin>>arr10[i];
                        cout<<"Enter AEC's Marks\t";
                        cin>>arr11[i];
                        cout<<"Enter DSA's Marks\t";
                        cin>>arr12[i];
                        cout<<"Enter English's Marks\t";
                        cin>>arr13[i];
                        cout<<"Enter Physics's Marks\t";
                        cin>>arr14[i];
                        cout<<"Enter Mathematics's Marks\t";
                        cin>>arr15[i];
                        cout<<"Enter Divison\t";
                        cin>>arr16[i];

					}

				}

			}

		}



void delete_student_Details()

{

	if(total==0)

	{

		cout<<"No Details is entered"<<endl;

	}

	else{

		int a;

	        	cout<<"Press 1 to delete all record"<<endl;

				cout<<"Press 2 to delete specific record"<<endl;

				cin>>a;

				if(a==1)

				{

					total=0;

					cout<<"All record is deleted..!!"<<endl;

				}

				else if(a==2)

				{

				string reg_no;

				cout<<"Enter the Rgistration Number of student which you wanted to delete"<<endl;

				cin>>reg_no;

				for(int i=0;i<total;i++)

				{

					if(reg_no==arr2[i])

					{

						for(int j=i;j<total;j++)

						{

						arr1[j]=arr1[j+1];
						arr2[j]=arr2[j+1];
					    arr3[j]=arr3[j+1];
						arr4[j]=arr4[j+1];
						arr5[j]=arr5[j+1];
                        arr6[j]=arr6[j+1];
                        arr7[j]=arr7[j+1];
                        arr8[j]=arr8[j+1];
                        arr9[j]=arr9[j+1];
                        arr10[j]=arr10[j+1];
                        arr11[j]=arr11[j+1];
                        arr12[j]=arr12[j+1];
                        arr13[j]=arr13[j+1];
                        arr14[j]=arr14[j+1];
                        arr15[j]=arr15[j+1];
                        arr16[j]=arr16[j+1];
                        

				     	}

					total--;

					cout<<"Your required record is deleted"<<endl;

					}

				}

				}

				 

			

			else 

			{

				cout<<"Invalid input";

			}

        }

}

void Show_Duplicate_Data_of_student()

{

	if(total==0)

	{

		cout<<"No Details is entered"<<endl;

	}

	else{

	string reg_no;

				cout<<"Enter the Regisration number of student"<<endl;

				cin>>reg_no;

				for(int i=0;i<total;i++)

				{

					if(reg_no==arr2[i])

					{

					cout<<"\n                             =>Student information Details<=                           "<<i+1<<endl<<endl;
                    cout<<"S.No\tRegistration No.\tFirst Name\tMiddle Name\tLast Name\tSemester\tGendr    \tAddress      \tMobile Number"<<endl;
                    cout<<arr1[i]<<"\t"<<arr2[i]<<"            \t"<<arr3[i]<<"   \t"<<arr4[i]<<"    \t"<<arr5[i]<<"       \t"<<arr6[i]<<"          \t"<<arr7[i]<<"       \t"<<arr8[i]<<"    \t"<<arr9[i]<<endl<<endl;
                    cout<<"\n                  			  Student Result Details																			"<<endl;
 	
 	                cout<<"S.No\tRegistration No.\t        Name     \tMarks [OOP's,AEC's,DSA's,ENGLISH's,Physics,Math's]  Total Marks  Obtained Marks Percentage      CGPA  DIVISON"<<endl;
	                cout<<arr1[i]<<"     \t"<<arr2[i]<<"        \t"<<arr3[i]<<" "<<arr4[i]<<" "<<arr5[i]<<"\t       "<<arr10[i]<<",  "<<arr11[i]<<",  "<<arr12[i]<<",  "<<arr13[i]<<",  "<<arr14[i]<<", "<<arr15[i]<<"                       "<<tmarks<<" \t "<<tobmarks[i]<<"\t        "<<percent<<" \t"<<cgpa<<" "<<arr16[i]<<endl;

					}

				}

			}

}

void Display_Student_Result_Details()
{

	if(total==0)

	{

		cout<<"No Details is entered"<<endl;

	}

	else{

		for(int i=0;i<total;i++)

	    		{

	    		
                cout<<"\n                  			            #> Student Result Details<#												"<<endl;
 	
 	            cout<<"S.No\tRegistration No.\t        Name     \tMarks [OOP's,AEC's,DSA's,ENGLISH's,Physics,Math's]  Total Marks  Obtained Marks Percentage      CGPA  DIVISON"<<endl;
	            cout<<arr1[i]<<"     \t"<<arr2[i]<<"        \t"<<arr3[i]<<" "<<arr4[i]<<" "<<arr5[i]<<"\t       "<<arr10[i]<<",  "<<arr11[i]<<",  "<<arr12[i]<<",  "<<arr13[i]<<",  "<<arr14[i]<<", "<<arr15[i]<<"                       "<<tmarks<<" \t "<<tobmarks[i]<<"\t        "<<percent<<" \t"<<cgpa<<" "<<arr16[i]<<endl;

	    	    }

	    	}

}

main()

{

	int value;

	while(true)

	{

	cout<<"\nPress 1 to Add student Details"<<endl;

	cout<<"Press 2 to Search student Details"<<endl;

	cout<<"Press 3 to Update student Details"<<endl;

	cout<<"Press 4 to Delete student Details"<<endl;

	cout<<"Press 5 to Display student Details"<<endl;

    cout<<"Press 6 to Show Duplicate Data of students"<<endl;

    cout<<"Press 7 to Display Student Result Details"<<endl;

	cout<<"Press 8 to Exit"<<endl;
    cout<<"Enter the above choice value\n( It is mandatory to add student Details so first of all enter 1 then other choice.)\nEnter :-";

	cin>>value;

	switch(value)

	{

		case 1:

			Add_student_Details();

			break;

		case 2:

			search_student_Details();

			break;

		case 3:

			update_student_Details();

			break;

		case 4:

			delete_student_Details();

			break;

		case 5:

			Display_student_Details();

			break;
        case 6:
             
             Show_Duplicate_Data_of_student();

             break;

        case 7:

            Display_Student_Result_Details();
            break;

		case 8:

			exit(0);

			break;

		default:

			cout<<"Invalid input"<<endl;

			break;

	}

}

}