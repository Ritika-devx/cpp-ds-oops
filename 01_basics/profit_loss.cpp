#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"Enter cost price :";
    cin>>cp;
    cout<<"Enter selling price :";
    cin>>sp;
    if(sp>cp){
        cout<<"Profit is "<<sp-cp;
    }
    else if(cp>sp){
        cout<<"Loss is "<<cp-sp;
    }
    else{
        cout<<"neither profit nor loss";
    }
}