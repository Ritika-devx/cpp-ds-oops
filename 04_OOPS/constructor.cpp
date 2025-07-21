//Encapsulation
#include<iostream>
using namespace std;
class HostelRoom{
    private:
    string roomNo;
    string studentname;
    string rollno;
    int messbalance;
    bool isoccupied;
    public:
    HostelRoom(string room){
        roomNo=room;
        messbalance=0;
        isoccupied=false;
    }
    void allotRoom(string name,string roll){
        if(!isoccupied){
            studentname=name;
            rollno=roll;
            isoccupied=true;
            cout<<"Room "<<roomNo<<" alloted to "<<name<<endl;
        }
    }
    void addMessBalance(int amount){
        messbalance+=amount;
        cout<<"Mess balance updated: "<<messbalance<<endl;
    }
    void showRoomDetails()  {
        cout<<"Room No: "<<roomNo<<endl;
        if(isoccupied){
            cout<<"Occupied by: "<<studentname<<" (Roll No: "<<rollno<<")"<<endl;
        } else {
            cout<<"Room is vacant"<<endl;
        }
    }
};