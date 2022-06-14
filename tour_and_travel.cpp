#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void about_us();
void ticket_booking();
void hotel_booking();
void scheme();
void intro();
void national();
void international();
void ticket_confirm();
void train(int p,int k);
void flight(int p,int k);
int ch;
char c;
int main()
{
    intro();
    return 0;
    getch();
}
void intro()
{
    cout<<endl<<endl<<"SRIRAM TOUR AND TRAVEL MANAGEMENT";
    cout<<endl<<"***********************************************";
    cout<<endl<<endl<<"1. ABOUT US";
    cout<<endl<<endl<<"2. TICKET BOOKING";
    cout<<endl<<endl<<"3. QUIT";
    cout<<endl<<endl<<"ENTER YOUR CHOICE......";
    cin>>ch;
    switch(ch)
    {
        case 1:about_us();break;
        case 2:ticket_booking();break;
        case 3:_Exit(0);break;
        default:cout<<"INVALID CHOICE.......";
    }
    getch();
}
void about_us()
{
    cout<<endl<<endl<<"SRIRAM TOUR AND TRAVEL MANAGEMENT";
    cout<<endl<<"***********************************************";
    cout<<endl<<endl<<"_____ABOUT US____";
    cout<<endl<<endl<<"Sriram tour and travel is one of the topmost travel companies of India";
    cout<<endl<<"and is a trusted name in the Indian travel industry. It is also known for";
    cout<<endl<<"providing the best travel deals to travelers. Being a strong network of 59,000 travel agents";
    cout<<endl<<"(as of November 20, 2021) and having more than 11 million direct customers, EaseMyTrip can ";
    cout<<endl<<"satisfy all your travel needs. Here, You can book flight tickets, hotels, bus tickets, and ";
    cout<<endl<<"holiday packages at a cost-effective price.";
    cout<<endl<<endl<<"1.BACK TO MAIN PAGE";
    cout<<endl<<"Press 1......";
    cin>>ch;
    switch(ch)
    {
        case 1:intro();break;
        default:cout<<"INVALID CHOICE.......";
    }
    getch();
}
void ticket_booking()
{
    cout<<endl<<endl<<"SRIRAM TOUR AND TRAVEL MANAGEMENT";
    cout<<endl<<"***********************************************";
    cout<<endl<<endl<<"1. NATIONAL";
    cout<<endl<<"2. INTERNATIONAL";
    cout<<endl<<"3. QUIT";
    cout<<endl<<endl<<"ENTER YOUR CHOICE.....";
    cin>>ch;
    switch(ch)
    {
        case 1:national();break;
        case 2:international();break;
        case 3:_Exit(0);break;
        default:cout<<"INVALID CHOICE.......";
    }
    getch();
}
void national()
{
    int ch;
    cout<<endl<<endl<<"SRIRAM TOUR AND TRAVEL MANAGEMENT";
    cout<<endl<<"***********************************************";
    cout<<endl<<endl<<"1. RAJASTHAN";
    cout<<endl<<"2. GUJARAT";
    cout<<endl<<"3. GOA";
    cout<<endl<<endl<<"ARE YOU INTERESTED IN BOOKING FOR THIS TOUR ? PRESS (y) THEN PRESS (n)";
    c=getche();
    if(c=='y')
    ticket_confirm();
    if(c=='n');
    intro();
}
void international()
{
    int ch;
    cout<<endl<<endl<<"SRIRAM TOUR AND TRAVEL MANAGEMENT";
    cout<<endl<<"***********************************************";
    cout<<endl<<endl<<"1. DUBAI";
    cout<<endl<<"2. SWITZERLAND";
    cout<<endl<<"3. MALDIVES";
    cout<<endl<<endl<<"ARE YOU INTERESTED IN BOOKING FOR THIS TOUR ? PRESS (y) THEN PRESS (n)";
    c=getche();
    if(c=='y')
    ticket_confirm();
    if(c=='n');
    intro();
}
void ticket_confirm()
{
    char location[50];
    int old_n,adult_n,child,total,chh;
    cout<<endl<<endl<<"SRIRAM TOUR AND TRAVEL MANAGEMENT";
    cout<<endl<<"***********************************************";
    cout<<endl<<endl<<"PLEASE ENTER THE LOCATION......";
    gets(location);
    cout<<endl<<"ENTER NUMBER OF OLD AGE PERSON......";
    cin>>old_n;
    cout<<endl<<"ENTER NUMBER OF ADULT PERSON....";
    cin>>adult_n;
    cout<<endl<<"ENTER NUMBER OF CHILDREN....";
    cin>>child;
    total=old_n+adult_n+child;
    cout<<endl<<endl<<"SRIRAM TOUR AND TRAVEL MANAGEMENT";
    cout<<endl<<"***********************************************";
    cout<<endl<<endl<<"TOTAL TICKETS"<<total;
    cout<<endl<<endl<<"1. TRAIN";
    cout<<endl<<"2. FLIGHT";
    cout<<endl<<"3. BACK TO MAIN PAGE";
    cout<<endl<<"4. QUIT";
    cout<<endl<<endl<<"ENTER CHOICE FOR TRAVELLERS TRAIN OR FLIGHT....";
    cin>>ch;
    switch(ch)
    {
        case 1:train(old_n+adult_n,child);break;
        case 2:flight(old_n+adult_n,child);break;
        case 3:intro();break;
        case 4:_Exit(0);
        default:cout<<"INVALID CHOICE.......";
    }
    getch();
}
void train(int p,int k)
{
    char c;
    char dat[20];
    cout<<endl<<endl<<"SRIRAM TOUR AND TRAVEL MANAGEMENT";
    cout<<endl<<"***********************************************";
    cout<<endl<<endl<<"RS 600 FOR OLD AGE AND ADULT PERSON";
    cout<<endl<<"RS 300 FOR CHILDREN";
    cout<<endl<<endl<<"TOTAL AMOUNT FOR TICKET IS:-"<<(600*p)+(300*k);
    cout<<endl<<endl<<"ARE YOU INTERESTED FOR BOOKING PRESS (y)";
    c=getche();
    cout<<endl<<endl<<"ENTER THE DAY AND DATE......";
    cin>>dat;
    if(c=='y')
    {
        cout<<endl<<endl<<"SRIRAM TOUR AND TRAVEL MANAGEMENT";
        cout<<endl<<"***********************************************";
        cout<<endl<<endl<<"YOUR TICKET IS BOOKED....";
        cout<<endl<<"FOR THIS DAY AND DATE....."<<dat;
        cout<<endl<<"THANK YOU";
        getch();
        intro();
    }
    else
    {
        intro();
    }
}
void flight(int p,int k)
{
    char c;
    char dat[20];
    cout<<endl<<endl<<"SRIRAM TOUR AND TRAVEL MANAGEMENT";
    cout<<endl<<"***********************************************";
    cout<<endl<<endl<<"RS 5500 FOR OLD AGE AND ADULT PERSON";
    cout<<endl<<"RS 3200 FOR CHILDREN";
    cout<<endl<<endl<<"TOTAL AMOUNT FOR TICKET IS:-"<<(5500*p)+(3200*k);
    cout<<endl<<endl<<"ARE YOU INTERESTED FOR BOOKING PRESS (y)";
    c=getche();
    cout<<endl<<endl<<"ENTER THE DAY AND DATE......";
    cin>>dat;
    if(c=='y')
    {
        cout<<endl<<endl<<"SRIRAM TOUR AND TRAVEL MANAGEMENT";
        cout<<endl<<"***********************************************";
        cout<<endl<<endl<<"YOUR TICKET IS BOOKED....";
        cout<<endl<<"FOR THIS DAY AND DATE....."<<dat;
        cout<<endl<<"YOUR TICKET IS BOOKED AND CHECK IN TIME 2HRS EARLIER FOR THE FLIGHT";
        cout<<endl<<"THANK YOU";
        getch();
        intro();
    }
    else
    {
        intro();
    }
}
