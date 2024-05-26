#include<iostream>

using namespace std;

int main(){

    /*Loops in C++:
    There are three types of loops in C++:
        1. For Loops
        2. Do loops
        3. Do-while Loops*/


    /* For Loops in C++ */
    int i = 1;
    cout<<i<<endl;
    i++;

    // Syntax For for loop:
    // for(initiallization;condition;updation)
    // {
    //      loop body(C++ Code)             
    // }
     
    for (int i = 0; i < 101; i++)
    {
        /* code */
        cout<<i<<endl;
    }

    // Example For Infinite for Loop
    //  for (int i = 0; 34 <= 101; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }


    /* While Loops in C++ */
    // Syntax:
    // while(condition)
    // {
    //    C++ Statements;
    // }

    // Printing 1 to 40 using while loop:
    int i =1;
    while(i<=40){
        cout<<i<<endl;
        i++;
    }

    // Example of infinite while loop
    // int i =1;
    // while(true){
    //     cout<<i<<endl;
    //     i++;
    // }

    /* do while Loops in C++ */
    // Syntax:
    // do
    // {
    //    C++ Statements;
    // }while(condition);

    // Printing 1 to 40 using do while loop:
    int i =1;
    do {
        cout<<i<<endl;
        i++;
    }while(i<=40);

    // Example of infinite do while loop
    // int i =1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(true)

    
    return 0;
}