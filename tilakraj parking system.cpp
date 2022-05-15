#include <iostream>
#include<string.h>
using namespace std;
class parking{
    string vel;
    int hour;
    int price;
    public:
    parking(){
        cout<<"enter your vechical going to park=";
        cin>>vel;
        if(vel=="car"){
            cout<<"enter time to park=";
            cin>>hour;
            price=hour*10;
            cout<<price;
        }
        else if(vel=="bus"){
            cout<<"enter time to park(min/hour)=";
            cin>>hour;
            price=hour*20;
            cout<<price;
        }
        else if(vel=="truck"){
            cout<<"enter time to park(min/hour)=";
            cin>>hour;
            price=hour*20;
            cout<<price;
    }
    else if(vel=="cycle"){
            cout<<"enter time to park(min/hour)=";
            cin>>hour;
            price=hour*5;
            cout<<price;
    }
    else if(vel=="mtorcycle"){
            cout<<"enter time to park(min/hour)=";
            cin>>hour;
            price=hour*5;
            cout<<price;
    }
    else {
        price=hour*5;
        cout<<price;
    }
}
};
int main()
{
    parking p1;
    return 0;
}
