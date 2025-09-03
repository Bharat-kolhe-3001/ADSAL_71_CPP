#include<iostream>
using namespace std;
int main(){
    int length=0;
    int task[20];
    int total=0;

    int count=0,sum=0;

    cout<<"Enter The Task length:- ";
    cin>>length;


    for(int i=0;i<length;i++){
        cout<<"Enter "<<i+1<<" Task:- ";
        cin>>task[i];
    }

    for(int i=0;i<length;i++){
        for(int j=i+1;j<length;j++){
            if(task[i]>task[j]){
                int temp=task[j];
                task[j]=task[i];
                task[i]=temp;
            }
        }
    }

    for(int i=0;i<length;i++){
        cout<<task[i]<<"\n";
    }
         
    cout<<"Enter The Total Time:- ";
    cin>>total;

    for(int i=0;i<length;i++){
        sum+=task[i];

        if(sum<=total){
             count++;
        }
        else{
            break;
        }
    }

    cout<<"Max Task We Do Is:- "<<count<<endl;

}