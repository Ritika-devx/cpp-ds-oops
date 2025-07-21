
//SCOPE DEMONSTRATION
//create a program that shows global,function,block scope
 #include <iostream>
 using namespace std;

// Global scope
 int x = 10;

 void scope() {
    // Function scope
    int x = 20;
    cout << "Inside function: x = " << x << endl;

    {
         // Block scope
         int x = 30;
        cout << "Inside block: x = " << x << endl;
   }

    cout << "After block in function: x = " << x << endl;
 }

 int main() {
    cout << "In main (global): x = " << x << endl;
        scope();
   cout << "Back in main: x = " << x << endl;
     return 0;
 }