#include <iostream>

using namespace std;

int add(int a, int b){
    return a+b;
}

int main(){
    int sum = add(10,20);
    cout<<"The sum of two values is :"<<sum<<endl;
}