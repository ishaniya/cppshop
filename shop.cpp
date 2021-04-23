#include<iostream>
#include<conio.h>
#include<string> //arjinder.20858@lpu.co.in
#include<math.h>
#include<fstream>
#include<stdlib.h>
using namespace std;

fstream f1;

void add();
void display();
void del();
void update();
void give();
void custo();
void feedback();
void accs();


class customer
{
	public:
	int uniq;
	float bill;
	char b;
	char name[20],comp[20],model[20],issue[50];
	long long int num;
	void in()
	{
	cout<<"\nPlease Enter The Personal Details First :\n";
	cout<<"Name : ";
	cin.ignore();
	gets(name);
	cout<<"Contact Number : ";
	cin>>num;
	cout<<"Laptop Company : ";
	cin.ignore();
	gets(comp);
	cout<<"Model Number : ";
	cin.ignore();
	gets(model);
	cout<<"Unique ID : ";
	cin>>uniq;
	cout<<"Your Bill Is : ";
	cin>>bill;

	}
	
	void out()
	{
		cout<<"\nName : "<<name;
		cout<<"\nContact Number : "<<num;
		cout<<"\nLaptop Company : "<<comp;
		cout<<"\nModel Number : "<<model;
		cout<<"\nUnique ID : "<<uniq;
		cout<<"\nBill : "<<bill;
	}

}c;

main()
{
	system("cls");
	char b;
	int o;
	char choice,choice1,panel;
	cout<<"\t\t\t\t\t*****\tChukChuk Laptop Store\t*****"<<endl<<endl;
	cout<<"\t\t\t\t\tWelcome To ChukChuk Laptop Repair Store."<<endl;
	cout<<"Choose The Panel You Want to Access : ";
	n:
	cout<<"\n1.Admin Panel.";
	cout<<"\n2.Customer Panel.";
	cout<<"\nEnter : ";
	cin>>panel;
	system("cls");
	switch(panel)
	{
		case '1':
					u:
				cout<<"Select The Service You want to avail :"<<endl<<endl;
				cout<<"1.Enter Details For a New Laptop."<<endl;
				cout<<"2.Show The Previoous Entry."<<endl;
				cout<<"3.Delete An Old Entry / Comleted Task."<<endl;
				cout<<"4.Update An Entry."<<endl;
				cout<<"5.Exit";
				cout<<endl<<"Enter : ";
				cin>>choice1;
				system("cls");
				switch(choice1)
				{
					case '1':
							give();
							add();
							break;
							
					case '2':
							display();
							break;
							
					case '3':
							del();
							break;
							
					case '4':
							update();
							break;
							
					case '5':goto ex;
							break;
							
					default:
							cout<<"Invalid choice !!"<<endl<<"Enter a Correct Choice.\n";
							goto u;
				}
				break;
				
				
		case '2':custo();
				break;
		default:
				cout<<"Invalid choice !!"<<endl<<"Enter a Correct Choice.\n";
				goto n;
	}
	ex:
		cout<<endl<<"Thank you For Coming In!!\nHave a GREAT DAY!!!";			
}

void custo()
{
				char choice;
				cout<<"Select The Service You want to avail :"<<endl<<endl;
				cout<<"1.Give Laptop for repair."<<endl;
				cout<<"2.Show Details of your Laptop."<<endl;
				cout<<"3.Buy Accessories for Laptop."<<endl;
				cout<<"4.Leave a Feedback."<<endl;
				cout<<"5.Exit."<<endl;
				a:
				cout<<endl<<"Enter : ";
				cin>>choice;
				system("cls");
				switch(choice)
				{
					case '1':give();
							add();
							break;
				
				
					case '2':display();
							break;
				
				
					case '3':
							accs();
							break;
				
				
					case '4':
							feedback();
							break;
				
					case '5':cout<<"Thank you For Coming In!!\nHave a GREAT DAY!!!";
							exit(0);
							break;
					default:
							cout<<"Invalid choice !!"<<endl<<"Enter a Correct Choice.";
							goto a;
				}
}

void give()
{	
	char b;
	int o;
	char choice,choice1,panel;
	float bil,l1,l2,l3,l4,l5,l6,l7,l8,l9,l10;
	h:
	g:
	cout<<"Whats The Fault In The Laptop :\n";
	cout<<"1.Battery Issue.";
	cout<<"\n2.Windows Not Booting Up.";
	cout<<"\n3.Overheating.";
	cout<<"\n4.Software Issue.";
	cout<<"\n5.BIOS Problem.";
	cout<<"\n6.Hardware Issue.";
	cout<<"\n7.Keyboard / Touch Pad not Working.";
	cout<<"\n8.LCD Blinking.";
	cout<<"\n9.Physical Damage.";
	cout<<"\n10.Custom Issue. ( Input Your Own Issue ) : ";
	cin>>o;
	system("cls");
	switch(o)
	{
		case 1:cout<<"A New Battery Will be Inserted.";
				l1=2100;
				bil=bil+l1;
				break;
		
		case 2:cout<<"Windows 10 Will be Installed.";
				l2=300;
				bil=bil+l2;
				break;
		
		case 3:cout<<"Laptop will be cleaned and Cooling paste will be applied.";
				l3=2500;
				bil=bil+l3;
				break;
		
		case 4:cout<<"Updated Version of Softwares will be Installed and Drivers will be Upgraded.";
				l4=500;
				bil=bil+l4;
				break;
				
		case 5:cout<<"BIOS Will be Updated to the latest ones.";
				l5=200;
				bil=bil+l5;
				break;
		
		case 6:cout<<"Hardware Issue will be examined and will be told to you and will probably be resolved.";
				cout<<endl<<"Your Bill will be told to you at the same time as of Pick-UP.";
				l6=0;
				bil=bil+l6;
				break;
		
		case 7:cout<<"A New pair of touch pad and keyboard will be inserted.";
				l7=3500;
				bil=bil+l7;
				break;
				
		case 8:cout<<"A New LCD will be replaced";
				l8=4500;
				bil=bil+l8;
				break;
				
		case 9:cout<<"The physical damage will be examined and Will be resolved.";
				cout<<endl<<"Your Bill will be told to you at the same time as of Pick-UP.";
				l9=0;
				bil=bil+l9;
				break;
				
		case 10:cout<<"The Issue wil be read by out Specialists and will probably be resolved.";
				cout<<endl<<"Your Bill will be told to you at the same time as of Pick-UP.";
				l10=0;
				bil=bil+l10;
				break;
				
		default:
				cout<<"Invalid Choice!!"<<endl<<"Try again";
				goto h;
			
	}
	cin.ignore();
	cout<<"\nWant to continue ?\nY/N\n";
	cin>>b;
	system("cls");
	if(b=='y'||b=='Y')
	{
		goto h;
	}
	else
	{
		cout<<endl<<"You May Collect Your Laptop in 3 Days.";
		cout<<endl<<"Your Bill is :"<<bil;
		cout<<endl<<"Thank You For Your Trust in Us With Your Laptop!!";
	}
	
}

void add()              
{
	f1.open("data.dat",ios::app| ios::binary);
	c.in();
	f1.write((char*)&c, sizeof(c));
	f1.close();
}

void display()
{
	int id;
	cout<<"Enter ID that you want to display:";
	cin>>id;
	f1.open("data.dat",ios::in| ios::binary);
	if(!f1)
	{
		cout<<"not found";
		exit(0);
	}
	else
	{
		f1.read((char*)&c, sizeof(c));
		while(!f1.eof())
		{
			if(id==(c.uniq))
			{
				c.out();
				getch();
			}
			else
			{
				cout<<"ID not found.";
			}
			f1.read((char*)&c, sizeof(c));
		}
	}
	f1.close();
}

void del()
{
	int id;
	cout<<"Enter ID that you want deleted :";
	cin>>id;
	ofstream x;
	x.open("temp.dat",ios::out|ios::binary);
	f1.open("data.dat",ios::in| ios::binary);
	if(!f1)
	{
		cout<<"not found";
		exit(0);
	}
	else
	{
		f1.read((char*)&c, sizeof(c));
		while(!f1.eof())
		{
			if(id==c.uniq)
			{
				x.write((char*)&c, sizeof(c));
			}
			else
			{
				 cout<<"Not Found!!!"<<endl;
			}
			f1.read((char*)&c, sizeof(c));
		}
	}
	x.close();
	f1.close();
	remove("data.dat");
	rename("temp.dat", "data.dat");
}

void update()
{
	int id;
	cout<<"Enter ID that you want to update:";
	cin>>id;
	f1.open("data.dat",ios::in| ios::out|ios::binary);
	if(!f1)
	{
		cout<<"not found";
		exit(0);
	}
	else
	{
		f1.read((char*)&c, sizeof(c));
		while(!f1.eof())
		{
			if(id==c.uniq)
			{
				f1.seekg(0,ios::cur);
				cout<<"Enter New Record.."<<endl;
				c.in();
				f1.seekp(f1.tellg() - sizeof(c));
				f1.write((char*)&c, sizeof(c));
			}
			else
			{
				 cout<<"Not Found!!"<<endl;
			}
			f1.read((char*)&c, sizeof(c));
		}
	}
	f1.close();
}

void feedback()
{
	string f1;
	int rate;
	cout<<endl<<"Please Leave your Graceful words for US. They Are Important to US :"<<endl;
	cin.ignore();
	getline(cin,f1);
	cout<<"Thank you for your time and Kind Words.";
	t:
	cout<<endl<<"Rate Us out of 5 Stars :";
	cin>>rate;
	if(rate>=0 && rate<=5)
	{
		cout<<"Thanks For Your Rating."<<endl<<"You Rated : "<<rate<<" / 5";
	}
	else
	{
		cout<<"Umm...\nThats not a Valid Rating.\nWant to try once More??";
		goto t;
	}
}

void accs()
{
	float bill,p1,p2,p3,p4,p5,p6,p7;
	char x,y;
	string serial,model;
	cout<<"Please Input The deatils of the Laptop :\nCompany :";
	cin.ignore();
	getline(cin,serial);
	cout<<"Model No:";
	cin.ignore();
	getline(cin,model);
	cout<<endl<<"Congratulations!! We have most of the accessories available for you\n";
	cout<<"We Have a Wide Range of Products available with US.\nChoose What you want to Buy:";
	p:
	q:
	cout<<"\n1.Charger\n2.Mouse\n3.Keyboard\n4.Cooling Pads\n5.Mouse Pad\n6.Headphones\n7.Speakers";
	cout<<endl<<"Please Enter Your Choice :";
	cin>>x;
	system("cls");
	switch(x)
	{
		case '1':cout<<"ERD Charger With One Year Warranty!\nPrice : Rs.1500";
				p1=1500;
				bill=bill+p1;
				break;
				
		case '2':cout<<"Razer Mouse With One Year Warranty!\nPrice : Rs.150";
				p2=150;
				bill=bill+p2;
				break;
			
	    case '3':cout<<"Corsair Keyboard With One Year Warranty!\nPrice : Rs.300";
				p3=300;
				bill=bill+p3;
				break;
	    
	    case '4':cout<<"CM Storm cooling Pad With One Year Warranty!\nPrice : Rs.800";
				p4=800;
				bill=bill+p4;
				break;
	    	
		case '5':cout<<"SteelSeries MousePad With One Year Warranty!\nPrice : Rs.500";
				p5=500;
				bill=bill+p5;
				break;
			
		case '6':cout<<"Bose Headphones With One Year Warranty!\nPrice : Rs.1200";
				p6=1200;
				bill=bill+p6;
				break;
			
		case '7':cout<<"JBL Speakers With One Year Warranty!\nPrice : Rs.1800";
				p7=1800;
				bill=bill+p7;
				break;
			
		default:
					cout<<"Invalid Choice!!"<<endl<<"Try again";
					goto p;
	}
	cout<<"\nWant to continue Shopping ?\nY/N\n";
	cin>>y;
	if(y=='y'||y=='Y')
	{
		goto q;
	}
	else
	{
		cout<<endl<<"Your Bill is :"<<bill;
		cout<<endl<<"Thank You for Your Shopping !!";
	}
}

	
