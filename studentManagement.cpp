#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdlib.h>
#include<conio.h>
using namespace std;
struct Student
{
	string name;
	int rollNo;
	float cgpa;
	char cnic[13];
};
void addStudent()
{
	int n;
	cout<<"\n\t how many student so you want to add ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"\nenter the detail of "<<i<<" student"<<endl;
		ofstream fout;
		Student student;
		cout<<"\n Enter Student name : ";
		cin>>student.name;
		cout<<"\n Enter Student roll No : ";
		cin>>student.rollNo;
		cout<<"\n Enter Student cgpa : ";
		cin>>student.cgpa;
		cout<<"\n Enter Student cnic : ";
		cin>>student.cnic;
		fout.open("student.txt",ios::app);
		fout<<endl<<student.name<<'\t'<<student.rollNo<<'\t'<<student.cgpa<<'\t'<<student.cnic;
	}
}
void showAll()
{
	ifstream fin;
	Student student;
	fin.open("student.txt");
	cout<<endl<<"name"<<'\t'<<"Roll"<<'\t'<<"cgpa"<<'\t'<<"cnic";
	while(fin>>student.name>>student.rollNo>>student.cgpa>>student.cnic)
	{
		cout<<endl<<student.name<<'\t'<<student.rollNo<<'\t'<<student.cgpa<<'\t'<<student.cnic;
	}
}  
void searchStudent()
{
	int roll;
	bool found=false;
	cout<<"\n\tenter the rollno of student which you want to search";
	cin>>roll;
	ifstream fin;
	Student student;
	fin.open("student.txt");
	while(fin>>student.name>>student.rollNo>>student.cgpa>>student.cnic){
		if(student.rollNo==roll)
		{
			cout<<"\n the record if found! ";
			cout<<endl<<"name"<<'\t'<<"Roll"<<'\t'<<"cgpa"<<'\t'<<"cnic";
			cout<<endl<<student.name<<'\t'<<student.rollNo<<'\t'<<student.cgpa<<'\t'<<student.cnic;
			found=true;
			return;
		}
	}
		if(found==false)
		{
			cout<<"\n"<<roll<<" not found in the record!";
		}
}
void deleteStudent()
{
	ifstream fin;
	ofstream fout;
	int roll;
	bool found=false;
	cout<<"\n\tenter the rollno of student which you want to delete! ";
	cin>>roll;
	Student student;
	fout.open("temp.txt",ios::app);
	fin.open("student.txt");
	while(fin>>student.name>>student.rollNo>>student.cgpa>>student.cnic)
	{
		if(student.rollNo==roll)
		{
			cout<<"\n the name of the student to be deleted! ";
			cout<<endl<<"name"<<'\t'<<"Roll"<<'\t'<<"cgpa"<<'\t'<<"cnic";
			cout<<endl<<student.name<<'\t'<<student.rollNo<<'\t'<<student.cgpa<<'\t'<<student.cnic;
			found=true;
		}
		else
		{
			fout<<endl<<student.name<<'\t'<<student.rollNo<<'\t'<<student.cgpa<<'\t'<<student.cnic;
		}
	}
	fin.close();
	fout.close();
	remove("student.txt");
	rename("temp.text","student.txt");
	if(found==false)
	{
		cout<<"\n"<<roll<<" not found in the record!";
	}
}
void modifyStudent()
{
	ifstream fin;
	ofstream fout;
	int roll;
	bool found=false;
	cout<<"\n\tenter the name of student which you want to modify! ";
	cin>>roll;
	Student student;
	fout.open("temp1.txt",ios::app);
	fin.open("student.txt");
	while(fin>>student.name>>student.rollNo>>student.cgpa>>student.cnic)
	{
		if(student.rollNo==roll)
		{
			cout<<"\n the name of the student to be modified ";
			cout<<endl<<"name"<<'\t'<<"Roll"<<'\t'<<"cgpa"<<'\t'<<"cnic";
			cout<<endl<<student.name<<'\t'<<student.rollNo<<'\t'<<student.cgpa<<'\t'<<student.cnic;
			cout<<"\n Enter new record!";
			Student student;
			cout<<"\n Enter Student name : ";
			cin>>student.name;
			cout<<"\n Enter Student roll No : ";
			cin>>student.rollNo;
			cout<<"\n Enter Student cgpa : ";
			cin>>student.cgpa;
			cout<<"\n Enter Student cnic : ";
			cin>>student.cnic;
			cout<<"\n\t\t\t new record is";
			cout<<endl<<"name"<<'\t'<<"Roll"<<'\t'<<"cgpa"<<'\t'<<"cnic";
			cout<<endl<<student.name<<'\t'<<student.rollNo<<'\t'<<student.cgpa<<'\t'<<student.cnic;
			fout<<endl<<student.name<<'\t'<<student.rollNo<<'\t'<<student.cgpa<<'\t'<<student.cnic;
			found=true;
		}
		else
		{
			fout<<endl<<student.name<<'\t'<<student.rollNo<<'\t'<<student.cgpa<<'\t'<<student.cnic;
		}
	}
	fin.close();
	fout.close();
	remove("student.txt");
	rename("temp1.txt","student.txt");
	if(found==false)
	{
		cout<<"\n"<<roll<<" not found in the record!";
	}
}
int main()
{
	char choic;
	do
	{
		cout<<"\n\t1- Add student";
		cout<<"\n\t2-search  student";
		cout<<"\n\t3- delete student";
		cout<<"\n\t4- show all student";
		cout<<"\n\t5- modify student ";
		cout<<"\n\tn/N- Exit";
		choic=getche();
		switch(choic)
		{
			case '1':
				addStudent();
				break;
			case '2':
				searchStudent();
				break;
			case '3':
				deleteStudent();
				break;
			case '4':
				showAll();
				break;
			case '5':
				modifyStudent();
				break;
			default:
				cout<<"\a\n invalid input";
		}
	}while(choic!='n'||choic!='N');
}
