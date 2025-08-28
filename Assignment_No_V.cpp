/*

Implement a problem of activity selection problem with K persons.
Statement: Given two arrays S[] and E[] of size N denoting starting and closing time 
of the shops and an integer value K denoting the number of people, the task is to find
out the maximum n umber of shops they can visit in total if they visit each shop 
optimally based on the following conditions:

*/

#include<iostream>
using namespace std;
    int TotalShop;
    int startingtime[20];
    int endingtime[20];
    int calculatemin[20];

    int visitedtime[20];
    int visitedstartingtime[20];
int set0(){
    
      for(int i=0;i<TotalShop;i++){
            visitedstartingtime[i]=0;
            visitedtime[i]=0;

    }

}

int mintimefunc(){
      int mintime=9999;
     int posmintime=-1;
     
     for(int i=0;i<TotalShop;i++){
          if(visitedtime[i]!=0){
                
                if(startingtime[i]<mintime){
                 mintime=startingtime[i];
                 posmintime++;
          }
          }
         
     }
    if(posmintime!=-1){
       visitedtime[posmintime]=0;
    }
     

     return mintime;
}


int minstartingstimefunc(){
  
     
    int minstartingtime=9999;
    int posminstarting=0;

     for(int i=0;i<TotalShop;i++){

           if(visitedstartingtime[i]!=0){
          if(startingtime[i]<minstartingtime){ 
           
            minstartingtime=calculatemin[i];
            posminstarting++;
          }
     }
     }

     visitedtime[posminstarting]=0;

     return minstartingtime;
}

int main(){
   
    int Employee;
     cout<<"Enter Total Shop";
     cin>>TotalShop;

    for(int i=0;i<TotalShop;i++){
        cout<<"Enter Starting Time For Shop No "<<i<<" :-";
        cin>>startingtime[i];
    }

     for(int i=0;i<TotalShop;i++){
        cout<<"Enter Ending Time For Shop No "<<i<<" :-";
        cin>>startingtime[i];
    }
     
    cout<<"Enter No of Employee";
    cin>>Employee;
     
    for(int i=0;i<TotalShop;i++){
         calculatemin[i]=endingtime[i]-startingtime[i];
    }
     
    set0(); 

    int startvisit=0;
    int startimployee=1;
    while(startvisit<TotalShop){
     
       int minstarting = minstartingstimefunc();
       int mintime = mintimefunc();
      cout<<"Employee No "<<startimployee<<" Starting Time is "<<startingtime<<" And Ending Time Is"<< endingtime[minstarting]<<" \n";
       
      if(startimployee=Employee){
          startimployee=1;

      }
       startimployee++;
       startvisit++;
     }

     
}

