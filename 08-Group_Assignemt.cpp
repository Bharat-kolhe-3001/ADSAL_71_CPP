/*
Implement a problem of minimum work to be done per day to CO2 
finish given tasks within D days problem. 
Statement: Given an array task [] of size N denoting amount of work to 
be done for each task, the problem is to find the minimum amount of 
work to be done on each day so that all the tasks can be completed in 
at most D days.
Note: On one day work can be done for only one task.
*/

#include<iostream>
using namespace std;
int main(){
    int length=0;
    int task[20];
    int total=0;

    int count=0,sum=0;

    cout<<"Enter the number of tasks: ";
    cin>>length;

    for(int i=0;i<length;i++){ 
        cout<<"Enter Task "<<i+1<<": ";
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
         
    cout<<"Enter the total available time: ";
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

    cout<<"Maximum number of tasks we can complete: "<<count<<endl;

}

/*
Enter the number of tasks: 5
Enter Task 1: 4
Enter Task 2: 2
Enter Task 3: 8
Enter Task 4: 3
Enter Task 5: 5
2
3
4
5
8
Enter the total available time: 10
Maximum number of tasks we can complete: 3

*/

