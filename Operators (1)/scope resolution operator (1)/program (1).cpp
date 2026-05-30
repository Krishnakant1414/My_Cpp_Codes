#include<iostream>
using namespace std;

int m = 10;  // global variable

int main(){

    int m = 20;  // declare again local to main

    {
        int k = m;
        int m = 30;  // redeclare m again
        

        cout <<"we are in inner block"<<endl;
        cout<< "k ="<< k <<endl;
        cout<< "m = "<< m <<endl;
        cout<< " ::m = "<< ::m <<endl;


    }

    cout <<"we are in outer block"<<endl;
    cout<<"m ="<< m <<endl;
    cout<<"::m ="<< ::m<<endl;
}