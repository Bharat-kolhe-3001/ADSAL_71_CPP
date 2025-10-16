/*Implement a problem of number of zeroes. 
Statement: Given an array of 1s and 0s which has all 1s first followed 
by all 0s? Find the number of 0s. Count the number of zeroes in the 
given array*/

#include<iostream>
using namespace std;
int main(){
    int size, a[20], count = 0;
    cout << "Enter ARRAY size: ";
    cin >> size;
    
    cout << "Enter ARRAY elements:\n";
    for(int i = 0; i < size; i++){
        cout << "Enter " << i << " Element: ";
        cin >> a[i];
    }

    int low = 0, high = size - 1, mid;
    int firstzero = 0;

    while(low <= high){
           mid = (low + high) / 2;

        if(a[mid] == 1){//means a[mid] is zero  
            low = mid + 1;
         
        }
        else {
            if ((mid == 0 || a[mid - 1] == 1)) {//here we checking mid is first postion off array or mid-1 is = 1
              firstzero = mid;//if true we found first zero
              break;
             }

            else {
                high = mid - 1;
              
            }
        }
    }

  if(firstzero!=0){
        for(int i = firstzero; i < size; i++){
            count++;
        }
    }
 

    cout << "The total 0s in this array are: " << count;
    return 0;
}


/*
OUTPUT:-
PS C:\ADSA LAB> g++ Assignment_1.cpp
PS C:\ADSA LAB> ./a  
Enter ARRAY size: 5
Enter ARRAY elements:
Enter 1 Element: 1
Enter 2 Element: 0
Enter 3 Element: 0
Enter 4 Element: 0
Enter 5 Element: 0
The total 0 s in this array are: 4
PS C:\ADSA LAB> 

*/
