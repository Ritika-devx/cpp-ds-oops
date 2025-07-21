#include<iostream>
using namespace std;
int reverse_num(int num){
    int rev=0;
    while(num>0){
        rev=rev*10+(num%10);//0*10+(1234%10=4) then in next loop its 4*10+(123%10=3)
        num=num/10;//1234/10=123(remove last digit)..
    }
    return rev;
}
int main(){
    int num;
    cout<<"Enter number you want to reverse:";
    cin>>num;
    cout<<"Reverse number:"<<reverse_num(num)<<endl;
}