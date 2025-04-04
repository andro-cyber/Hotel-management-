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
class employee:public info
{
    public:
    int experience;
    string qualification ;
    int no_of_skill;
    string skill;
    string intrest;
    string language;
    string certification;
    void info ()
    {
        cout<<name<<endl;
        cout<<gardian_name<<endl;
        cout<<age<<endl;
        cout<<address<<endl;
        cout<<adhar<<endl;
        cout<<phone_number<<endl;
        cout<<experience<<endl;
        cout<<qualification<<endl;
        cout<<skill<<endl;
        cout<<intrest<<endl;
        cout<<language<<endl;
        cout<<certification<<endl;
    }
};
int main()
{
    employee e1;
    cout<<"Name of the employee:";
    cin>>e1.name;
    cout<<"Gardiuan name of the employee:";
    cin>>e1.gardian_name;
    cout<<"Age of the employee:";
    cin>>e1.age;
    if (e1.age<18)
    {
        cout<<"Sorry!We can not give job to the minor";
        return 0;
    }
    cout<<"Permanent address of the employee:";
    cin>>e1.address;
    cout<<"Adhar number of the employee:";
    cin>>e1.adhar;
    if (strlen(e1.adhar)!=12)
    {
        cout<<"Enter the valid  adhar number"<<endl;
        return 0;
    }
    cout<<"Enter the phone number:";
    cin>>e1.phone_number;
    if(strlen(e1.phone_number)!=10)
    {
        cout<<"Please!!Enter the valid phone number";
        return 0;
    }
    cout<<"Qualification of the employee:";
    cin>>e1.qualification;
    
    
    cout<<" Number of skills of the employees:";
    cin>>e1.no_of_skill;
    if (e1.no_of_skill!=3)
    {
        cout<<"You lack the number of skill"<<endl;
        cout<<"You should have at least 3 skills"<<endl;
        return 0;
    }
    cout<<"Experience of the employee:";
    cin>>e1.experience;
    if (e1.experience!=1)
    {
        cout<<"You should have minimum experience of 1 year";
        return 0;
    }
    cout<<"Skills of the employees:";
    cin>>e1.skill;
    cout<<"Intrest of the employee:";
    cin>>e1.intrest;
    cout<<"Language known by the employee:";
    cin>>e1.language;
    string l="English";
    if (e1.language!=l)
    {
        cout<<"English is mandatory language!!";
        return 0;
    }
    cout<<"Certificate holded by the employee:";
    cin>>e1.certification;
}