#include<iostream>
using namespace std;


void swap( int &a, int &b){

    int t = a;
    a = b;
    b = t;


}

int main(){

    int a = 10;
    int b = 20;

    cout<<"value of a = " <<a<<endl<< " value of b = "<<b<< endl;

    swap(a,b);

    cout<<"value of a = " <<a<<endl<< " value of b = "<<b<< endl;

    return 0;
}