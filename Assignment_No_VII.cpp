
#include<iostream>
using namespace std;
int main(){
    int total_Days;
    int Total_Hourse;
  cout<<"Enter No Of Days";
  cin>>total_Days;

  cout<<"Enter No Of Tsak For  Hourse Per Index   :-";
  cin>>Total_Hourse;
   
  int task[20];
  int work;
  int mean;
  int count=0;
  cout<<"Enter Task For Each :-";
  for(int i=0;i<Total_Hourse;i++){
    while(work!=-1){
          if(work<=mean){
             count++;
          }

          if(mean<work){
              count++;
          }
    }
  }  
}

