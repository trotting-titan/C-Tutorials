#include<iostream>

using namespace std;

int main(){

    // ********************BREAK********************
    for (int i = 0; i < 40; i++)
    {
        /* code */
        if (i==2){
            break;
        }
        cout<<i<<endl;
    }

    // ********************CONTINUE********************
     for (int i = 0; i < 40; i++)
    {
        /* code */
        if (i==2){
            continue;
        }
        cout<<i<<endl;
    }
    
    return 0;
}