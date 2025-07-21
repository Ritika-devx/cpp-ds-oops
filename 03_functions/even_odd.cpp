#include<iostream>
using namespace std;
string even_odd(int num){
    if(num%2==0){
        return "even";
    }
    else{
        return "odd";
    }
}
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    cout<<"number is:"<<even_odd(num)<<endl;
}