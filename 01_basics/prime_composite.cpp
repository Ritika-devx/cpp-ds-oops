#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==2 || n==3 ||  n==5 || n==7){
        cout<<"Prime";
    }
    else if(n%2==0 || n%3==0 || n%5==0 || n%7==0){
        cout<<"composite";
    }
    else if(n<=1){
        cout<<"Neither prime nor composite";
    }
    else{
        cout<<"Prime";
    }
}