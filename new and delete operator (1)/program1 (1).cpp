#include<iostream>
using namespace std;

int main(){

    int *arr;
    int size;

    cout<<"Enter the size of the interger array: ";
    cin>>size;

    cout<<"Creating the array of size" <<size<<" "<<endl;

    arr = new int[size];

    cout<<"Dynamic allocation of memory for array arr is successful.";

    delete arr;
    
    return 0;
}