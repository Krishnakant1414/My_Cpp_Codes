#include<iostream>
using namespace std;

string max(int x,int y){
    
    if(x>y){

        return "a is greater";
    }
    if(x<y){
        return "b is greater";
    }
    else{
        return "Both value are equal";
    }
}

int main(){

    int a = 100;
    int b = 100;

    string result = max(a,b);
    
    cout<<result<<endl;

    return 0;
}
