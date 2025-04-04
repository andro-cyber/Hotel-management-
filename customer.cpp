#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;
class info
{
    public:
    string name;
    string gardian_name;
    int age;
    string address;
    char adhar[13];
    char phone_number[10];

};
class room
{
    public:
    int no_of_room;
    int alloted_room;
    int left_room=no_of_room-alloted_room;
    int price;
    void get_info()
    {
        cout<<no_of_room<<endl;
        cout<<alloted_room<<endl;
        cout<<left_room<<endl;
        cout<<price<<endl;
    }

};
class customer:public info ,room
{
    public:
    int room_no;
    int days;
    string order;
    int no_of_order;
    float price_order;
    int total_price=(price*days)+(no_of_order*price_order);
    void get_info()
    {
        cout<<name<<endl;
        cout<<gardian_name<<endl;
        cout<<age<<endl;
        cout<<address<<endl;
        cout<<adhar<<endl;
        cout<<days<<endl;
        cout<<phone_number<<endl;
        cout<<room_no<<endl;
        cout<<total_price<<endl;
        cout<<order<<endl;
        cout<<no_of_order<<endl;
        cout<<price_order<<endl;
    }
};
int main()
{
    customer c1;
    cout<<"Name of the customer";
    cin>>c1.name;
    cout<<"Gardiuan name of the customer:";
    cin>>c1.gardian_name;
    cout<<"Age of the customer:";
    cin>>c1.age;
    if (c1.age<18)
    {
        cout<<"Sorry!We can not give allot the room  to the minor";
        return 0;
    }
    cout<<"Permanent address of the customer:";
    cin>>c1.address;
    cout<<"Adhar number of the customer:";
    cin>>c1.adhar;
    if (strlen(c1.adhar)!=12)
    {
        cout<<"Enter the valid  adhar number"<<endl;
        return 0;
    }
    cout<<"Enter the phone number:";
    cin>>c1.phone_number;
    if( strlen(c1.phone_number)!=10)
    {
        cout<<"Please!!Enter the valid phone number";
        return 0;
    }
    cout<<"Enter the room number alloted to the customer:";
    cin>>c1.room_no;
    cout<<"Number of days customer will stay:";
    cin>>c1.days;
    cout<<"Order done by thye customer:";
    cin>>c1.order;
    cout<<"Number of order placed:";
    cin>>c1.no_of_order;
    cout<<"Price of the order:";
    cin>>c1.price_order;
    cout<<"Total price of the stay: ";
    cin>>c1.total_price;
}