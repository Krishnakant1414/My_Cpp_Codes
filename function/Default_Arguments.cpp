#include<iostream>
using namespace std;

float ammount(float principle, float time, float rate = 6.5){

    return (principle+(principle * rate * time) / 100);
}

int main(){

    float principle;
    float time;

    cout<<"Enter the principle ammount"<<endl;
    cin>>principle;
    cout<<"Enter the year"<<endl;
    cin>>time;


    cout<<"principle ammount is ="<<principle<<endl;
    cout<<"final ammount is ="<<ammount(principle,time)<<endl;

    return 0;
}