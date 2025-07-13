#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ld;
    int pro=1;
    while(n>0){
        ld=n%10;
        n=n/10;
        pro*=ld;
    }
    cout<<pro;
}