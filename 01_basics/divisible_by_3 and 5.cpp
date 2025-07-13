#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter number: ";
    cin>>x;
    if(x>=0){
        if(x%3==0 && x%5==0){
            cout<<"Divisible";
        }
        else{
            cout<<"Not divisible";
        }
    }
    else{
        cout<<"Invalid input";
    }
}