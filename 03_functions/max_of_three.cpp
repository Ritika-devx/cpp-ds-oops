#include <iostream>
using namespace std;
double max_of_three(double num1,double num2,double num3){
    if(num1>=num2 && num1>=num3){
        return num1;
    }
    else if(num2>=num1 && num2>=num3){
        return num2;
    }
    else{
        return num3;
    }
}
int main(){
    double a,b,c;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;

    cout<<"Enter 3rd number:";
    cin>>c;
    cout<<"Max is:"<<max_of_three(a,b,c)<<endl;

}