#include<iostream>
using namespace std;

int& max (int &x,int &y){

    if(x>y)
        return x;
    else
        return y;
}

int main(){


    int x = 10;
    int y = 20;

    int &result = max(x,y) = -1;

    cout<<result<<endl;


    return 0;
}