#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
int i=0;
struct Employee
{
	int id;
	string name, address, phone, department;
	float salary;
}E[25];
void insert ()//insert new employe record
{
	system("cls");
	cout<<"\n\n INSERT EMPLOYEE RECORD";
	cout<<"\n\n ENTER EMOLOYEE ID ->";	
	cin>>E[i].id;
	cout<<"\n\nENTER EMPLOYEE NAME ->";
	cin.ignore();//to clean compile 
	getline(cin,E[i].name);
	cout<<"\n\nENTER EMPLOYEE ADDRESS ->";
	cin.ignore();
	getline(cin,E[i].address);
	cout<<"\n\nENTER EMPLOYEE PHONE ->";
	getline(cin,E[i].phone);
	cout<<"\n\nENTER EMPLOYEE DEPARTMENT ->";
	cin.ignore();
	getline(cin,E[i].department);
	cout<<"\n\nENTER EMPLOYEE SALARY ->";
	cin>>E[i].salary;
	i++;
		cout<<"\n\nLOADING";
			for(int i=0; i<8; i++)
			{
				cout<<".";
				Sleep(1000);
			
			}
	cout<<"\n\nEMPLOYEE RECORD INSERTED****";
}
void search ()
{
	system("cls");
	cout<<"\n\n EMPLOYEE MANAGEMENT SYSTEM";
	if(i==0)
	{
		cout<<"\n\nDATA BASE IS EMPTY";
	}
	else
	{
		int t_id,found =0;
		cout<<"\n\nENTER EMPLOYEE ID FOR SEARCH ->";
		cin>>t_id;
		cout<<"\n\nPLEASE WAIT";
			for(int i=0; i<8; i++)
			{
				cout<<".";
				Sleep(1000);
			
			}
		for(int a=0; a<i;a++)
		{
			if(t_id==E[a].id)
			{
				cout<<"\n\nEMPLOYEE NAME -> "<<E[a].name;
				cout<<"\n\nEMPLOYEE ADDRESS ->"<<E[a].address;
				cout<<"\n\nEMPLOYEE PHONE NO ->"<<E[a].phone;
				cout<<"\n\nEMPLOYEE DEPARTMENT ->"<<E[a].department;
				cout<<"\n\nEMPLOYEE SALARY ->"<<E[a].salary;
				found++;
					
			}
		}
		if(found ==0)
		{
			cout<<"\n\n PLEASE WAIT WE ARE SEARCHING";
			for(int i=0; i<8; i++)
			{
				cout<<".";
				Sleep(1000);
			
			}
				cout<<"\n\nSORRY EMPLOYEE ID NOT FOUND...!";
		}
	}
}
void del ()
{
	system("cls");
	cout<<"\n\n EMPLOYEE MANAGEMENT SYSTEM";
	if(i==0)
	{
		cout<<"\n\nDATA BASE IS EMPTY";
	}
	else
	{
		int t_id,found =0;
		cout<<"\n\nENTER EMPLOYEE ID FOR DELETE ->";
		cin>>t_id;
		cout<<"\n\nPLEASE WAIT";
			for(int i=0; i<8; i++)
			{
				cout<<".";
				Sleep(1000);
			
			}
		for(int a=0; a<i;a++)
		{
			if(t_id==E[a].id)
			{
				for(int k=a;k<i-1;k++)
				{
					E[k].id=E[k+1].id;
					E[k].name=E[k+1].name;
					E[k].address=E[k+1].address;
					E[k].phone=E[k+1].phone;
					E[k].department=E[k+1].department;
					E[k].salary=E[k+1].salary;
				}
				i--;
				
				cout<<"\n\nRECORD DELETE SUCCESSFULLY...!";
				
				found++;
				break;
			}
		}
		if(found ==0)
		{
			cout<<"\n\n PLEASE WAIT WE ARE SEARCHING";
			for(int i=0; i<8; i++)
			{
				cout<<".";
				Sleep(1000);
			
			}
				cout<<"\n\nSORRY EMPLOYEE ID NOT FOUND...!";
		}
	}
}
void update ()
{
	system("cls");
	cout<<"\n\n EMPLOYEE MANAGEMENT SYSTEM";
	if(i==0)
	{
		cout<<"\n\nDATA BASE IS EMPTY";
	}
	else
	{
		int t_id,found =0;
		cout<<"\n\nENTER EMPLOYEE ID FOR update ->";
		cin>>t_id;
		cout<<"\n\nPLEASE WAIT";
			for(int i=0; i<8; i++)
			{
				cout<<".";
				Sleep(1000);
			
			}
		for(int a=0; a<i;a++)
		{
			if(t_id==E[a].id)
			{
				cout<<"\n\nENTER EMPLOYEE NAME -> ";
				cin.ignore();
				getline(cin,E[a].name);
				cout<<"\n\nENTER EMPLOYEE ADDRESS ->";
				cin.ignore();
				getline(cin,E[a].address);
				cout<<"\n\nENTER EMPLOYEE PHONE NO ->";
				cin>>E[a].phone;
				cout<<"\n\nENTERE MPLOYEE DEPARTMENT ->";
				cin.ignore();
				getline(cin, E[a].department);
				cout<<"\n\nENTER EMPLOYEE SALARY ->";
				cin>>E[a].salary;
				cout<<"\n\nRECORD UPDATE SUCCESSFULLY...!";
				
				found++;
			}
		}
		if(found ==0)
		{
			cout<<"\n\n PLEASE WAIT WE ARE SEARCHING";
			for(int i=0; i<8; i++)
			{
				cout<<".";
				Sleep(1000);
			
			}
				cout<<"\n\nSORRY EMPLOYEE ID NOT FOUND...!";
		}
	}
}
void show ()
{
	system("cls");
	cout<<"\n\n EMPLOYEE MANAGEMENT SYSTEM";
	if(i==0)
	{
		cout<<"\n\nDATA BASE IS EMPTY";
	}
	else
	{
		for(int a=0; a<i;a++)
		{
		    cout<<"\n\nEMPLOYEE ID ->"<<E[a].id;
			cout<<"\n\nEMPLOYEE NAME -> "<<E[a].name;
			cout<<"\n\nEMPLOYEE ADDRESS ->"<<E[a].address;
			cout<<"\n\nEMPLOYEE PHONE NO ->"<<E[a].phone;
			cout<<"\n\nEMPLOYEE DEPARTMENT ->"<<E[a].department;
			cout<<"\n\nEMPLOYEE SALARY ->"<<E[a].salary;
			cout<<"\n\n--------------------------------------------------";
			
		}
	
	}
}

	
int main()
{
   //Habibullah........
   p:
   	system("cls");
   int choice;
   cout<<"\n\nEMPLOYEE MANAGEMENT SYSTEM";
   cout<<"\n\n 1-INSERT EMPLOYEE";
   cout<<"\n\n 2-SEARCH EMPLOYEE";
   cout<<"\n\n 3-UPDATE EMPLOYEE";
   cout<<"\n\n 4-DELETE EMPLOYEE";
   cout<<"\n\n 5-SHOW ALL EMPLOYEE";
   cout<<"\n\n 6-EXIT";
   cout<<"\n\n ENTER YOUR CHOICE ->";
   cin>>choice;
   switch(choice)
   {
   	case 1:
   		insert();
   	   	 break;
   	case 2:
   		search();
	     break;
	case 3:
		update();
	     break;
	case 4:
		del();
	     break;
	case 5:
		show();
	     break;
	case 6:
	     exit(0);
	default:
	     cout<<"\n\nINVALID OPTION ...PLEASE TRY AGAIN";	 	 		   
	   	
   }
   getch();
   goto p;
   
}
