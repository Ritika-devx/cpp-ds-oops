#include<iostream>
#include<bitset>
using namespace std;
int main(){
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    // Binary representation
    cout << "\nBinary Representation:\n";
    cout << "a = " << bitset<8>(a) << endl;
    cout << "b = " << bitset<8>(b) << endl;

    cout<<"\nBitwise AND(&); sets bit if both bits are 1"<<endl;
    cout<<"a&b="<<(a & b)<<"(binary:)"<<bitset<8>(a & b)
}