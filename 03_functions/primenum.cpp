#include<iostream>
using namespace std;
bool prime_num(int num){
    if(num<=1){
        return false;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
    }
        return true;

}
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    if(prime_num(num)){
        cout<<"number is prime;"<<num<<endl;
    }
    else{
        cout<<"number is not prime:"<<num<<endl;
    }
}
