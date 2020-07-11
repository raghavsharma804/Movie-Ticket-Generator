#include<iostream>
using namespace std;
class movie
{
	public:
    char name[100];
    signed long long int phone;
    char email[100];
    public:void details()
    {
    cout<<"ENTER YOUR NAME: "<<endl;
    gets(name);
    cout<<"ENTER PHONE NUMBER (+91): "<<endl;
    cin>>phone;
    cout<<"ENTER EMAIL ID : "<<endl;
    cin>>email;
    }
    friend class movies;
    friend class tickets;
};//end of movie class
class movies
{
	public:
   int a,b,cho;
   char film[30];
public:void getm(movie t1)
    {
		cout<<"\n\t\t\t\t WELCOME TO bookmyshow.com!";	 																					//Menu for the user
		cout<<"\n\n\t\t\t\t 1. NOW SHOWING";
		cout<<"\n\t\t\t\t 2. EXIT? \n\n";
		cout<<"\t\t\t\tENTER 1 OR 2 :"<<"\t";
		cin>>cho;
			if(cho==1)
		{
             char film[30]="URI";
		}
		else if(cho==2)
		{
			 char film[30]="AQUAMAN";
		}
		else
		{
			char film[30]="KESARI";
		}
		switch(cho)    //switch statement for class movies
			{
		case 1:
		cout<<"\n\n\t\t\t\tAVAILABLE MOVIES ARE:";
			cout<<"\n\n\t\t\t\t 1. Uri:The Surgical Strike";
			cout<<"\n\n\t\t\t\t 2. Aquaman";
			cout<<"\n\n\t\t\t\t 3. Kesari";
			cout<<"\n\t\t\t\tENTER YOUR CHOICE :\t";
			cin>>a;
			switch(a)
	     	{
				case 1:
					cout<<"\n\t\t\t\tURI:THE SURGICAL STRIKE";
				 cout<<"\n\n\t\t\t\tSELECT TIMINGS:";
					cout<<"\n\t\t\t\t 1. 10:30 AM";
					cout<<"\n\t\t\t\t 2. 2:30 PM";
					cout<<"\n\t\t\t\t 3. 7 45 PM";
                    cout<<"\n\n\t\t\t\t PLEASE SELECT TIMINGS: \n\t\t\t\t\t\t\t";
					cin>>b;
					if(b!=1&&b!=2&&b!=3)
					{
						cout<<"INVALID TIMINGS SELECTED,TRY AGAIN \n";
						exit(0);
					}
		 		break;
				case 2:
					cout<<"\n\t\t\t\tAQUAMAN";
				    cout<<"\n\n\t\t\t\tSELECT TIMINGS:";
					cout<<"\n\t\t\t\t 1. 9:00 AM";
					cout<<"\n\t\t\t\t 2. 2:00 PM";
					cout<<"\n\t\t\t\t 3. 8:30 PM";
					cout<<"\n\t\t\t\t PLEASE SELECT TIMINGS: \n\t\t\t\t\t\t\t";
					cin>>b;
						if(b!=1&&b!=2&&b!=3)
					{
						cout<<"INVALID TIMINGS SELECTED,TRY AGAIN \n";
						exit(0);
					}
		    	break;
                    case 3:
					cout<<"\t\t\t\t\t\tKESARI";
			     	cout<<"\n\n\t\t\t\tSELECT TIMINGS:";
					cout<<"\n\t\t\t\t 1. 1:00 PM";
					cout<<"\n\t\t\t\t 2. 5:00 PM";
					cout<<"\n\t\t\t\t 3. 10:30 PM";
					cout<<"\n\t\t\t\t PLEASE SELECT TIMINGS:  \n\t\t\t\t\t\t\t";
					cin>>b;
						if(b!=1&&b!=2&&b!=3)
					{
						cout<<"INVALID TIMINGS SELECTED,TRY AGAIN \n";
						exit(0);
					}
				    break;
                default:
                cout<<"INVALID ENTRY ,TRY AGAIN"<<endl;
                exit(0);
                }
				break;
         case 2:
         cout<<"\n\t\t\tHAVE A GOOD DAY!";
         exit(0);
		break;
        default:
        cout<<"\n\t\t\t\t\t\t\t\tINVALID OPTION SELECTED TRY AGAIN ";
        exit(0);
       	break;
		}
		cout<<"\n\t\t\tPLEASE REPORT 30mins BEFORE THE SHOW TIMING SELECTED\n";
}
};//end of class movies
class tickets
{
	public:
    int c,n;
    long int amt;
    public:
        public:void gett(movie t1)
    {
    cout<<"\t\t\tENTER NUMBER OF SEATS :";
    cin>>n;
    cout<<"\n\n\n\t\t\t\tPLEASE SELECT A TICKET CLASS: "<<endl;
    cout<<"\n\t\t\t1.CLASSIC(Rs.150)"<<endl;
    cout<<"\n\t\t\t2.PREMIUM(Rs.200)"<<endl;
    cout<<"\t\t\tENTER THE TICKET CLASS (1 OR 2):";
    cin>>c;
    if(c==1)
    {
    cout<<"\n\t\tCLASSIC TICKET SELECTED"<<endl;
    amt=n*150;
    cout<<"\n\t\tYOUR FINAL AMOUNT IS: "<<amt<<endl;
    }
    else if(c==2)
    {
        cout<<"\n\t\tPREMIUM TICKET SELECTED "<<endl;
        amt=n*200;
        cout<<"\n\t\tFINAL AMOUNT IS: "<<amt<<endl;
    }
    else if(c==3)
    {
        cout<<"\n\t\t\tINVALID ENTRY"<<endl;
    }
    else
    {
    	cout<<"THIS MOVIE IS NOT AVAILABLE";
	}
}
};//end of class tickets
class creditcard
{
    public:
    long long int card1;
    int cvv1;
    public:
        void getd1()
        {
        	cout<<"\n\t\t\t\tYOU'VE OPTED FOR CREDIT CARD "<<endl;
            cout<<"\n\t\t\t\tPLEASE ENTER YOUR 16 DIGIT CARD NUMBER :"<<endl;
            cin>>card1;
            cout<<"\n\t\t\t\tENTER CVV : "<<endl;
            cin>>cvv1;
        }
};
class debitcard
{
    public:
    long long int card2;
    int cvv2;
    public:
        void getd2()
        {
        	cout<<"\n\t\t\t\tYOU'VE OPTED FOR DEBIT CARD "<<endl;
            cout<<"\n\t\t\t\tPLEASE ENTER YOUR 16 DIGIT CARD NUMBER :"<<endl;
            cin>>card2;
            cout<<"\n\t\t\t\tENTER CVV: "<<endl;
            cin>>cvv2;
        }
};
class cash
{
public:
    void getd3()
    {
    cout<<"\n\t\t\t\tYOUR PAYMENT WILL BE DONE AT THE SHOWTIME: ";
    }
};
class seats:public tickets
{
public:
    int x;
    void showdata2(tickets t5)
    {
    	cout<<"SEATS ARE "<<t5.n;
        cout<<"\n\t\t\t\tYOUR SEATS ARE: ";
        for(int x=1;x<=t5.n;x++)
        {
        	cout<<x<<ends;
		}
    }

};
class payment:public debitcard,public creditcard,public cash,public seats
{
    public:
        int p;
         void showdata1()
    {
        cout<<"\n\t\t\t\tPLEASE SELECT A PAYMENT MDOE:"<<endl;
        cout<<"\n\t\t\t\t1.CREDIT CARD"<<endl;
        cout<<"\n\t\t\t\t2.DEBIT CARD "<<endl;
        cout<<"\n\t\t\t\t3.BY CASH "<<endl;
        cout<<"\n\t\t\t\tSELECT MODE? :";
        cin>>p;
        switch(p)
        {
        case 1:
            getd1();
            cout<<"\n\t\t\t\tCREDIT CARD "<<endl;
            break;
        case 2:
            getd2();
            cout<<"\n\t\t\t\tDEBIT CARD "<<endl;
            break;
        case 3:
            getd3();
            cout<<"\n\t\t\t\tCASH "<<endl;
            break;

        default:
            cout<<"\n\t\t\t\tINVALID OPTION";}
    }
};
class bill:public movies,public seats,public movie
{
	public:
	public:void invoice(movie t1 ,movies m1)
	{
	cout<<"\n\n\t\t\\t\t\t\t\t\tBILL INVOICE\n";
	cout<<"your choice was"<<m1.cho;
	cout<<"\t\t\t\t\tMOVIE NAME IS:"<<m1.film;
	cout<<"\n\t\t\tNAME:"<<t1.name<<endl<<"\t\t\tPHONE NUMBER:"<<t1.phone<<endl;
	}
};
int main()
{
    movie t1;
    t1.details();
    movies m1;
    tickets t5;
    m1.getm(t1);
    t5.gett(t1);
    payment p1;
    p1.showdata1();
    p1.showdata2(t5);
    bill b1;
    b1.invoice(t1,m1);
    return 0;
}

