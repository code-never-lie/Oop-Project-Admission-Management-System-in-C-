#include <iostream>
using namespace std;
#include <stdlib.h>
#include<string.h>
#include<windows.h>
class Person
{
public:
    string name;
    int age;
    char gender;
    string email;
    string address;
    int postal_code;


    Person (string name="",int age=0,char gender='M',string email="",string address="",int postal_code=0)
    {

        set_name(name);
        set_age(age);
        set_gender(gender);
        set_email(email);
        set_address(address);
        set_postal_code(postal_code);
    }
    void set_name( string name)
    {
        this-> name =  name;
    }
    string get_name() const
    {
        return this-> name;
    }
    void set_age( int age)
    {
        this-> age =  age;
    }
    int get_age() const
    {
        return this-> age;
    }
    void set_gender( char gender)
    {
        this-> gender =  gender;
    }
    char get_gender() const
    {
        return this-> gender;
    }
    void set_email( string email)
    {
        this-> email =  email;
    }
    string get_email() const
    {
        return this-> email;
    }
    void set_address( string address)
    {
        this-> address =  address;
    }
    string get_address() const
    {
        return this-> address;
    }
    void set_postal_code( int postal_code)
    {
        this-> postal_code =  postal_code;
    }
    int get_postal_code() const
    {
        return this-> postal_code;
    }


    void display()
    {
        cout<<"Name         "<<get_name()<<endl;
        cout<<"Age          "<<get_age()<<endl;
        cout<<"Gender       "<<get_gender()<<endl;
        cout<<"Email        "<<get_email()<<endl;
        cout<<"Address      "<<get_address()<<endl;
        cout<<"Postal Code  "<<get_postal_code()<<endl;
    }


};

class Teacher : public Person
{
public:
    string office_number;
    string id;
    string course;
    Teacher (string name,int age,char gender,string email,string address,int postal_code,string office_number="NULL",string id="00",string course="")
        :Person(name,age,gender,email,address,postal_code)
    {
        set_office_number(office_number);
        set_id(id);
        set_course(course);

    }

    void set_office_number(string office_number)
    {
        this->office_number = office_number;
    }
    string get_office_number() const
    {
        return this->office_number;
    }
    void set_id(string id)
    {
        this->id = id;
    }
    string get_id() const
    {
        return this->id;
    }
    void set_course(string course)
    {
        this->course = course;
    }
    string get_course()
    {
        return this->course;
    }
    void Display_Teacher()
    {
        display();
        cout<<" Office number        "<<get_office_number();
        cout<<" Teacher ID           "<<get_id();

    }
    friend std::ostream& operator<< (std::ostream &out, const Teacher &tech);
};
std::ostream& operator<< (std::ostream &out, const Teacher &tech)
{

    out<<" Teacher Name          "<<tech.get_name()<<endl;
    out<<" Teacher Age           "<<tech.get_age()<<endl;
    out<<" Teacher Gender        "<<tech.get_gender()<<endl;
    out<<" Teacher  Email        "<<tech.get_email()<<endl;
    out<<" Teacher  Address      "<<tech.get_address()<<endl;
    out<<" Teacher  Postal Code  "<<tech.get_postal_code()<<endl;
    out<<" Office number         "<<tech.get_office_number()<<endl;
    out<<" Teacher ID            "<<tech.get_id()<<endl;

}
class Department
{
private:
    string arrdept[4];


public:


    Department()
    {
        arrdept[1]="BSCS";
        arrdept[2]="BSIT";
        arrdept[3]="BSAI";
        arrdept[4]="BSSE";

    }
    void deptDeatils( int marks )
    {
        cout<<endl;
        cout<<"\n\t----------------SST DEPARTMENTS-----------------"<<endl;
        cout<<endl<<endl;
        char check,regist;
        if(marks>=550||marks<=650)
        {
            cout<<"Dear Student you are eligible in  ="<<arrdept[2]<<endl;
            Teacher t[10]=
            {
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","1","Programming fundamental"),
                Teacher("Ali",20,'M',"F202072389","Lahore",1234,"STD 405","2","Programming fundamental"),
                Teacher("Faizan",20,'M',"F202072389","Lahore",1234,"STD 405","3","Programming fundamental"),
                Teacher("Shazaib",20,'M',"F202072389","Lahore",1234,"STD 405","4","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","5","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","6","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","7","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","8","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","9","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","10","Programming fundamental")
            };


            cout<<"Do you want to check Available Teacher y/n"<<endl;
            cin>>check;
            if(check=='y')
            {
                cout<<"Dear Student Available Teacher According to Your Department "<<endl;

                for(int i=0; i<10; i++)
                {
                    cout<<t[i];
                    cout<<"======================================"<<endl;
                }
            }
            cout<<"Do you want to Registration in  Available Teacher y/n"<<endl;
            cin>>regist;
            if(regist=='y')
            {
                string select;
                cout<<"Please Select Teacher by ID"<<endl;
                cin>>select;
                for(int i=0; i<10; i++)
                {

                    if(t[i].id==select)
                    {
                        cout<<"Congratulations successfully Register In Course name "<<t[i].get_course() <<"Teacher Name"<<t[i].get_name()<<endl;

                    }
                }
            }

        }
        else if(marks>=650||marks<=750)
        {
            cout<<"Dear Student you are eligible in  ="<<arrdept[4]<<endl;
            Teacher t[]=
            {
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","1","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","2","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","3","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","4","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","5","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","6","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","7","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","8","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","9","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","10","Programming fundamental")
            };
            cout<<"Do you want to check Available Teacher y/n"<<endl;
            cin>>check;
            if(check=='y')
            {
                cout<<"Dear Student Available Teacher According to Your Department"<<endl;
                for(int i=0; i<10; i++)
                {
                    cout<<t[i];
                    cout<<"======================================"<<endl;
                }
            }
            cout<<"Do you want to Registration in  Available Teacher y/n"<<endl;
            cin>>regist;
            if(regist=='y')
            {
                string select;
                cout<<"Please Select Teacher by ID"<<endl;
                cin>>select;
                for(int i=0; i<10; i++)
                {

                    if(t[i].id==select)
                    {
                        cout<<"Congratulations successfully Register In Course name "<<t[i].get_course() <<"Teacher Name"<<t[i].get_name()<<endl;

                    }
                }
            }

        }
        else if(marks>=750||marks<=850)
        {

            cout<<"Dear Student you are eligible in  ="<<arrdept[1]<<endl;
            Teacher t[]=
            {
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","1","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","2","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","3","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","4","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","5","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","6","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","7","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","8","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","9","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","10","Programming fundamental")
            };
            cout<<"Do you want to check Available Teacher y/n"<<endl;
            cin>>check;
            if(check=='y')
            {
                cout<<"Dear Student Available Teacher According to Your Department"<<endl;
                for(int i=0; i<10; i++)
                {
                    cout<<t[i];
                    cout<<"======================================"<<endl;
                }
            }
            cout<<"Do you want to Registration in  Available Teacher y/n"<<endl;
            cin>>regist;
            if(regist=='y')
            {
                string select;
                cout<<"Please Select Teacher by ID"<<endl;
                cin>>select;
                for(int i=0; i<10; i++)
                {

                    if(t[i].id==select)
                    {
                        cout<<"Congratulations successfully Register In Course name "<<t[i].get_course() <<"Teacher Name"<<t[i].get_name()<<endl;

                    }
                }
            }
        }
        else if(marks>=850||marks<=1100)
        {

            cout<<"Dear Student you are eligible in  ="<<arrdept[3]<<endl;
            Teacher t[]=
            {
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","1","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","2","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","3","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","4","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","5","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","6","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","7","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","8","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","9","Programming fundamental"),
                Teacher("Ahmad",20,'M',"F202072389","Lahore",1234,"STD 405","10","Programming fundamental")
            };
            cout<<"Do you want to check Available Teacher y/n"<<endl;
            cin>>check;
            if(check=='y')
            {
                cout<<"Dear Student Available Teacher According to Your Department"<<endl;
                for(int i=0; i<10; i++)
                {
                    cout<<t[i];
                    cout<<"======================================"<<endl;
                }
            }
            cout<<"Do you want to Registration in  Available Teacher y/n"<<endl;
            cin>>regist;
            if(regist=='y')
            {
                string select;
                cout<<"Please Select Teacher by ID"<<endl;
                cin>>select;
                for(int i=0; i<10; i++)
                {

                    if(t[i].id==select)
                    {
                        cout<<"Congratulations successfully Register In Course name "<<t[i].get_course() <<"Teacher Name"<<t[i].get_name()<<endl;

                    }
                }
            }
        }


    }
};



class Student : public Person
{
private:
    int matric_marks;
    int inter_marks;
    int objectCount;
    Department d;


public:

    Student(string name="",int age=0,char gender='M',string email="000",string address="Null",int postal_code=0,int matric_marks=0,int inter_marks=0,int objectCount=0)
        :Person(name,age,gender,email,address,postal_code)
    {
        set_matric_marks(matric_marks);
        set_matric_marks(inter_marks);
        set_object_count(objectCount);

    }
    void set_object_count(int obj)
    {
        objectCount=obj;
    }
    int get_object_count() const
    {
        return objectCount;
    }
    void set_matric_marks(int matric_marks)
    {
        if(matric_marks>0)
        {
            this->matric_marks = matric_marks;
        }
    }
    int get_matric_marks()  const
    {
        return this->matric_marks;
    }
    void set_inter_marks(int inter_marks)
    {
        if(inter_marks>0)
        {
            this->inter_marks = inter_marks;
        }
    }
    int get_inter_marks() const
    {
        return this->inter_marks;
    }
    void eligible()
    {
        d.deptDeatils(get_inter_marks());
    }
    void Display_Student()
    {
        cout<<"================================================="<<endl;
        display();
        cout<<" Matriculation Marks       "<<get_matric_marks()<<endl;
        cout<<" Inter Marks               "<<get_inter_marks()<<endl;
        cout<<"================================================="<<endl;

    }

};

const int sizee=2;
Student   s[sizee];  // Goble array of object
int main()
{
    system("color 1f"); // color change
    int counter=1;
    string name;
    int age;
    char gender;
    string email;
    string address;
    int postal_code;
    int matric_marks;
    int inter_marks;
    char yes;
    cout<<"\n\t------------------------------------------------------------"<<endl;
    cout<<"\n\t------------------------------------------------------------"<<endl;
    cout<<"\n\t----------------Admission Management System-----------------"<<endl;
    cout<<"\n\t------------------------------------------------------------"<<endl;
    cout<<"\n\t------------------------------------------------------------"<<endl;
    cout<<"Please Enter Two Students Information "<<endl;
    for(int i=0; i<sizee; i++)
    {
        cout << "Enter a Student Name: "<<endl;
        cin>>name;
        s[i].set_name(name);
        cout << "Enter a Student Age: "<<endl;
        cin>>age;
        s[i].set_age(age);
        cout << "Enter a Student email: "<<endl;
        cin>>email;
        s[i].set_email(email);
        cout << "Enter a Student address: "<<endl;
        cin>>address;
        s[i].set_address(address);
        cout << "Enter a Student postal_code: "<<endl;
        cin>>postal_code;
        s[i].set_postal_code(postal_code);
        cout << "Enter a Student Matriculation marks: "<<endl;
        cin>>matric_marks;
        s[i].set_matric_marks(matric_marks);
        cout << "Enter a Student Inter marks: "<<endl;
        cin>>inter_marks;
        s[i].set_inter_marks(inter_marks);
        cout<<endl;
        cout<<endl;
        cout<<"Your Are successfully Register with admission id  = "<<counter++<<endl;
        s[i].set_object_count(counter);
        cout<<endl;
        cout<<endl;
    }

    do
    {
        cout<<"\n\t========================================================================"<<endl;
        cout<<"\n\t=========================Main Menu======================================"<<endl;
        cout<<"\n\t=========Please select the number which you want Get Information========"<<endl;
        cout<<"\n\t======== 1 ) for get All student information ==========================="<<endl;
        cout<<"\n\t======== 2 ) for get Specific student information ======================"<<endl;
        cout<<"\n\t======== 3 ) for get ELIGIBLE student information ======================"<<endl;
        cout<<"\n\t======== 4 ) for exit program =========================================="<<endl;
        cout<<"\n\t========================================================================"<<endl;
        int select;
        cin>>select;


        if(select==1)
        {
            cout<<"\n\t------------------------------------------------------------"<<endl;
            cout<<"\n\t---------------- All Students Information-----------------"<<endl;
            cout<<"\n\t------------------------------------------------------------"<<endl;
            for(int i=0; i<sizee; i++)
            {

                s[i].Display_Student();
            }
        }




        if(select==2)
        {
            cout<<"\n\t------------------------------------------------------------"<<endl;
            cout<<"\n\t----------------  Specific Student Information-----------------"<<endl;
            cout<<"\n\t------------------------------------------------------------"<<endl;
            cout<<"Enter the admission id of student"<<endl;
            int admission_id;
            cin>>admission_id;
            for(int i=0; i<sizee; i++)
            {
                if(s[i].get_object_count()==admission_id)
                {
                    s[i].Display_Student();
                }


            }
        }

        if(select==3)
        {
            cout<<"\n\t------------------------------------------------------------"<<endl;
            cout<<"\n\t---------------- ELIGIBLE DEPARTMENT-----------------"<<endl;
            cout<<"\n\t------------------------------------------------------------"<<endl;

            cout<<"Enter the admission id of student"<<endl;
            int admis_id;
            cin>>admis_id;
            for(int i=0; i<sizee; i++)
            {
                if(s[i].get_object_count()==admis_id)
                {
                    s[i].eligible();
                }


            }
        }

        if(select==4)
        {
            exit(0);
        }
        cout<<"Do you want to run again y/n"<<endl;
        cin>> yes;

    }
    while(yes=='y');
    return 0;
}
