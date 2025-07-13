#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter number: ";
    cin>>x;
    if(x%5==0){
        cout<<"Divisible";
    }
    else{
        cout<<"Not divisible";
    }
}