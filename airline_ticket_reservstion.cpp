#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
#include<windows.h>
#include<dos.h>
#include<conio.h>
using namespace std;

int n,i,priceAdult,priceKid,priceBusiness,d1,ticket,choice1,age1,age2,age3,age4,seat1,seat2,seat3,seat4,price,chseat1,cup;
char name1[10],n1[15],name[10],dest[20],passenger2[20],passenger3[20],passenger4[20],passenger1[20];
int Adult,Business,vstype,destination,tick,vdate1[10],vdate2[10],date1,month1,year1,date2,month2,year2,choise2,choise3,chseat2,esttime,esttime2;
char pass1[20],pass2[20],nationality[5],nationality2[5],visa1[10],visa2[10],passport[10],passport2[10],desti[20],visaty[20];
int price1,dt1,couponInvalid,couponMenu,menu,rDest1=0, rDest2=0, rDest3=0, rDest4=0, rDest5=0, rDest6=0, rDest7=0,rDest8=0;
char departure,time1,coupon[15],mClass1[20], mClass2[20], mClass3[20], mClass4[20],time2;
double rDiscountB,rAdultPercent=0.0, rKidPercent=0.0, rTicketAdult=0, rTicketKid=0, rTotalAmount=0,rTicket;

void voidpersonaldetails();
void voidpersonaldetails2();
void voidBoardingPassManual();
void boardingpass2();
void midsection();
void loading();

int age[4];

   void firstpass();
   void secondpass();
   void thirdpass();
   void fourthpass();
   void seats();
   void boardingpass();		
void manual_Reservation()
{
        loading(); 
          
    	cout<<"\n\t\t ========== G E N E R A L    R E S E R V A T I O N ==========\n\n";
	    cout<<"\n\t\t CHOOSE YOUR DESTINATION: \n";
	    cout<<"\n\t\t 1.DELHI \n\t\t 2.CHENNAI \n\t\t 3.KOLKATA \n\t\t 4.BENGALURU";
	    cout<<"\n\t\t 5.HYDERABAD \n\t\t 6.AHMEDABAD \n\t\t 7.GOA \n\t\t 8.KOCHI ";
	    cout<<"\n\t\t ENTER YOUR CHOICE: ";
	    cin>>d1;
	    
	do{
	    if(d1==1)
	    {
	    	strcpy(dest,"DELHI");
	    	priceAdult=4100;
	    	priceKid=3075;
	    	priceBusiness=8200;
	    	break;
	    	
		}
		
		else if(d1==2)
	    {
	    	strcpy(dest,"CHENNAI");
	    	priceAdult=3000;
	    	priceKid=2250;
	    	priceBusiness=6000;
	    	break;
	    	
		}
	    
		
		else if(d1==3)
	    {
	    	strcpy(dest,"KOLKATA");
	    	priceAdult=6250;
	    	priceKid=4690;
	    	priceBusiness=12500;
	    	break;
	    	
		}
		
		else if(d1==4)
	    {
	    	strcpy(dest,"BENGALURU");
	    	priceAdult=3500;
	    	priceKid=2625;
	    	priceBusiness=7000;
	    	break;
	    	
		}
		
		else if(d1==5)
	    {
	    	strcpy(dest,"HYDERABAD");
	    	priceAdult=3800;
	    	priceKid=2850;
	    	priceBusiness=7600;
	    	break;
	    	
		}
		
		else if(d1==6)
	    {
	    	strcpy(dest,"AHMEDABAD");
	    	priceAdult=2300;
	    	priceKid=1725;
	    	priceBusiness=4600;
	    	break;
	    	
		}
		
		else if(d1==7)
	    {
	    	strcpy(dest,"GOA");
	    	priceAdult=1800;
	    	priceKid=1350;
	    	priceBusiness=3600;
	    	break;
	    	
		}
		
		else if(d1==8)
	    {
	    	strcpy(dest,"KOCHI");
	    	priceAdult=5800;
	    	priceKid=4350;
	    	priceBusiness=11600;
	    	break;
	    	
		}
		else if (d1!=1&&d1!=2&&d1!=3&&d1!=4&&d1!=5&&d1!=6&&d1!=7){
			cout<<"\n\n***** E R R O R *****\nInvalid number chosen (Choose 1-7 only)\n*********************\n";}
     }while(d1!=8);
     
     do
     {
     	cout<<"\n\t ENTER NO. OF TICKETS(MAX 4) :  ";
     	cin>>ticket;
     	system("CLS");
     	
     	if(ticket==1)
     	{
     		firstpass();
     		boardingpass();
     		break;	
		}
		else if(ticket==2)
		{
			firstpass();
     	    secondpass();
     	    boardingpass();
     	    break;	
		}
		else if(ticket==3)
		{
			firstpass();
     	    secondpass();
     	    thirdpass();
     	    boardingpass();
     	    break;	
		}
		else if(ticket==4)
		{
			firstpass();
     	    secondpass();
     	    thirdpass();
     	    fourthpass();
     	    boardingpass();
     	    break;
		}
		else if (ticket!=1&&ticket!=2&&ticket!=3&&ticket!=4)
			cout<<"\n\n***** E R R O R *****\nInvalid number of tickets chosen (1-4 only)\n*********************\n";	
	}while(ticket!=5);
	
	
	rTicket=rTicket+ticket;
	if (age1>=18)
		rTicketAdult++;
	else if (age1>=0&&age1<18)
		rTicketKid++;
	if (age2>=18)
		rTicketAdult++;
	else if (age2>=0&&age2<18)
		rTicketKid++;
	if (age3>=18)
		rTicketAdult++;
	else if (age3>=0&&age3<18)
		rTicketKid++;
	if (age4>=18)
		rTicketAdult++;
	else if (age4>=0&&age4<18)
		rTicketKid++;
		
}


void firstpass()
{
	cout<<"\n\t ENTER 1ST PASSENGER NAME :  ";
	cin.get();
	cin.getline(passenger1,20);
	
	
	cout<<"\n\t ENTER AGE OF 1ST PASSENGER:  ";
	cin>>age1;
	system ("CLS");
	seats();
	
	do{
		cin>>seat1;
		if(seat1>66 || seat1<1)
	{
		cout<<"\n\t ENTER VALID SEAT NUMBER......!";
		break;
	}
    }while(seat1>66 || seat1<1);
    system ("CLS");
}

void secondpass()
{
	cout<<"\n\t ENTER 2nd PASSENGER NAME :  ";
	cin.get();
	cin.getline(passenger2,50);
	
	cout<<"\n\t ENTER AGE OF 2nd PASSENGER:  ";
	cin>>age2;
	system ("CLS");
	seats();
	
	do
	{
		do{
			cin>>seat2;
			if(seat2>66 || seat2<1)
			{
			cout<<"\n\t ENTER VALID SEAT NUMBER......!";
			}
		}while(seat2>66 || seat2<1);
    	if (seat2==seat1)
		cout<<"\n\t Seat "<<seat1<<" has been taken \nChoose another seat: ";
    }while (seat2==seat1);
    system ("CLS");
}
void thirdpass()
{
	cout<<"\n\t ENTER 3rd PASSENGER NAME :  ";
	cin.get();
	cin.getline(passenger3,50);
	
	cout<<"\n\t ENTER AGE OF 3rd PASSENGER:  ";
	cin>>age3;
	system ("CLS");
	seats();
	
	do
	{
    	do{
			cin>>seat3;
			if(seat3>66 || seat3<1)
		{
			cout<<"\n\t ENTER VALID SEAT NUMBER......!";
		}
		}while(seat3>66 || seat3<1);
		if (seat3==seat1||seat3==seat2)
			cout<<"\n\tSeat "<<seat1<<" and "<<seat2<<" has been taken\n\t Choose another seat\n";
	}while (seat3==seat1||seat3==seat2);
    system ("CLS");
}
void fourthpass()
{
	cout<<"\n\t ENTER 4Th PASSENGER NAME :  ";
	cin.get();
	cin.getline(passenger4,50);
	
	cout<<"\n\t ENTER AGE OF 4th PASSENGER:  ";
	cin>>age4;
	system ("CLS");
	seats();
	
	do{
		cin>>seat4;
		if(seat4>66 || seat4<1)
	{
		cout<<"\n\t ENTER VALID SEAT NUMBER......!";
	}
    }while(seat4>66 || seat4<1);
    system ("CLS");
}

void seats()
{
	cout<<"\n\t CHOOSE YOUR SEAT: \n";
    cout<<"\n\t          1   2        3   4        5   6 					\n\t";
	cout<<"\n\t          7   8        9   10       11  12					\n\t";
	cout<<"\n\t          13  14       15  16       17  18    BUSINESS  CLASS \n\t";
	cout<<"\n\t          19  20       21  22       23  24 					\n\t";
	cout<<"\n\t\t----------------------------------------- 					\n\t";
	cout<<"\n\t          25  26       27  28       29  30 					\n\t";
	cout<<"\n\t          31  32       33  34       35  36 					\n\t";
	cout<<"\n\t          37  38       39  40       41  42 					\n\t";
	cout<<"\n\t          43  44       45  46       47  48     ECONOMY CLASS \n\t";
	cout<<"\n\t          49  50       51  52       53  54 					\n\t";
	cout<<"\n\t          55  56       57  58       59  60 					\n\t";
	cout<<"\n\t          61  62       63  64       65  66 					\n\n\t";
	cout<<"\n\t Choose seat :  ";
}

void boardingpass()
{
	if(ticket==1||ticket==2||ticket==3||ticket==4)
	{
		if(age1>=18)
		 price=priceAdult;
		else
		 price=priceKid;
		if(seat1>=1 && seat1<=24)
		 price=priceBusiness;
	}
    if(ticket==2||ticket==3||ticket==4)
	{
		if(age2>=18)
		 price=price+priceAdult;
		else
		 price=price+priceKid;
		if(seat2>=1 && seat2<=24)
		 price=price+priceBusiness;
	}
    if(ticket==3||ticket==4)
	{
		if(age3>=18)
		 price=price+priceAdult;
		else
		 price=price+priceKid;
		if(seat3>=1 && seat3<=24)
		 price=price+priceBusiness;
	}
    if(ticket==4)
	{
		if(age4>=18)
		 price=price+priceAdult;
		else
		 price=price+priceKid;
		if(seat4>=1 && seat4<=24)
		 price=price+priceBusiness;
	}
	
		system("cls");
	
	cout<<"\n\n\tYour flight is Boeing-770 AZ573";
	cout<<"\n\n\t A - 10.00 AM\n\t B - 2.00 PM\n\t C - 7.00 PM\n\t";
	cout<<"\n\t Choose departure time: ";
	do	
	{	cin>>departure;
		if (departure == 'A' || departure == 'a')
			time1==10.00;
		else if (departure == 'B' || departure == 'b')
			time1==2.00;
		else if (departure == 'C' || departure == 'c')
			time1==7.00;
		else 
			cout<<"\n\t Choose (A / B / C) only........!";	
	} while ((departure != 'A' && departure != 'a')&&(departure != 'B' && departure != 'b')&&(departure != 'C' && departure != 'c'));

	system("cls");
	
	do{
	cout<<"\n\t Do you want to apply any coupons? (Once)\n\t 1. Yes\n\t 2. No\n\t";
    cin>>cup;
    system ("CLS");
		if (cup==1){
			do
			{	cout<<"\n\t Enter your coupon : ";
				cin>>coupon;
				if (strcmp(coupon, "MKZ18")==0)
				{
					cout<<"\n\t  15% off applied Successfully....!";
					rDiscountB=15.0/100.0*price;
					price=price-(15.0/100.0*price);
					break;
				}
				else if (strcmp(coupon, "CAPQ45")==0)
				{	cout<<"\n\t  10% off applied Successfully....!";
					rDiscountB=10.0/100.0*price;
					price=price-(10.0/100.0*price);
					break;
				}
				else if (strcmp(coupon, "JZP99")==0)
				{	cout<<"\n\t 15% off applied Successfully....!";
					rDiscountB=15.0/100.0*price;
					price=price-(15.0/100.0*price);
					break;
				}
				else if (strcmp(coupon, "STARP55")==0)
				{	cout<<"\n\t 10% off applied Successfully....!";
					rDiscountB=10.0/100.0*price;
					price=price-(10.0/100.0*price);
					break;
				}
				else if ((strcmp(coupon, "MKZ18")!=0)&&(strcmp(coupon, "CAPQ45")!=0)&&(strcmp(coupon, "JZP99")!=0)&&(strcmp(coupon, "STARP55")!=0))
				{	do
					{	couponMenu=0;
						cout<<"\n\t Invalid coupon\n\t 1. Apply coupon again\n\t 2. Continue\n\t";
						cin>>couponInvalid;
						if (couponInvalid==2)
							couponMenu=1;
						else if (couponInvalid!=1&&couponInvalid!=2)
								cout<<"\n\n\t Invalid option chosen (1-Enter coupon again   2-Continue without coupon)\n";
					} while (couponInvalid!=1&&couponInvalid!=2);
					system ("CLS");
				}
					
			} while ((strcmp(coupon, "MKZ18")!=0)&&(strcmp(coupon, "CAPQ45")!=0)&&(strcmp(coupon, "JZP99")!=0)&&(strcmp(coupon, "CAPTAINAFIQ")!=0)&&couponMenu==0);
		}
		else if (cup!=1&&cup!=2)
			cout<<"\n\t Invalid option chosen (1-YES   2-NO)\n";
	} while (cup!=1&&cup!=2);
	cout<<"\n\n\t You have completed your information and details\n\t Total amount : "<<price;
	cout<<"\n\t Press enter key to access boarding pass......";
	cin.get();
	cin.get();
	loading();
	system ("CLS");
	if (seat1>=24)
		strcpy (mClass1, "Economy Class");
	else
		strcpy (mClass1, "Business Class");
	if (seat2>=24)
		strcpy (mClass2, "Economy Class");
	else
		strcpy (mClass2, "Business Class");
	if (seat3>=24)
		strcpy (mClass3, "Economy Class");
	else
		strcpy (mClass3, "Business Class");
	if (seat4>=24)
		strcpy (mClass4, "Economy Class");
	else
		strcpy (mClass4, "Business Class");
		
	cout<<"\n\n\n___________________________________________________________________________________________\n\n       SKYRO AIRLINE             e-Boarding Pass          [Reference Number : AIRZ32]";
	cout<<"\n__________________________________________________________________________________________\n\n ";
	
		cout<<"\n      PASSENGER NAME : "<<passenger1;
		cout<<"\n      AGE            : "<<age1<<"\t CLASS : "<<mClass1;
		cout<<"\n      SEAT           : "<<seat1;
		cout<<"\n      MUMBAI to "<<dest<<"    "<<time1<<endl;
	if (ticket==2||ticket==3||ticket==4)
	{	cout<<"\n      PASSENGER NAME : "<<passenger2;
		cout<<"\n      AGE            : "<<age2<<"\t CLASS : "<<mClass2;
		cout<<"\n      SEAT           : "<<seat2;
		cout<<"\n      MUMBAI to "<<dest<<"    "<<time1<<endl;
	}
	if (ticket==3||ticket==4)
	{	cout<<"\n      PASSENGER NAME :"<<passenger3;
		cout<<"\n      AGE            : "<<age3<<"\t CLASS : "<<mClass3;
		cout<<"\n      SEAT           :"<<seat3;
		cout<<"\n      MUMBAI to "<<dest<<"    "<<time1<<endl;
	}
	if (ticket==4)
	{	cout<<"\n      PASSENGER NAME :"<<passenger4;
		cout<<"\n      AGE            : "<<age4<<"\t CLASS : "<<mClass4;
		cout<<"\n      SEAT           : "<<seat4;
		cout<<"\n      MUMBAI to "<<dest<<"    "<<time1<<endl;
	}
	cout<<"\n      TOTAL AMOUNT : "<<price;                                                                                    
	cout<<"\n__________________________________________________________________________________________\n(Enter any key to return to Main Menu)\n";
	cin.get();cin.get();
	if (d1==1)
		rDest1=rDest1+ticket;
	else if (d1==2)
		rDest2=rDest2+ticket;
	else if (d1==3)
		rDest3=rDest3+ticket;
	else if (d1==4)
		rDest4=rDest4+ticket;
	else if (d1==5)
		rDest5=rDest5+ticket;
	else if (d1==6)
		rDest6=rDest6+ticket;
	else if (d1==7)
		rDest7=rDest7+ticket;
	else if (d1==8)
		rDest8=rDest8+ticket;
	rTotalAmount=rTotalAmount+price;
		menu=1;
	system ("CLS");
}


international_flights()
{
	loading();
	system("cls");
	
	cout<<"\n\t ========|| I N T E R N A T I O N A L  F L I G H T   R E S E R V A T I O N ||=========\n\n";
	
	cout<<"\n\t You will depart at INTERNATIONAL AIRPORT MUMBAI \n";
	cout<<"\n\t Available DESTINATION today :\n\n\t 1.DUBAI \n\t 2.LONDON \n\t 3.BANGKOK \n\t 4.PARIS \n\t 5.TOKYO\n";

	cout<<"\n\t CHOOSE YOUR DESTINATION: ";

	
	do
	{	
	    cin>>destination;
		if (destination==1)
		   {
			strcpy(desti, "DUBAI");
			Adult=25000;Business=65000;
			esttime=2;esttime2=20;
			break;
			}
		else if (destination==2){
			strcpy(desti, "LONDON");
			Adult=57000;Business=150000;
			esttime=9;esttime2=00;
			break;}
		else if (destination==3){
			strcpy(desti, "BANGKOK");
			Adult=14000;Business=41000;
			esttime=1;esttime2=10;
			break;}
		else if (destination==4){
			strcpy(desti, "PARIS");
			Adult=30000;Business=120000;
			esttime=6;esttime2=30;
			break;}
		else if (destination==5){
			strcpy(desti, "TOKYO");
			Adult=30000;Business=95000;
			esttime=7;esttime2=40;
			break;}
		else if (destination!=1&&destination!=2&&destination!=3&&destination!=4&&destination!=5){
			cout<<"\n\n\t-------------  Invalid number ------------- \n\n\t CHOOSE YOUR DESTINATION: ";
			}
	} while (destination!=1&&destination!=2&&destination!=3&&destination!=4&&destination!=5);
	system ("CLS");
	do
	{	cout<<"\n\n\t ENTER NUMBER OF TICKETS (maximum 2): ";
		cin>>tick;
		if (tick==1)
		{	system ("CLS");
		    cout<<"\n\t ENTER INFORMATION FOR 1ST PASSENGER: ";
			voidpersonaldetails();
	    	midsection();
			boardingpass2();
			
		}
		else if (tick==2)
		{	system ("CLS");
		    cout<<"\n\t ENTER INFORMATION FOR 1ST PASSENGER: ";
			voidpersonaldetails();
			cout<<"\n\t ENTER INFORMATION FOR 2nd PASSENGER: ";
			voidpersonaldetails2();
			midsection();
			boardingpass2();
		}
		
		
    }while(tick>2);
    
    
}

void voidpersonaldetails()
{
	
	cout<<"\n\t PLEASE FILL FOLLOWING INFORMATION CORRECTLY: \n";
    
  	cout<<"\n\t ENTER YOUR NAME : ";
	cin.get();
	cin.getline(pass1,20);
	
	cout<<"\n\t ENTER COUNTRY NAME: ";
	
	cin.getline(nationality,10);
	cin.get();
	
	cout<<"\n\t ENTER PASSPORT NO : ";
	cin>>passport;
	
	cout<<"\n\t YOUR PASSPORT NO IS: "<<passport;
	
	
	cout<<"\n\n\t ENTER VISA NUMBER: ";
	cin>>visa1;
	
	cout<<"\n\n\t YOUR VISA NUMBER IS: "<<visa1;
	
	system ("CLS");
	
	cout<<"\n\t CHOOSE YOUR VISA TYPE: ";
	cout<<"\n\n\t 1.TOURIST VISA \n\t 2.STUDENT VISA \n\t 3.BUSINESS VISA \n\t 4.FILM VISA \n\t 5.PERMANENT VISA \n\t 6.RESEARCH VISA \n\t 7.GOVERNMENT VISA \n\t";
	cout<<"\n\t ENTER YOUR VISA TYPE: ";
	
	do
	{	cin>>vstype;
		if (vstype==1)
		   {
			strcpy(visaty, "TOURIST VISA");
			break;
			}
		else if (vstype==2){
			strcpy(visaty, "STUDENT VISA");
			break;}
		else if (vstype==3){
			strcpy(visaty, "BUSINESS VISA");
			break;}
		else if (vstype==4){
			strcpy(visaty, "FILM VISA ");
			break;}
		else if (vstype==5){
			strcpy(visaty, "PERMANENT VISA");
			break;}
			
		else if (vstype==6){
			strcpy(visaty, "RESEARCH VISA ");
			break;}
		else if (vstype==7){
			strcpy(visaty, "GOVERNMENT VISA");
			break;}
			
		else if (vstype!=1&&vstype!=2&&vstype!=3&&vstype!=4&&vstype!=5&&vstype!=6&&vstype!=7){
			cout<<"\n\n\t-------------  Invalid number ------------- \n\t CHOOSE YOUR TYPE: ";
			}
	} while (vstype!=1&&vstype!=2&&vstype!=3&&vstype!=4&&vstype!=5&&vstype!=6&&vstype!=7);
	
	system ("CLS");
	
	cout<<"\n\t ENTER VISA ISSUE DATE : ";
	do
    {
    cout<<"\n\t ENTER DATE:";
    cin>>date1;
    }
    while(date1>31);
    
    do
    {
    cout<<"\n\t ENTER MONTH:";
    cin>>month1;
    }
    while(month1>12);

	cout<<"\n\t ENTER YEAR: ";
	cin>>year1;
	
	
	cout<<"\n\t ENTER VISA EXPIRE DATE : ";
	cout<<"\n\n\t ENTER DATE: ";
	cin>>date2;
	cout<<"\n\t ENTER MONTH: ";
	cin>>month2;
	cout<<"\n\t ENTER YEAR: ";
	cin>>year2;
	
		system ("CLS");
	cout<<"\n\t________________________________________________________";
	cout<<"\n\t         P E R S O N A L    D E T A I L S               ";
	cout<<"\n\t________________________________________________________";
	
	cout<<"\n\n\t PLEASE CHECK YOUR INFORMATION....";
	cout<<"\n\n\t NAME             : "<<pass1;
	cout<<"\n\n\t COUNTRY NAME     : "<<nationality;
	cout<<"\n\n\t PASSPORT NUMBER  : "<<passport;
	cout<<"\n\n\t VISA NUMBER      : "<<visa1;
	cout<<"\n\n\t VISA TYPE        : "<<visaty;
	cout<<"\n\n\t VISA ISSUE DATE  : "<<date1<<"/"<<month1<<"/"<<year1;
    cout<<"\n\n\t VISA EXPIRE DATE : "<<date2<<"/"<<month2<<"/"<<year2;
    
    cout<<"\n\t________________________________________________________";
    
    cout<<"\n\t CHECK YOUR INFORMATION IF IT IS WRONG PRESS \n\t 1.press 1 for modify \n\t 2.press 2 for continue\n\t";
    cin>>choise2;
    
    system ("CLS");
    
    if(choise2==1)
    {
    	voidpersonaldetails();
	}
	else
	{
		seats();
		do{
		cin>>chseat1;
		if(chseat1>66 || chseat1<1)
	    {
		cout<<"\n\t ENTER VALID SEAT NUMBER......!";
		break;
     	}
        }while(chseat1>66 || chseat1<1);
        system ("CLS");
	}	
}
void voidpersonaldetails2()
{
	
	cout<<"\n\t PLEASE FILL FOLLOWING INFORMATION CORRECTLY: \n";
    
  	cout<<"\n\t ENTER YOUR NAME : ";
	cin.get();
	cin.getline(pass2,20);
	
	cout<<"\n\t ENTER COUNTRY NAME: ";
	
	cin.getline(nationality2,10);
	cin.get();
	cout<<"\n\t ENTER PASSPORT NO : ";
	cin>>passport2;
	
	cout<<"\n\t YOUR PASSPORT NO IS: "<<passport2;
	
	
	cout<<"\n\n\t ENTER VISA NUMBER: ";
	cin>>visa2;
	
	cout<<"\n\n\t YOUR VISA NUMBER IS: "<<visa2;
	
	system ("CLS");
	
	cout<<"\n\t CHOOSE YOUR VISA TYPE: ";
	cout<<"\n\n\t 1.TOURIST VISA \n\t 2.STUDENT VISA \n\t 3.BUSINESS VISA \n\t 4.FILM VISA \n\t 5.PERMANENT VISA \n\t 6.RESEARCH VISA \n\t 7.GOVERNMENT VISA \n\t";
	cout<<"\n\t ENTER YOUR VISA TYPE: ";
	
	do
	{	cin>>vstype;
		if (vstype==1)
		   {
			strcpy(visaty, "TOURIST VISA");
			break;
			}
		else if (vstype==2){
			strcpy(visaty, "STUDENT VISA");
			break;}
		else if (vstype==3){
			strcpy(visaty, "BUSINESS VISA");
			break;}
		else if (vstype==4){
			strcpy(visaty, "FILM VISA ");
			break;}
		else if (vstype==5){
			strcpy(visaty, "PERMANENT VISA");
			break;}
			
		else if (vstype==6){
			strcpy(visaty, "RESEARCH VISA ");
			break;}
		else if (vstype==7){
			strcpy(visaty, "GOVERNMENT VISA");
			break;}
			
		else if (vstype!=1&&vstype!=2&&vstype!=3&&vstype!=4&&vstype!=5&&vstype!=6&&vstype!=7){
			cout<<"\n\n\t-------------  Invalid number ------------- \n\t CHOOSE YOUR TYPE: ";
			}
	} while (vstype!=1&&vstype!=2&&vstype!=3&&vstype!=4&&vstype!=5&&vstype!=6&&vstype!=7);
	
	system ("CLS");
	
	cout<<"\n\t ENTER VISA ISSUE DATE : ";
	cout<<"\n\n\t ENTER DATE: ";
	cin>>date1;
	cout<<"\t ENTER MONTH: ";
	cin>>month1;
	cout<<"\t ENTER YEAR: ";
	cin>>year1;
	
	
	cout<<"\n\t ENTER VISA EXPIRE DATE : ";
	cout<<"\n\n\t ENTER DATE: ";
	cin>>date2;
	cout<<"\t ENTER MONTH: ";
	cin>>month2;
	cout<<"\t ENTER YEAR: ";
	cin>>year2;
	
		system ("CLS");
	cout<<"\n\t\t _________________________________________________________________";
	cout<<"\n\t         P E R S O N A L    D E T A I L S               ";
	cout<<"\n\t\t _________________________________________________________________";
	
	cout<<"\n\n\t PLEASE CHECK YOUR INFORMATION....";
	cout<<"\n\n\t NAME             : "<<pass1;
	cout<<"\n\n\t COUNTRY NAME     : "<<nationality;
	cout<<"\n\n\t PASSPORT NUMBER  : "<<passport;
	cout<<"\n\n\t VISA NUMBER      : "<<visa1;
	cout<<"\n\n\t VISA TYPE        : "<<visaty;
	cout<<"\n\n\t VISA ISSUE DATE  : "<<date1<<"/"<<month1<<"/"<<year1;
    cout<<"\n\n\t VISA EXPIRE DATE : "<<date2<<"/"<<month2<<"/"<<year2;
    
    cout<<"\n\t\t _________________________________________________________________";
    
    cout<<"\n\t CHECK YOUR INFORMATION IF IT IS WRONG PRESS \n\t 1.press 1 for modify \n\t 2.press 2 for continue\n\t";
    cin>>choise3;
    
    system ("CLS");
    if(choise2==1)
    {
    	voidpersonaldetails();
	}
	else
	{
		seats();
		do{
		cin>>chseat2;
		if(chseat2>66 || chseat2<1)
	    {
		cout<<"\n\t ENTER VALID SEAT NUMBER......!";
		break;
     	}
        }while(chseat2>66 || chseat2<1);
        system ("CLS");
	}
}

void midsection()
{
	if(tick==1||tick==2)
	{
		if(chseat1>=24 && chseat1<=66)
		 price1=Adult;
		if(chseat1>=1 && chseat1<=24)
		 price1=Business;
	}
    if(tick==2)
	{
		if(chseat1>=24 && chseat1<=66)
		 price1=price1+Adult;
		if(chseat2>=1 && chseat2<=24)
		 price1=price1+Business;
	}
	
	cout<<"\n\t\t TOTAL AMMOUNT : "<<price1;
	cout<<"\n\t\t ENTER DEPARTURE DATE: ";
	cin>>date1;
	cout<<"\n\t\t ENTER MONTH: ";
	cin>>month1;
	cout<<"\n\t\t ENTER YEAR: ";
	cin>>year1;
	
	cout<<"\n\n\t\t A - 1.00 PM \n\t\t B - 5.00 PM ";
	cout<<"\n\t Choose departure time: ";
	do	
	{	cin>>departure;
		if (departure == 'A' || departure == 'a')
			time2==1.00;
		else if (departure == 'B' || departure == 'b')
			time2==5.00;
		else 
			cout<<"\n\t Choose (A / B ) only........!";	
	} while ((departure != 'A' && departure != 'a')&&(departure != 'B' && departure != 'b'));
   system("cls");
	

	
}
void boardingpass2()
{
	loading();
	cout<<"\n\t\t _________________________________________________________________";
	cout<<"\n\t\t                E - B O A R D I N G   P A S S                      ";
	cout<<"\n\t\t _________________________________________________________________";
	cout<<"\n\t\t REFERENCE NO.   : SK1245F4";
	cout<<"\n\t\t PASSENGER NAME  : "<<pass1<<"\t\t\t SEAT NO  : "<<chseat1;
	cout<<"\n\t\t VISA NUMBER     : "<<visa1<<"\t\t\t TERMINAL : 2";
    cout<<"\n\t\t PASSPORT NUMBER : "<<passport<<"\t\t\t GATE NO  : 3";
	
	if (tick==2)
	{
	cout<<"\n\n\t\t PASSENGER NAME  : "<<pass2<<"\t\t\t SEAT NO  : "<<chseat2;
	cout<<"\n\t\t VISA NUMBER     : "<<visa2;
	cout<<"\n\t\t PASSPORT NUMBER : "<<passport2;
	}
	
	
	cout<<"\n\n\t\t                                                 ";
	cout<<"\n\n\t\t FROM :   O--------------------------------------> TO:    ";
	cout<<"\n\t\t MUMBAI                                           "<<desti;
	cout<<"\n\n\t\t DATE: "<<date1<<"/"<<month1<<"/"<<year1<<"\t\t\t TOTAL AMMOUT: "<<price1;
	cout<<"\n\n\t\t DEPARTURE TIME : "<<time2;
	cout<<"\n\t\t ESTIMATE TIME : "<<esttime<<" Hrs "<<esttime2<<" Minutes";                                             
	
	cout<<"\n\t\t _________________________________________________________________";
	cout<<"\n__________________________________________________________________________________________\n(Enter any key to return to Main Menu)\n";
	cin.get();cin.get();
	menu=1;

}


void loading()
{
	system("color 0");
	system("cls");
	SetConsoleCP(436);
	SetConsoleOutputCP(437);
	int bar1=174,bar2=219;
	
	cout<<"\n\n\n\t\t\t\t loading........";
	cout<<"\n\n\n\t\t\t\t";
	
	for(int i=0;i<50;i++)
	    cout<<(char)bar1;
	
	cout<<"\r";
	cout<<"\t\t\t\t";
	for(int i=0;i<50;i++)
	{
		cout<<(char)bar2;
		Sleep(30);
	}
	system("cls");
}

int main()
{
	int a,b;
	do{
		menu=0;
		system("color F");
	loading();
	
	int choice1;
	cout<<"\t---------------------------------------------------------------------------\n";
	cout<<"\t**                                                                       **\n";
	cout<<"\t**                            WEL - COME  IN                             **\n";
	cout<<"\t**                                                                       **\n";
	cout<<"\t**                            SKYRO  AIRLINES                            **\n";
	cout<<"\t**                                                                       **\n";
	cout<<"\t**                            FLY  WITH  US...                           **\n";
	cout<<"\t---------------------------------------------------------------------------\n\n\n";
	
	cout<<"\n\t Welcome to SKYRO AIRLINES here you will get discount on some routes";
	cout<<"\n\t and special discount for kids";
	
	cout<<"\n\t So hurry up book your tickets now.......!\n\n";
	
	cout<<"\t\t=========================|| M A I N   M E N U ||=========================";
	cout<<"\n\t 1.INTERNATIONAL RESERVATION  \n\t 2.GENERAL RESERVATION \n\t 3.COUPONS \n\t 4.REPORT  \n\t 5.EXIT \n\n\t ";
	cout<<"Enter Your Choice: ";
	cin>>choice1;
	
	system ("CLS");
	
	if(choice1==1)
	{
		system("color B");
		international_flights();
		menu=1;
	}
		       		   
	else if(choice1==2)
	{
		system("color B");
		manual_Reservation();
		menu=1;
	}
		       
	
	else if(choice1==3)
	{
		cout<<"\n\t=========================|| C O U P O N S ||=========================\n\n\t Apply one of these coupons in General Reservation only\n\n\t 1 - MKZ18     (15% OFF)\n\t 2 - CAPQ45    (10% OFF)\n\t 3 - JZP99     (15% OFF)\n\t 4 - STARP55   (10% OFF)\n";
		cout<<"\n\t(Enter any key to return to Main Menu)\n";
		cin.get();cin.get();
		menu=1;
		system ("CLS");
	}
	else if(choice1==4)
	{
			int final;
		    a=rTicketAdult;b=rTicketKid;
		    final=rDest1+rDest2+rDest3+rDest4+rDest5+rDest6+rDest7+rDest8;
			cout<<"\n\n\t=========================|| S K Y R O  A I R L I N E   R E P O R T ||=========================";
			cout<<"\n\n\t Total Tickets Sold : "<<final;
			rAdultPercent=rTicketAdult/(rTicketAdult+rTicketKid)*100;
			rKidPercent=rTicketKid/(rTicketAdult+rTicketKid)*100;
			cout<<"\n\t Total Adults       : "<<a<<fixed<<setprecision(2);
			cout<<"\n\t Total Kids         : "<<final-a<<fixed<<setprecision(2);
			cout<<"\n\n\t Total tickets sold (by destination)";
			cout<<"\n\t- DELHI      : "<<rDest1<<"\n\t- CHENNAI    : "<<rDest2<<"\n\t- KOLKATA    : "<<rDest3<<"\n\t- BENGALURU  : "<<rDest4<<"\n\t- HYDRABAD   : "<<rDest5<<"\n\t- AHMEDABAD  : "<<rDest6<<"\n\t- GOA        : "<<rDest7<< "\n\t- kochi      : "<<rDest8;
			cout<<"\n\t- Total Income           : "<<fixed<<setprecision(2)<<rTotalAmount;
			cout<<"\n\n\t(Enter any key to return to Main Menu)\n";
			cin.get();cin.get();
			menu=1;
			system ("CLS");
		
	}
	else if(choice1==5)
	{
		break;
	}

	}while((choice1!=1&&choice1!=2&&choice1!=3&&choice1!=4&&choice1!=5&&choice1!=6)||menu==1);
	
	return 0;
}











