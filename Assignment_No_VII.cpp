#include<iostream>
using namespace std;
int main(){
    int task[20];
    int total;
    cout<<"Enter Task Length: ";
    cin>>total;

    for(int i=0;i<total;i++){
        cout<<"Enter "<<i+1<<" Task:- ";
        cin>>task[i];
    }

    int deadline=0;
    cout<<"Enter Days Within The Task Should Be Completed: ";
    cin>>deadline;

    int sum=0;
    for(int i=0;i<total;i++){
        sum+=task[i];
    }

    int hoursPerDay = (sum + deadline - 1) / deadline;

    cout<<"In Every Day You need to work for "<<hoursPerDay<<" Hours";

    return 0;
}
