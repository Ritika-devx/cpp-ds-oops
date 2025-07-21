#include<iostream>
using namespace std;
int globalVar=100;//global variable
void demonstratescoop(){
    int functionvar=50;
    cout<<"start function-fuctionover:"<<functionvar<<endl;
    //first block within function
    if(true){
        int blockvar1=20;//block scope
        int functionvar=60;//modified function scope
        cout<<"inside first block:"<<endl;
        cout<<"blockVar1"<<endl;
        cout<<"functionVar"<<endl;
        cout<<"globalVar"<<endl;
    }
    //blockVar1 is destroyed here and not accessible.

    cout<<"After first block-functionVar"<<functionvar<<endl;
    //cout<<blockVar1;//ERROR: blockVar1 not accessible here

    //second block within same function
    for(int i=0;i<2;i++){//"i" has block scope of this for loop
        int blockVar2=75;//block scope-only in this for loop

        cout<<"inside loop block(i="<<i<<"):"<<endl;
        cout<<"blockVar2:"<<blockVar2<<endl;
        cout<<"FunctionVar"<<functionvar<<endl;
    }
    cout<<"end of function-functionvar: "<<functionvar<<endl; 
}
int main(){
    int mainvar=75;
    cout<<"demonstrating scope levels: "<<endl;
    cout<<"in main-mainVAR"<<mainvar<<endl;
    cout<<"in main-globalvar"<<globalVar<<endl;

    demonstratescoop();
    cout<<"back in main"<<mainvar<<endl;
    cout<<"back in main-globalvar"<<globalVar<<endl;
    //nested block in main
{   int nestedvar=200;
    cout<<"inside nested block main"<<endl;
    cout<<"nested var"<<nestedvar<<endl;
    cout<<"main var"<<mainvar<<endl;
    cout<<"global var"<<mainvar<<endl;
}
 {
 int globalVar =300; // Shadows the global variable
        cout <<"\nShadowing example:"<< endl;
        cout <<"  Local globalVar: "<< globalVar << endl; // 300
        cout <<"  ::globalVar: "<<::globalVar << endl; // 100 (scope resolution)
 }
 return 0;
}

