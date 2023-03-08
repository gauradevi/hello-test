#include <iostream>

using namespace std;

class base{
public:
    int add(int a, int b){
        return a+b;
    }

    int add(int a, int b, int c){
        return a+b+c;
    }
};

int main(){
    base b1;
    cout<<"The sum of two value is:"<<b1.add(10,20)<<endl;
    cout<<"The sum oef two value is:"<<b1.add(10,20,30)<<endl;
}