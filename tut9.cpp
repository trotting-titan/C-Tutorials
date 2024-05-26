#include<iostream>

using namespace std;

int main(){
    // cout<<"this is tutorial 9";
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;

    // ********************Selection Control Structure: if/else-if/else Ladder*******************
    
    if((age<18) && (age>0)){
        cout<<"you cannot come to my party"<<endl;
    }
    else if(age==18){
        cout<<"you are a kid and you will get a kid pass to the party"<<endl;
    }
    else if(age<1){
        cout<<"you are not yet born"<<endl;
    }
    else{
        cout<<"you can come to the party"<<endl;
    }

    // ********************Selection Control Structure: Switch Case Statements************************

    switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl;
        break;
    
    case 22:
        cout<<"you are 22"<<endl;
        break;

    case 2:
        cout<<"you are 2"<<endl;
        break;

    default:
    cout<<"no special case found"<<endl;
        break;
    }

    cout<<"you are done with switch case"<<endl;


    return 0;
}