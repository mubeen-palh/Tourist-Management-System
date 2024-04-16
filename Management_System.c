#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<mmsystem.h>
 void display_info(int,int,int,int,int);
 int book_ticket(int);
 int add_facil();
 int print_ticket(int,int,int,int,int);
 
int main(){
			char u[7],uu[7];
			char p[7],pp[7];
			int a=0,n,capital=0,small=0,num=0,i,ch=0,flag,b;
			system("COLOR 3E");
   while (1)  {
   	        printf("\n\n\t\t===WELCOME TO DUA TOURISTS===\n");
			printf("\n\t\t1-ABOUT OUR COMPANY");
			printf("\n\t\t2-REGISTER YOURSELF");
			printf("\n\t\t3-LOGIN USER");
			printf("\n\t\t4-TOURIST LOCATIONS");
			printf("\n\t\t5-EXIT\n");
			//PlaySound(TEXT("Code Voice 1.wav"),NULL,SND_ASYNC);
			int press;
			printf("\n\t\tSelect Your Choice: ");
			scanf("%d", &press);
			if(press==4){
			 printf("You Must login or Register Yourself First\n");
			 system("Pause");
			 continue;
			}
			else{
			switch(press){
				case 1:
				 {
					printf("\n\tAre you planning to spend your summer relaxing in your dreamplace?\n\tIf yes,then you have come to the right place .Dua tourists offers\n\tbestpackages you can get all around the country at a really affordable\n\tprice.Here you can visit the best tourist spots at your desired\n\tdestination in a five, four,or three star hotels with all the facilities\n\tof your choice.You can select your desired package of your desired\n\tdestination and add or remove the facilities that you want to avail.");
					printf("\n\tThe total price of your trip will be calculated on the basis of your\n\tselected package, number of trips, days of your stay and kind of\n\tfacilities you choose to avail.We guarantee you the best experience\n\t  that you can get. We wish you a safe and adventurous journey!");
					printf("\n");
					system("PAUSE");
					break;
			     }
				case 2:
				{   
				int c=1;
				while(c!=0){
					getchar();
					printf("\nEnter your user name :\n");
					gets(u);
					printf("\nEnter your new password using 6 characters maximum with at least 1 numeric, 1 capital and 1 small letter.\n");
					gets(p);
					for (i=0;i<6;i++){
					if(p[i]>='A' && p[i] <='Z'){
					capital= capital +1;
					}
					if(p[i]>='a' && p[i] <='z'){
					small= small +1;
					}
					if(p[i]>='0' && p[i]<='9'){
					num= num +1;
					}
					   }
					if(capital == 0 || small ==0 || num == 0){
					 printf("Error!,Enter your password using 6 characters long with at least 1 numeric, 1 capital and 1 small letter.\n");}                              
					else{
					 printf("\nAccount Created Successfully\n");
					 c=0;
					 }
			
				 system("PAUSE");
				 }
				system("CLS");
				break;
			}
				case 3:
				{ 
				 getchar();
					printf("\nEnter your user name\n");
				    gets(uu);
					printf("\nEnter your password\n");
					gets(pp);
					int value1,value2;
					value1=strcmp(u,uu);
					value2=strcmp(p,pp);
					if(value1==0){
							if(value2==0){
							printf("Welcome %s, you are now logged in.\n", uu);
							//PlaySound(TEXT("Code Voice 2.wav"),NULL,SND_ASYNC);
							 flag=1;
							 system("PAUSE");
					 		}
					 		else{
					 		printf("Incorrect Password\n");
							system("Pause"); 	
							 continue;
							}
				    }
					else {
					 printf("Incorrect username\n");
					 system("PAUSE");
					 continue;
				   	} 
				}
				system("CLS");
				case 4:;
			    b=1;
				while (b!=0){
				printf("\n\t\t**Choose Your destination**");
				printf("\n===HUNZA VALLEY TOUR===\t(H)\nFROM KHI:27,000\nDate of Departure: 1st JAN, 2022\n No. OF DAYS:10 Days");
				printf("\n\n===SWAT KALAM VALLEY TOUR===\t(S)\nFROM KHI:18,000\nDate of Departure: 3rd JAN, 2022\n No. OF DAYS:6 Days");
				printf("\n\n===KUMRAT VALLEY TOUR===\t(K)\nFROM KHI:21,000\nDate of Departure: 4th JAN, 2022\n No. OF DAYS:8 Days");
				printf("\n\n===NARAN KAGHAN SHOGRAN TOUR===\t(N)\nFROM KHI:29,000\nDate of Departure: 6th JAN, 2022\n No. OF DAYS:11 Days");
				printf("\n\n======MURREE AND ISLAMABAD\t(M)\nFROM KHI:30,000\nDate of Departure: 11th JAN, 2022\n No. OF DAYS:7 Days");
				printf("\n\t\tPress the Packages Code to know further information\n");
				//PlaySound(TEXT("Code Voice 3.wav"),NULL,SND_ASYNC);
				char ch;
				scanf("%s", &ch);
				system("CLS");
				switch(ch){
				case 'H':
				{
				 char name[6]={'M','u','b', 'e', 'e','n'};
			     printf("\n===HUNZA VALLEY TOUR===\n");
				 display_info(5,1,1,27000,10);
				 b=0;
				 int pr;
				 printf("\nPress 1 if you want to  BOOK TICKET..");
				// PlaySound(TEXT("Code Voice 4.wav"),NULL,SND_ASYNC);
				 scanf("%d", &pr);
				 int cost,pers;
				 printf("How many persons ticket do you want:");
				 scanf("%d", &pers);
				 cost=book_ticket(27000);
				 int total=cost*pers;
				 printf("\nYour Total Cost is %d", total);
				 printf("\nPress 1 to print ticket...");
				 //PlaySound(TEXT("Code Voice 5.wav"),NULL,SND_ASYNC);
			     int p;
				 scanf("%d", &p);
			     system("CLS");
			        if(p==1){
					        printf("\t\t==========\n\t\tDUA TOURISTS\n\t\t==========");
					        printf("\n\t\tPackage Name:HUNZA VALLEY Tour");
					        printf("\n\t\tYour Name:%s", u);
					        print_ticket(pers,10,total,6,9);
				       }
				 }
				break;
				case 'S':
				{
					char name[7]={'M','u','b', 'e', 'e','n'};
					printf("\n===SWAT KALAM VALLEY TOUR===\n");
					display_info(4,2,1,18000,6);
					b=0;
					int pr;
					printf("\nPress 1 if you want to  BOOK TICKET...");
					// PlaySound(TEXT("Code Voice 4.wav"),NULL,SND_ASYNC);
					scanf("%d", &pr);
					int cost,pers;
					printf("How many persons ticket do you want:");
					scanf("%d", &pers);
					cost=book_ticket(18000);
					int total=cost*pers;
					printf("\nYour Total Cost is %d", total);
				    printf("\nPress 1 to print ticket");
				    //PlaySound(TEXT("Code Voice 5.wav"),NULL,SND_ASYNC);
					int p;
					scanf("%d", &p);
					system("CLS");
				    if(p==1){
				         printf("\t\t==========\n\t\tDUA TOURISTS\n\t\t==========");
				         printf("\n\t\tPackage Name:SWAT KALAM TOUR");
				         printf("\n\t\tYour Name:%s", u);
				        print_ticket(pers,6,total,3,10);
				       }
				    }
				   break;
				   case 'K':
				   {
					    char name[6]={'M','u','b', 'e', 'e','n'};
					    printf("\n===KUMRAT VALLEY TOUR===\n");
					    display_info(5,1,1,21000,8);
					    b=0;
					    int pr;
					    printf("\nPress 1 if you want to  BOOK TICKET..");
					    //PlaySound(TEXT("Code Voice 4.wav"),NULL,SND_ASYNC);
					    scanf("%d", &pr);
					    int cost,pers;
					    printf("How many persons ticket do you want:");
					    scanf("%d", &pers);
					    cost=book_ticket(21000);
					    int total=cost*pers;
					    printf("\nYour Total Cost is %d", total);
					    printf("\nPress 1 to print ticket...");
					    //PlaySound(TEXT("Code Voice 5.wav"),NULL,SND_ASYNC);
					    int p;
					    scanf("%d", &p);
					    system("CLS");
				        if(p==1){
				         printf("\t\t==========\n\t\tDUA TOURISTS\n\t\t==========");
				         printf("\n\t\tPackage Name:KUMRAT VALLEY TOUR ");
				         printf("\n\t\tYour Name:%s", u);
				         print_ticket(pers,8,total,4,7);
				        }
				    }
				break;
				case 'N':
				{
					char name[6]={'M','u','b', 'e', 'e','n'};
					printf("\n===NARAN KAGHAN SHOGRAN TOUR===\n");
					display_info(4,1,1,29000,11);
					b=0;
					int pr;
					printf("\nPress 1 if you want to  BOOK TICKET..");
					//PlaySound(TEXT("Code Voice 4.wav"),NULL,SND_ASYNC);
					scanf("%d", &pr);
					int cost,pers;
					printf("How many persons ticket do you want:");
					scanf("%d", &pers);
					cost=book_ticket(29000);
					int total=cost*pers;
					printf("\nYour Total Cost is %d", total);
					printf("\nPress 1 to print ticket");
					//PlaySound(TEXT("Code Voice 5.wav"),NULL,SND_ASYNC);
					int p;
					scanf("%d", &p);
					system("CLS");
					if(p==1){
					     printf("\t\t==========\n\t\tDUA TOURISTS\n\t\t==========");
						 printf("\n\t\tPackage Name:NARAN KAGHAN SHOGRAN TOUR ");
						 printf("\n\t\tYour Name:%s", u);
						 print_ticket(pers,11,total,6,9);
				   }
				}
				break;
				case 'M':
				{
				char name[6]={'M','u','b', 'e', 'e','n'};
				printf("\n===MURREE AND ISLAMABAD TOUR===\n");
				display_info(5,1,1,30000,7);
				b=0;
				int pr;
				printf("\nPress 1 if you want to  BOOK TICKET..");
				//PlaySound(TEXT("Code Voice 4.wav"),NULL,SND_ASYNC);
				scanf("%d", &pr);
				int cost,pers;
				printf("How many persons ticket do you want:");
				scanf("%d", &pers);
				cost=book_ticket(30000);
				int total=cost*pers;
				printf("\nYour Total Cost is %d", total);
				printf("\nPress 1 to print ticket...");
				//PlaySound(TEXT("Code Voice 5.wav"),NULL,SND_ASYNC);
				int p;
				scanf("%d", &p);
				system("CLS");
				if(p==1){
				       printf("\t\t==========\n\t\tDUA TOURISTS\n\t\t==========");
				       printf("\n\t\tPackage Name:KUMRAT VALLEY TOUR ");
				       printf("\n\t\tYour Name:%s", u);
				       print_ticket(pers,7,total,11,8);
				     }
				}
				break;
				default:
					printf("Please enter a Valid Character\n");
					system("PAUSE");
					continue;
				}
				}
		 case 5:;
		 return 0;	
			
			} 
	 }
    }
}

	

//display info function
 void display_info(int a, int b, int c, int d, int e){
printf("Hotel \t\t\t%d star", a);
if(b==1){
printf("\nTransport: \t\tAvailable");
}
else{
printf("\nTransport:\t\tNot Available");
}

if(c==1){
printf("\nLunch and Dinner: \tBoth are Available");
}
else{
printf("\nLunch and Dinner: \tOnly Dinner Available");
}
printf("\nPRICE PER PERSON:\t%d thousand", d);
printf("\nTotal Number of days: \t%d days",e);
}
//book ticket function
int book_ticket(int amount ){
int press,total,add;
printf("\nIf you want to avail Extra facilities press 1 else press any key:");
scanf("%d", &press);
if(press==1){
add=add_facil();
printf("\nYour extra charges are:%d", add);
total=amount+add;
printf("\nTotal %d", total);
}
else{
add=0;
total=amount+add;
}
return total;

}

//facility add function
int add_facil(){
/*Prices for extra facilities are same for every Locaiton
for Breakfast=600/day,tourist guide=500/day,AC Transport=400 per day*/
int a,b,c;
printf("\nDo you want to avail Breakfast(1 for Yes/0 for No): ");
printf("\nEXTRA CHARGES: RS.600  ");
scanf(" %d", &a);
printf("\nDo you want a tourist guide(1 for yes/0 for No): ");
printf("\nEXTRA CHARGES: RS.500  ");
scanf(" %d", &b);
printf("\nDo you want a AC Transport(1 for Yes/0 For No): ");
printf("\nEXTRA CHARGES: RS.400   ");
scanf(" %d", &c);
int extra=0;
if(a==1){
extra=extra+600;
}
else{
extra=extra;
}
if(b==1){
extra=extra+500;
}
else{
extra=extra;
}
if(c==1){
extra=extra+400;
}
else{
extra=extra;
}
return extra;
}
//print ticket function
int print_ticket( int b, int c, int d, int e, int f){
printf("\n\t\tTotal no. Of Persons:%d", b);
printf("\n\t\tTotal Tour Days: %d days", c);
printf("\n\t\tYour Total: %d PKR", d);
printf("\n\t\tDate of Departure: %dth JAN, 2022", e);
printf("\n\t\tTime of Departure: %d A.M", f);
printf("\n\t\tHave a safe and adventurous journey!");
//PlaySound(TEXT("Code Voice 6.wav"),NULL,SND_ASYNC);
printf("\n");
system("Pause");
system("CLS");
main();
}




