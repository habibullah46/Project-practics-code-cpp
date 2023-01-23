#include<iostream>
//#include<conio.h>
using namespace std; 
struct Book
{
    int Book_id;
    char Book_name[50];
    int Book_price;
   
    };
struct Order
{ 
   int order_id;
   int Book_Page;
   Book b;
};
int main()
{
    Order c;
    Book b;
    cout<<"\t\t\t\tWell come...\n";
    cout<<"enter number of books :";
    int number_of_Book;
    cin>>number_of_Book;
    cout<<"Enter details of "<<number_of_Book<<" books: \n";
    cout<<"Enter your Order Id: ";
    cin>>c.order_id;
   
    for(int i=0;i<number_of_Book;i++)
{
	cout<<"\n\n\t\t\t\tEnter "<<i+1<<" Book details:";
    cout<<"\nEnter Book Id: ";
    cin>>c.b.Book_id;
    cout<<"Enter Book Name: ";
    cin>>c.b.Book_name;
    cout<<"Enter the page of book";
    cin>>c.Book_Page;
    cout<< "Enter Price of the Book: ";
    cin>>c.b.Book_price;
 }
    cout<<"\n Order details is as follows: "<<endl;
    cout<<" Order Id: "<<c.order_id<<endl;
    cout<<" Book Id\tBook Name\tB_Page\t\tPrice "<<endl;
    
    for(int i=0;i<number_of_Book;i++)
{
    cout<<c.b.Book_id<<"\t\t"<<c.b.Book_name<<"\t\t"<<c.Book_Page<<"  \t\t"<<c.b.Book_price<<endl;
}
   
}
