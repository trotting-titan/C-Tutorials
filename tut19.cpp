#include<iostream>

using namespace std;

int sum(int a , int b){
    cout<<"using func with two arguments"<<endl;
    return (a+b);
}

int sum(int a, int b, int c){
    cout<<"using func with three arguments"<<endl;
    return (a+b+c);
}

// calculate the volume of a cylinder
int volume(double r, int h){
    cout<<"vol of cylinder"<<endl;
    return(3.14 *r *r *h);
}

// calculate the value of a cube 
int volume(int a){
    cout<<"vol of cube"<<endl;
    return (a * a * a);
}

// calculate the volume of a cuboid
int volume(int l, int b, int h){
    cout<<"vol of cuboid"<<endl;
    return (l * b* h);
}

int main(){
    cout<<"the sum of 3,7 and 6 is "<<sum(3,7,6)<<endl; 
    cout<<"the sum of 3,7 and 6 is "<<sum(3,7,6)<<endl; 
    cout<<"the volume of cuboid of dimensions 3, 7 and 6 cm each is "<<volume(3,7,6)<<endl; 
    cout<<"the volume of cylinder of dimensions 3 and 6 cm each is "<<volume(3,6)<<endl;
    cout<<"the volume of cube of dimensions 3 cm is "<<volume(3)<<endl; 
    return 0;
}