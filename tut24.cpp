#include<iostream>

using namespace std;

class Employee
{
    int id;
    static int count;

    public: 
        void setData(void){
            cout<<"enter the id"<<endl;
            cin>>id;
            count++;
        }
    void getData(void){
        cout<<"the id of this employee is "<<id<<" and this is employee number "<<count<<endl;
    }

    static void getCount(void){
        // cout<<id; //throws an error
        cout<<"the value of count is "<<count<<endl;
    }
};

// count is the static data member of class employee
int Employee :: count;  // default value is 0

int main(){
    Employee harry, rohan, lovish;
    //harry.id = 1;
    //harry.count = 1; // connot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee :: getCount();

    rohan.setData();
    rohan.getData();
    Employee :: getCount();

    lovish.setData();
    lovish.getData();
    Employee :: getCount(); 
    
    return 0;
}