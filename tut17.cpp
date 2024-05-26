#include<iostream>

using namespace std;

inline int product(int a , int b){
    // not recommende to use below lines with inline functions
    // static int c = 0; // this executes only once.
    // c = c+1;  // next time this function is run, the value of c will be retained
    return a*b;
}

int moneyRecieved (int currentMoney, float factor = 1.04){
    return currentMoney * factor;
}

// int strlen(const char *p){

// }

int main(){
    // int a ,b;
    // cout<<"enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    int money= 100000;
    cout<<"if you have "<<money<<" rs in your account, you will recieve "<<moneyRecieved(money)<<" rs after 1 year"<<endl;
    cout<<"For VIP: if you have "<<money<<" rs in your account, you will recieve "<<moneyRecieved(money, 1.1)<<" rs after 1 year";  
    return 0;
}