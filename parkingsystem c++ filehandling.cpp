#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;
class parking{
    string vel;
    int hour;
    int price,number_plate;
    public:
    parking(){
        
        fstream out("parking.txt", ios::out);
        cout<<"enter your vechical going to park=";
        cin>>vel;
        if(vel=="car"){
            cout<<"enter time to park=";
            cin>>hour;
            cout<<"enter the number plate=";
            cin>>number_plate;
            price=hour*10;
            out<<"your vechical name is ="<<vel<<endl;
            out<<"you parking time ="<<hour<<endl;
            out<<"your number plate ="<<number_plate<<endl;
            out<<"your amount will be ="<<price<<endl;
        }
        else if(vel=="bus"){
            cout<<"enter time to park(min/hour)=";
            cin>>hour;
            cout<<"enter the number plate=";
            cin>>number_plate;
            price=hour*20;
            out<<"your vechical name is ="<<vel<<endl;
            out<<"you parking time ="<<hour<<endl;
            out<<"your number plate ="<<number_plate<<endl;
            out<<"your amount will be ="<<price<<endl;
        }
        else if(vel=="truck"){
            cout<<"enter time to park(min/hour)=";
            cin>>hour;
            cout<<"enter the number plate=";
            cin>>number_plate;
            price=hour*20;
           out<<"your vechical name is ="<<vel<<endl;
            out<<"you parking time ="<<hour<<endl;
            out<<"your number plate ="<<number_plate<<endl;
            out<<"your amount will be ="<<price<<endl;
    }
    else if(vel=="cycle"){
            cout<<"enter time to park(min/hour)=";
            cin>>hour;
            cout<<"enter the number plate=";
            cin>>number_plate;
            price=hour*5;
            out<<"your vechical name is ="<<vel<<endl;
            out<<"you parking time ="<<hour<<endl;
            out<<"your number plate ="<<number_plate<<endl;
            out<<"your amount will be ="<<price<<endl;
    }
    else if(vel=="mtorcycle"){
            cout<<"enter time to park(min/hour)=";
            cin>>hour;
            cout<<"enter the number plate=";
            cin>>number_plate;
            price=hour*5;
           out<<"your vechical name is ="<<vel<<endl;
            out<<"you parking time ="<<hour<<endl;
            out<<"your number plate ="<<number_plate<<endl;
            out<<"your amount will be ="<<price<<endl;
    }
    else {
        price=hour*5;
        cout<<"enter the number plate=";
            cin>>number_plate;
           out<<"your vechical name is ="<<vel<<endl;
            out<<"you parking time ="<<hour<<endl;
            out<<"your number plate ="<<number_plate<<endl;
            out<<"your amount will be ="<<price<<endl;
    }
}
};
int main()
{
    parking p1;
    return 0;
}

