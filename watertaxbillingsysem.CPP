#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>

class ConsumerDetails{
		char consumerNameFirst[25];
		char consumerNameMiddle[25];
		char consumerNameLast[25];

		char consumerAddressHouseNo[25];
		char consumerAddressColonyName[25];
		char consumerAddressAreaName[25];
		char consumerAddressDistrict[25];
		char consumerAddressState[25];
		char consumerAddressPincode[7];

		char consumerContactNo[11];

		int  consumerUses;
		int  totalCost;
	//////////////////////////////////////////////////////////////
	public:
		void getConsumerName();
		void getConsumerAddress();
		void getConsumerContactNo();
		void getConsumerUses();
		//////////////////////////////////////////////////////////
		void putConsumerName();
		void putConsumerAddress();
		void putConsumerContactNo();
		void putConsumerUses();
		void putTotalBill();
		//////////////////////////////////////////////////////////
		void totalBill();
		int  retConsumerUses();
		int  retTotalBill();
};

///////////////////////////////////////////////////////////////////
void ConsumerDetails::getConsumerName(){
			cout<<"\nEnter the Consumer's First Name: ";
			gets(consumerNameFirst);
			cout<<"\nEnter the Consumer's Middle Name: ";
			gets(consumerNameMiddle);
			cout<<"\nEnter the Consumer's Last Name: ";
			gets(consumerNameLast);

		};
void ConsumerDetails::getConsumerAddress(){
			cout<<"\nEnter the Consumer's House Number: ";
			gets(consumerAddressHouseNo);
			cout<<"\nEnter the Consumer's Colony Name/Block Number: ";
			gets(consumerAddressColonyName);
			cout<<"\nEnter the Consumer's Area Name: ";
			gets(consumerAddressAreaName);
			cout<<"\nEnter the Consumer's District: ";
			gets(consumerAddressDistrict);
			cout<<"\nEnter the Consumer's State: ";
			gets(consumerAddressState);
			cout<<"\nEnter the Consumer's Pincode: ";
			gets(consumerAddressPincode);
		};
void ConsumerDetails::getConsumerContactNo(){
			cout<<"\nEnter the 10-Digit Consumer Mobile Number: ";
			gets(consumerContactNo);
		};
void ConsumerDetails::getConsumerUses(){
			cout<<"\nEnter much litres of water Consumer have consumed: ";
			cin>>consumerUses;
};
void ConsumerDetails::totalBill(){
			totalCost=(consumerUses)*5;
			cout<<totalCost;
};
//////////////////////////////////////////////////////////////////
void ConsumerDetails::putConsumerName(){
							for(int i=0;consumerNameFirst[i]!='\0';i++){
							cout<<consumerNameFirst[i];
							}
							cout<<" ";
							for(int j=0;consumerNameMiddle[j]!='\0';j++){
							cout<<consumerNameMiddle[j];
							}
							cout<<" ";
							for(int k=0;consumerNameLast[k]!='\0';k++){
							cout<<consumerNameLast[k];
							}
						};
void ConsumerDetails::putConsumerAddress(){
							int i,j,k,l,m;
							for(i=0;consumerAddressHouseNo[i]!='\0';i++){
								cout<<consumerAddressHouseNo[i];
							}
							if(i>0)
							cout<<", ";
							for(j=0;consumerAddressColonyName[j]!='\0';j++){
							cout<<consumerAddressColonyName[j];
							}
							if(j>0)
							cout<<", ";
							for(k=0;consumerAddressAreaName[k]!='\0';k++){
							cout<<consumerAddressAreaName[k];
							}
							if(k>0)
							cout<<", ";
							for(l=0;consumerAddressDistrict[l]!='\0';l++){
							cout<<consumerAddressDistrict[l];
							}
							if(l>0)
							cout<<", ";
							for(m=0;consumerAddressState[m]!='\0';m++){
							cout<<consumerAddressState[m];
							}
							if(m>0)
							cout<<", ";
							for(int n=0;consumerAddressPincode[n]!='\0';n++){
							if(n==0)cout<<"Pin:";
							cout<<consumerAddressPincode[n];
							}

						};
void ConsumerDetails::putConsumerContactNo(){
						for(int i=0;consumerContactNo[i]!='\0';i++){
							cout<<consumerContactNo[i];
						}
					  };
void ConsumerDetails::putConsumerUses(){
					cout<<"\nThe consumer have consumed ";
					textcolor(4);
					printf("%d",consumerUses);
					textcolor(15);
					cout<<" Litres of water.";
};
void ConsumerDetails::putTotalBill(){
					cout<<"\nThe Net Bill for the used water is: Rs. ";
					totalBill();
}
///////////////////////////////////////////////////////////////////
int ConsumerDetails::retConsumerUses(){
					return consumerUses;
}
int ConsumerDetails::retTotalBill(){
					return ((consumerUses)*5);
}

///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
int main(){
	int press=0;
	//int driver = DETECT, mode;
	//initgraph(&driver,&mode,"C:\\TURBOC3\\BGI");
	int n,s=0;
	char c, mainScreen;
	ConsumerDetails *ptr;
	do{	clrscr();
		cout<<"\n                        ***********************************";
		cout<<"\n                              WATER TAX BILLING SYSTEM     ";
		cout<<"\n                        ***********************************";
		cout<<"\n";
		cout<<"\nPRESS 1: To Add the Consumer Details.";
		cout<<"\nPRESS 2: To Edit the Consumer Details.";
		cout<<"\nPRESS 3: To Delete the Consumer Details.";
		cout<<"\nPRESS 4: To Display the Details of the Consumer.";
		cout<<"\nPRESS 5: To Exit the Program.";
		press=getch();
		if(press==53)
			break;
			switch(press){
				case 49:////////ADD SECTION///////
						clrscr();
						cout<<"\n                    Welcome to the ADD CONSUMER DETAILS Section";
						cout<<"\n                    *******************************************";
						cout<<"\n";
						cout<<"\nTo continue press any key or To go to the main screen press the ";textcolor(4);cprintf("ESC");textcolor(15);cout<<" key.";
						mainScreen=getch();
						if(mainScreen==27){
						clrscr();
						break;
						}
						else{
						clrscr();
						cout<<"\nHow many of Consumer Details do you want to add? ";
						cin>>n;
						clrscr();
						ptr = new ConsumerDetails[n];
						for(int i=0;i<n;i++){
							ptr[i].getConsumerName();
							ptr[i].getConsumerAddress();
							ptr[i].getConsumerContactNo();
							ptr[i].getConsumerUses();
							clrscr();
						}
						}
						break;
				case 50://////EDIT SECTION///////
						clrscr();
						cout<<"\n                    Welcome to the EDIT CONSUMER DETAILS Section";
						cout<<"\n                    *******************************************";
						cout<<"\n";
						cout<<"\nTo continue press any key or To go to the main screen press the ";textcolor(4);cprintf("ESC");textcolor(15);cout<<" key. ";
						mainScreen=getch();
						if(mainScreen==27){
						clrscr();
						break;
						}
						else{
						clrscr();
						cout<<"\nWhich Consumer's Details do you want to change. ";
						cin>>s;
						s--;
						clrscr();
						cout<<"\nThe Details of the Consumer as per the record is as follows: ";
						cout<<"\n";
						textcolor(4);
						cprintf("SERIAL NO.");
						textcolor(15);
						cout<<"\n";
						cout<<s+1;
						cout<<"\n";
						textcolor(4);
						cprintf("NAME");
						textcolor(15);
						cout<<"\n";
						ptr[s].putConsumerName();
						cout<<"\n";
						textcolor(4);
						cprintf("ADDRESS");
						textcolor(15);
						cout<<"\n";
						ptr[s].putConsumerAddress();
						cout<<"\n";
						textcolor(4);
						cprintf("MOBILE NUMBER");
						textcolor(15);
						cout<<"\n";
						ptr[s].putConsumerContactNo();
						cout<<"\n";
						textcolor(4);
						cprintf("CONSUMED WATER");
						textcolor(15);
						ptr[s].putConsumerUses();
						cout<<"\n";
						textcolor(4);
						cprintf("TOTAL BILL");
						textcolor(15);
						ptr[s].putTotalBill();
						cout<<"\n";
						do{
						cout<<"\nPRESS 1: To Change the Consumer Name.";
						cout<<"\nPRESS 2: To Change the Consumer Address.";
						cout<<"\nPRESS 3: To Change the Consumer Contact Number.";
						cout<<"\nPRESS 4: To Change the Consumer Uses.";
						cout<<"\nPRESS 5: To exit press ESC key.";
						c=getch();
						switch(c){
							case 49:clrscr();
									ptr[s].getConsumerName();
									clrscr();
									break;
							case 50:clrscr();
									ptr[s].getConsumerAddress();
									clrscr();
									break;
							case 51:clrscr();
									ptr[s].getConsumerContactNo();
									clrscr();
									break;
							case 52:clrscr();
									ptr[s].getConsumerUses();
									clrscr();
									break;
							case 53:
									break;
							default:if(c!=27){
									clrscr();
									cout<<"\nPlease make selection through 1 to 6.";
									sound(500);
									delay(500);
									nosound();
									clrscr();
									}
									break;
								}
							}while(c!=27);
						}
						break;
				case 51://////DELETE SECTION///////
						clrscr();
						cout<<"\n                    Welcome to the DELETE CONSUMER DETAILS Section";
						cout<<"\n                    *******************************************";
						cout<<"\n";
						cout<<"\nTo continue press any key or To go to the main screen press the ";textcolor(4);cprintf("ESC");textcolor(15);cout<<" key.";
						mainScreen=getch();
						if(mainScreen==27){
						clrscr();
						break;
						}
						else{ char delExit;
							do{	int temp=0;
								clrscr();
								cout<<"\nList of total Consumers is as follows: ";
								cout<<"\n\n";
								for(int i=0;i<n;i++){
									cout<<i+1<<". ";
									ptr[i].putConsumerName();cout<<" ";
									ptr[i].putConsumerAddress();cout<<" ";
									ptr[i].putConsumerContactNo();cout<<" ";
									cout<<ptr[i].retConsumerUses();cout<<" ";
									cout<<ptr[i].retTotalBill();cout<<"\n";
									temp=i;
								}
								temp++;
								cout<<"\nEnter the Serial No. to delete the Consumer Details related to it. ";
								int d=0;
								cin>>d;
								if(d>=1&&d<=temp){
								int p=d;
								d--;
								for(;d<=n;d++)
									ptr[d]=ptr[d+1];
									n--;
									cout<<"\nThe Consumer Details at Serial Number ";cout<<p;cout<<" has been deleted.";
									if(n==0)
									break;
									cout<<"\n\nDo you want to delete another Consumer Details? \nTo Delete press any key to exit press";textcolor(4);cprintf(" ESC");textcolor(15);cout<<" key. ";
									delExit=getch();
								}
								else{
									cout<<"\n\nPlese Enter between ";cout<<"1 ";cout<<"& ";cout<<temp;cout<<". ";
									delay(1000);
								}
							}while(delExit!=27);


						}
						break;
				case 52:clrscr();
						cout<<"\n                                  LIST OF CONSUMERS        ";
						cout<<"\n                        ***********************************";
						cout<<"\n";
						for(int i=0;i<n;i++){
						textcolor(4);
						cprintf("SERIAL NO.");
						textcolor(15);
						cout<<"\n";
						cout<<i+1;
						cout<<"\n";
						textcolor(4);
						cprintf("NAME");
						textcolor(15);
						cout<<"\n";
						ptr[i].putConsumerName();
						cout<<"\n";
						textcolor(4);
						cprintf("ADDRESS");
						textcolor(15);
						cout<<"\n";
						ptr[i].putConsumerAddress();
						cout<<"\n";
						textcolor(4);
						cprintf("MOBILE NUMBER");
						textcolor(15);
						cout<<"\n";
						ptr[i].putConsumerContactNo();
						cout<<"\n";
						textcolor(4);
						cprintf("CONSUMED WATER");
						textcolor(15);
						ptr[i].putConsumerUses();
						cout<<"\n";
						textcolor(4);
						cprintf("TOTAL BILL");
						textcolor(15);
						ptr[i].putTotalBill();
						cout<<"\n";
						cout<<"\nPress any key to see next Consumer Details.";
						cout<<"\n";
						getch();
						clrscr();
						}
						break;
				default:cout<<"\n";
						textcolor(4);
						cprintf("\nPlease make selection through 1 To 5.");
						cout<<"\n";
						sound(500);
						delay(200);
						nosound();
						textcolor(15);
						delay(2000);
						clrscr();
						break;
			}
	}while(press != 53);

	return 0;
}