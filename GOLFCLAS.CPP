#include<iostream.h>
#include<conio.h>


class GOLF
{

public :

int club;       //instance variable to store current number of golf clubs.
int price;        //instance variable to store Price Per Golf.



int choice;   //variable for Choice.
    char name[20];

GOLF()
{
 club=price=0;  //Default Constructor.
}


GOLF(int x)       //Parametrized Constructor to take price as Input.
{
price=x;

}

int add_Golf_Clubs(int a)
{

 club=club+a;
 return club;
}

int remove_Golf_Clubs(int a)
{
  club=club-a;
  return club;
}

void view_order()
{ cout<<endl;
   cout<<"********************************************************"<<endl;
cout<<"The Number Of Golf Clubs in the order is ="<<club<<endl;
cout<<endl;
cout<<"Price Per Golf Club is ="<<price<<endl;
cout<<endl;
cout<<"Total Cost of the order ="<<club*price<<endl;
cout<<endl;

 }

void checkout()
  {
   cout<<"********************************************************"<<endl;
cout<<"                       ORDER DETAILS"<<endl;
cout<<endl;
cout<<"Number Of Golf clubs in your order are ="<<club<<endl;
cout<<endl;
cout<<"Price Per Golf Club is ="<<price<<endl;
cout<<endl;
cout<<"Total Cost Of The Order is ="<<club*price<<endl;
cout<<endl;
cout<<"          THANKYOU  "<<name<<" For Ordering "<<endl;
   cout<<"********************************************************"<<endl;
  }
};


void main()
{
int choice,m,n;
GOLF a(4000);

clrscr();
cout<<" #. Your Name =";
cin.get(a.name,50);
cout<<endl;
cout<<endl;
do
  {

cout<<" 1. Add Golf Club To Order"<<endl;
cout<<endl;
cout<<" 2. Remove Golf Cubs From Order"<<endl;
cout<<endl;
cout<<" 3. View Curent Order"<<endl;
cout<<endl;
cout<<" 4. Checkout"<<endl;
cout<<endl;
cout<<" 5. EXIT"<<endl;
cout<<endl;
cout<<" #. Please Enter Yor Choice =";
cin>>choice;
cout<<endl;

if(choice==1)
 {
cout<<" You have " <<a.club<<" golf club."<<endl;
cout<<endl;
cout<<"#. How many to add ? =";
cin>>m;
a.add_Golf_Clubs(m);
cout<<endl;

cout<<"                      You Have "<<a.club<<" clubs"<<endl;

cout<<endl;
cout<<"Press Any Key To Next"<<endl;
getch();
 }
  else if(choice==2)
   {

cout<<endl;
cout<<"   You have " <<a.club<<" golf clubs."<<endl;
cout<<endl;
cout<<"#.  How many to remove ? =";
cin>>n;
a.remove_Golf_Clubs(n);
cout<<endl;
cout<<"                    You Have "<<a.club<<" clubs"<<endl;
cout<<endl;
cout<<"Press Any Key To Next"<<endl;
getch();
   }
    else if(choice==3)
     {

a.view_order();
cout<<"Press Any Key To Next"<<endl;
getch();
     }
      else if(choice==4)
       {
	a.checkout();
	cout<<"Press Any Key To Next"<<endl;
	getch();
       }
       else
	{

	}

}while(choice!=5);
}


