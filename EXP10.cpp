#include<bits/stdc++.h>
using namespace std;

class month_error {
    public :
    string sho;
    month_error(string s)
    {
        sho = s;
    }
};
class day_error {
    public :
    string sho;
    day_error(string s)
    {
        sho = s;
    }
};

int main ()
{
    string s;   int month,date,x=1;  char ch;

    top:
    cout<<endl<<"Enter (Month/Date) :- ";
    cin>>s;

    stringstream ss(s);

    try 
    {
        ss>>month;  ss>>ch;
        if(ch!='/')  throw month_error("Invalid Month");
        else if (!(month>=1 && month<=12))  throw  month_error("Invalid Month");
        else  ch='*';    

        ss>>date;  ss>>ch;
        if(ch!='*')  throw day_error("Invalid day");
        else if (!(date>=1 && date<=31))  throw day_error("Invalid day");
        else 
        {
            if(month==1 && date<=31)  cout<<"January "<<date;
            else if(month==2 && date<=29)  cout<<"February "<<date;
            else if(month==3 && date<=31)  cout<<"March "<<date;
            else if(month==4 && date<=30)  cout<<"April "<<date;
            else if(month==5 && date<=31)  cout<<"May "<<date;
            else if(month==6 && date<=30)  cout<<"June "<<date;
            else if(month==7 && date<=31)  cout<<"July "<<date;
else if(month==8 && date<=31)  cout<<"August "<<date;
            else if(month==9 && date<=30)  cout<<"September "<<date;
            else if(month==10 && date<=31)  cout<<"October "<<date;
            else if(month==11 && date<=30)  cout<<"November "<<date;
            else if(month==12 && date<=31)  cout<<"December "<<date;
            else   cout<<"Invalid Date in Given Month";
        }
    }
    catch (month_error m)     { cout<<m.sho; }
    catch (day_error d)     { cout<<d.sho; }

    cout<<endl<<"\nWant to repeat ? (1.yes 2.no) : ";     cin>>x;
    if(x==1)    goto top;
    else
    return 0;
}
