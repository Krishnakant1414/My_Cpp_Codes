#include<iostream>
using namespace std;

class item{

    int number;
    int cost;

    public:
        void getdata(int a, float b); // prototype declaration.

        //function define inside calss
        void putdata(void){
            cout<<"number"<<number<<"\n";
            cout<<"cost"<<cost<<"\n";

        }
};

void item :: getdata(int a,float b){ // used membershhip lebel
    number = a; // private variable
    cost = b;   //directly used
}

int main(){

    item x;
    cout<<"\nobject x"<<"\n";

    x.getdata(100,200);
    x.putdata();

    item y;  // another object
    cout<<"\nobject x"<<"\n";
    y.getdata(100,150);
    y.putdata();

    return 0;
}


