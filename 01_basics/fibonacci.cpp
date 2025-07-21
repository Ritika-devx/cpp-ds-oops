//fibonacci series
#include<iostream>
using namespace std;
int main(){
    int n,next,n1=0,n2=1;
    cin>>n;
    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        cout << n1 << " ";
        next = n1 + n2;
        n1 = n2;
        n2 = next;
    }
    return 0;


}