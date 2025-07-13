#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter percentage: ";
    cin>>x;
    if(x>=81 &&x<=100){
        cout<<"very good";
    }
    else if(x>=61 && x<=80){
        cout<<"good";
    }
    else if(x>=41 && x<=60){
        cout<<"Average";
    }
    else if(x<=40){
        cout<<"Fail";
    }
    else{
        cout<<"Invalid input";
    }
}