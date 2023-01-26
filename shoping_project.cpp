#include<iostream>
#include<conio.h>
using namespace std;
int ascii =178;
char ch = ascii;
void load()
{
   
	 for(int i=1; i<8; i++)
     cout<<ch;
}
int main()
{
	p:
		system("cls");
	int choice;
   //Habibullah........
   cout<<"\n\n";
       load();
   cout<<"\tBOOK SHOP PROJECT IN C++ ";
       load();
       cout<<"\n\n"<<ch<<ch<<"1.INSERT BOOK";
       cout<<"\n\n"<<ch<<ch<<"1.SEARCH BOOK";
       cout<<"\n\n"<<ch<<ch<<"1.UPDATE BOOK";
       cout<<"\n\n"<<ch<<ch<<"1.DELETE BOOK";
       cout<<"\n\n"<<ch<<ch<<"1.SHOWALL BOOK";
       cout<<"\n\n"<<ch<<ch<<"1.EXIT\n\n";
       load();
       cout<<"\n\n"<<ch<<ch<<"ENTER YOUR CHOICE ->";
       cin>>choice;
       switch(choice)
       {
       	 case 1:
       	 	break;
       	case 2:
       		break;
       	case 3:
		   break;
		case 4:
		    break;
		case 5:
		    break;
		case 6:
		     exit(0);
		default:
		    cout<<"\n\n"<<ch<<ch<<"PLEASE SELECT CORRECT OPTION"<<ch<<ch;
			   	
	   }
   	getch();
   	goto p;
}
