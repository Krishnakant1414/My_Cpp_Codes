/*One of the objectives of using functions in a program is to save some memory spaces
 which becomes appreciable when a function is liely to be alled many times. 
however every time a function is called, it takes a lot of extra time in executing a series
of instructions for tasks such as jumping to the funciton, saving registers, pushing 
argumentsinto the stack, and returnin to the callling function . When a function is small a 
substantial precentage of execution time may be spent in such overheads.*/

#include<iostream>
using namespace std;

inline float mul(float a,float b){ 
    return (a*b);
}

inline float div(float a,float b){
    return(a/b);
}

int main(){

    float a = 10;
    float b = 20;
    
    cout<<mul(a,b)<<endl;
    cout<<div(a,b)<<endl;

    return 0;
}