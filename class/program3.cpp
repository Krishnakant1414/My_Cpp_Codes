#include<iostream>
using namespace std;

class Sample{

    inline static int m = 10;
    static void read(void){
        cout<<"Inside read"<<endl;
        cout<<m<<endl;
        
    }

    public:
        static void update(void){
            cout<<"Inside update"<<endl;
            read();
        }
};

int main(){

     Sample::update();

    return 0;
}

