#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
void line()
{
	cout<<"=============================================================="<<endl;
}
class Bank
{
	private:
		int total;
		string id;
		struct person
		{
			char  *name[100]; 
			string ID[50]; 
			char *address[100];
			int contact[20];
			int cash;
		}person[100];
		public:
			Bank() //constactor of class
			{
				total  =0;
				
			}
			void choice();
			void perData();
			void show();
			void update();
			void search();
			void transactions();
			void del();
};
int main()
{
   //Habibullah........
   Bank b;
   b.choice();
   b.perData();
   b.show();
   b.update();
   b.search();
   b.transactions();
   b.del();
}
void Bank::choice()
{
	char ch;
	while(1)
	{
	cout<<"\n\nPress ..!!"<<endl;
	cout<<"1.Create new accont"<<endl;
	cout<<"2.View customers list "<<endl;
	cout<<"3.Update information of an existing account"<<endl;
	cout<<"4.Check the details of an existing account"<<endl;
	cout<<"6.For transactions "<<endl;
	cout<<"6.Remove existing account "<<endl;
	cout<<"7.Exit"<<endl;
	line();
	ch=getch();
	switch(ch)
	{
		case '1':
			Bank::perData();
			break;
		case '2':
		    Bank::show();
			break;	
	   case '3':
	     	Bank::update();
	    	break;
	   	case '4':
	   		Bank::search();
	   		break;
	   	case '5':
	   		Bank::transactions();
	   		break;
	   	case '6':
	   		Bank::perData();
	   		break;
			
		
	}
	}
	
}
void Bank::perData()
{
	cout<<"Enter data of person"<<total+1<<endl;
	cout<<"Enter Name: ";
	gets(person[total].name[100]);
	cout<<"ID: ";
	cin>>person[total].ID[50];
	cout<<"Address: ";
	gets(person[total].address[100]);
	cout<<"Contact: ";
	cin>>person[total].contact[20];
	cout<<"Total Cash: ";
	cin>>person[total].cash;
	total++;
	line();
}
void Bank::show()
{
	for(int i=0; i<total; i++)
	{
		cout<<"\t\tView customer list \n\n";
		cout<<"\t\t------------------------"<<endl;
		cout<<"Data of person: "<<i+1<<endl;
		cout<<"Name: "<<person[i].name<<endl;
		cout<<"ID: "<<person[i].ID<<endl;
		cout<<"Address: "<<person[i].address<<endl;
		cout<<"Contact: "<<person[i].contact<<endl;
		cout<<"Cash: "<<person[i].cash<<endl;
		line();
	}
}
void Bank::update()
{
	cout<<"Enter id of student those data you want ot update:";
	cin>>id;
	for(int i=0; i<total;i++)
	{
		if(id==person[i].ID[50])
		{
			cout<<"Previous Data"<<endl;
			cout<<"Data of person: "<<i+1<<endl;
	    	cout<<"Name: "<<person[i].name<<endl;
		    cout<<"ID: "<<person[i].ID<<endl;
		    cout<<"Address: "<<person[i].address<<endl;
		    cout<<"Contact: "<<person[i].contact<<endl;
		    cout<<"Cash: "<<person[i].cash<<endl;
		    cout<<"\n\nEnter new Data"<<endl;
		    	cout<<"Data of person: "<<i+1<<endl;
		cout<<"Name: "<<person[i].name<<endl;
		cout<<"ID: "<<person[i].ID<<endl;
		cout<<"Address: "<<person[i].address<<endl;
		cout<<"Contact: "<<person[i].contact<<endl;
		cout<<"Cash: "<<person[i].cash<<endl;
			break;
		}
			if(i==total-1)
		{
			cout<<"No suc record found"<<endl;
		}
	}
	
}
void Bank::search()
{
	cout<<"Enter id of student those data you want to search"<<endl;
	cin>>id;
	for(int i=0; i<total; i++)
	{
		if(id==person[i].ID[50])
		{
		cout<<"Name: "<<person[i].name<<endl;
		cout<<"ID: "<<person[i].ID<<endl;
		cout<<"Address: "<<person[i].address<<endl;
		cout<<"Contact: "<<person[i].contact<<endl;
		cout<<"Cash: "<<person[i].cash<<endl;
		break;
		}
			if(i==total-1)
		{
			cout<<"No suc record found"<<endl;
		}
		
	}
}
void Bank::transactions()
{
	char ch;
	
	int cash;
	cout<<"Enter id of Student those data you want to transacttion"<<endl;
	cin>>id;
	for(int i =0; i<total; i++)
	{
		if(id==person[i].ID[50])
		{
			cout<<"Name: "<<person[i].name<<endl;
			cout<<"ADdress: "<<person[i].address<<endl;
			cout<<"Contact: "<<person[i].contact<<endl;
			cout<<"\nExisting Cash "<<person[i].cash<<endl;
			cout<<"Press 1 to deposit"<<endl;
			cout<<"Press 2 to withdraw"<<endl;
			ch=getch();
			switch(ch)
			{
				case '1':
					cout<<"how much cash you want ot deposit: "<<endl;
					cin>>cash;
					person[i].cash=+cash;
					cout<<"Your new cash is "<<person[i].cash<<endl;
					break;
					
					case '2':
						back:
						cout<<"How much cash u wnat to withdraw??"<<endl;
						if(cash>person[i].cash)
						{
							cout<<"Your existing cash is just "<<person[i].cash<<endl;
							Sleep(3000);
							goto back;
						}
						person[i].cash-=cash;
							cout<<"Your new cash is "<<person[i].cash<<endl; 
							break;
							default:
								cout<<"Invalid input "<<endl;
								break;
								 
			}
			break;
		}
		if(i==total-1)
		{
			cout<<"No suc record found"<<endl;
		}
	}
}
void Bank::del()
{	int k =0;
	char ch;
	cout<<"Press 1 to remove specific record"<<endl;
	cout<<"Press 2 to remove full record"<<endl;
	ch=getch();
	switch (ch)
	{
		case '1':
		cout<<"Enter  id of student those data you want to delete"<<endl;
		cin>>id;
	
		for( k =0; k<total; k++)
		{
			if(id==person[k].ID[50])
			{
				for(int j=k; j<total; j++)
				{
				
				person [k].name[100]=person[k+1].name[100];
				person[k].ID[50]=person[k+1].ID[50];
				person[k].address[100]=person[k+1].address[100];
				person[k].contact[20]=person[k+1].contact[20];
				person[k].cash=person[k+1].cash;
				total--;
				break;
			}
				if(k==total-1)
		{
			cout<<"No such record found"<<endl;
		}
		}
		}
		break;
		 
		
	 case  '2':
			total =1;
			cout<<"All Record is deleted"<<endl;
			break;
			default:
				cout<<"Invalid input"<<endl;
				break;
	}}








