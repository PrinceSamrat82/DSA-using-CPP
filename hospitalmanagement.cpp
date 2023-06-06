#include<iostream>
using namespace std;

class Hospital
{
    string name,address,website,email,PatientName;
    double contactNo,PatientId;
    public:
    void GetInfo()
    {
        cout<<"Enter the name of Hospital\n";
        cin>>name;
        cout<<"Enter the Address of Hospital\n";
        cin>>address;
        cout<<"Enter the Website of Hospital\n";
        cin>>website;
        cout<<"Enter the Email of Hospital\n";
        cin>>email;
        cout<<"Enter the Contact Number of Hospital\n";
        cin>>contactNo;
    }
    void DisplayInfo()
    {
        cout<<"\n\nHospital Name is         : "<<name<<endl;
        cout<<"Hospital Address is      : "<<address<<endl;
        cout<<"Hospital Website is      : "<<website<<endl;
        cout<<"Hospital Email is        : "<<email<<endl;
        cout<<"Hospital Contact No is   : "<<contactNo<<endl;
    }
    void Total_Patient_Addmitted()
    {
        cout<<"Enter Patient Name\n";
        cin>>PatientName;
        cout<<"Enter Patient ID\n";
        cin>>PatientId;
    }
    void Total_Patient_Record()
    {
        cout<<"Patient Name is  : "<<PatientName<<endl;
        cout<<"Patient ID is    : "<<PatientId<<endl;
    }

};

class Doctor : virtual public Hospital
{
    public:
    string name,emp_id,Specialization;
    int age,salary,fees;
    public:
    void Get_Doctor_Details()
    {
        cout<<"Enter Doctor Name\n";
        cin>>name;
        cout<<"Enter Doctor Id \n";
        cin>>emp_id;
        cout<<"Enter Doctor Age\n";
        cin>>age;
        cout<<"Enter Doctor Salary\n";
        cin>>salary;
        cout<<"Enter Doctor Fees\n";
        cin>>fees;
    }
    void Display_Doctor_Deatils()
    {
        cout<<"\n\nDoctor Name is   : "<<name<<endl;
        cout<<"Doctor ID is     : "<<emp_id<<endl;
        cout<<"Doctor Age is    : "<<age<<endl;
        cout<<"Doctor Salary is : "<<salary<<endl;
        cout<<"Doctor Fees is   : "<<fees<<endl;
    }
};

class Patient : virtual public Hospital
{
    public:
    string patientName,gender,previous_history,date_of_addmission,discharge_date;
    int age,desease_type;
    public:
   int GetInfo();
    void GetInfo2()
    {
        cout<<"Enter Patient Name \n";
        cin>>patientName;
        cout<<"Enter Patient Gender \n";
        cin>>gender;
        cout<<"Enter Patient Previous History \n";
        cin>>previous_history;
        cout<<"Enter Patient Age \n";
        cin>>age;
        cout<<"Enter Patient Date Of Addmission \n";
        cin>>date_of_addmission;
        cout<<"Enter Patient Discharge date \n";
        cin>>discharge_date;
        cout<<"Enter Patient Disease Type \n1.Heart_Disease   2.Cancer_Disease   3.For_Surgury   4.General_Diseases\n";
        cin>>desease_type;
    }
    void DisplayInfo2()
    {
        cout<<"\n\nPatient Name is               : "<<patientName<<endl;
        cout<<"Patient Gender is             : "<<gender<<endl;
        cout<<"Patient Disease Type is       : "<<desease_type<<endl;
        cout<<"Patient Previous History is   : "<<previous_history<<endl;
        cout<<"Patient Age is                : "<<age<<endl;
        cout<<"Patient Date Of Addmission is : "<<date_of_addmission<<endl;
        cout<<"Patient Discharge Date is     : "<<discharge_date<<endl;
    }
};

class Heart_Doctor : public Doctor
{
    public:
    int Doctor_Details()
    {
        cout<<"Doctor Specialization : Heart_Doctor\n";
        Doctor::Get_Doctor_Details();
    }
};

class Cancer_Doctor : public Doctor
{
    public:
    int Doctor_Details()
    {
        cout<<"Doctor Specialization : Cancer_Doctor\n";
        Doctor::Get_Doctor_Details();
    }
};

class Sergen : public Doctor
{
    public:
    int Doctor_Details()
    {
        cout<<"Doctor Specialization : Sergen\n";
        Doctor::Get_Doctor_Details();
    }
};

class Physicion : public Doctor
{
    public:
    int Doctor_Details()
    {
        cout<<"Doctor Specialization : Physicion\n";
        Doctor::Get_Doctor_Details();
    }
};



class Appointment : virtual public Patient, public Heart_Doctor, public Cancer_Doctor, public Sergen, public Physicion
{
    public:
    void Data_Of_Appointment()
    {   
        cout<<"Book Appointment \n";

        Hospital :: GetInfo();
        Patient :: GetInfo2();

        if(desease_type==1)
        {
            Heart_Doctor :: Get_Doctor_Details();
            Heart_Doctor :: Display_Doctor_Deatils();
        }
        else if(desease_type==2)
        {
            Cancer_Doctor :: Get_Doctor_Details();
            Cancer_Doctor :: Display_Doctor_Deatils();
        }

        else if (desease_type==3)
        {
            Sergen :: Get_Doctor_Details();
            Sergen :: Display_Doctor_Deatils();
        }
        else
        {
            Physicion :: Get_Doctor_Details();
            Physicion :: Display_Doctor_Deatils();
        }

        DisplayInfo();
        DisplayInfo2();

    }
};

     
class Patient_Details
{
        int bed_no,room_no,cost_per_day,total_bill;;
        string types_of_desease,medicine;
        public:
        void Get_Info()
        {
            cout<<"Enter Patient Bed No\n";
            cin>>bed_no;
            cout<<"Enter Patient Room No\n";
            cin>>room_no;
            cout<<"Enter Patient Cost Per Day\n";
            cin>>cost_per_day;
            cout<<"Enter Patien Deseases Types\n";
            cin>>types_of_desease;
            cout<<"Enter Patient Required Medicines NAme\n";
            cin>>medicine;
        }
        void Display_Info()
        {
            cout<<"\n\nPatient Bed No is                    : "<<bed_no<<endl;
            cout<<"Patient Room No is                   : "<<room_no<<endl;
            cout<<"Patient Cost per day in Hospital is  : "<<cost_per_day<<endl;
            cout<<"Patient Desease type is              : "<<types_of_desease<<endl;
            cout<<"Patient Required Medicine is         : "<<medicine<<endl;
        }
        void Total_Bill_Get()
        {   
            cout<<"Enter Total Bill of Patient\n";
            cin>>total_bill;
        }
        void Total_Bill_Display()
        {
            cout<<"Total Bill is : "<<total_bill;
        }


};

class Patient_Details2
{
    string medicines,types_of_deseases;
    int next_visit_time,total_fee_paid;
    public:
    void Get_Info2()
        {
            cout<<"Enter Required Medicines Name \n";
            cin>>medicines;
            cout<<"Enter Next Visit Time \n";
            cin>>next_visit_time;
            cout<<"Enter Total Fees Paid \n";
            cin>>total_fee_paid;
            cout<<"Enter Types of Deseases \n";
            cin>>types_of_deseases;
        }
        void Display_Info2()
        {
            cout<<"\n\nPatient Required Medicine Name is    : "<<medicines<<endl;
            cout<<"Patient Next Visit Time  is          : "<<next_visit_time<<endl;
            cout<<"Patient Total fee Paid is            : "<<total_fee_paid<<endl;
            cout<<"Patient Types of desease is          : "<<types_of_deseases<<endl;
        }
};



class Reception : public Appointment, public Patient_Details, public Patient_Details2
{
    int S_no,date;
    public:
    void View_Info()
    {
        Data_Of_Appointment();
    }

    void Display_All_info()
    {
        int op;
        cout<<"\n\nEnter Choice\n  1.Addmitted in Hospital   2.Not Addmitted in Hospital"<<endl;
        cin>>op;
        if(op==1)
        {
        Patient_Details :: Get_Info();
        Patient_Details :: Display_Info();
        }
        else
        {
        Patient_Details2 :: Get_Info2();
        Patient_Details2 :: Display_Info2();
        }
    }
};



int main()
{
    Reception obj;
    obj.View_Info();
    obj.Display_All_info();
    return 0;
}