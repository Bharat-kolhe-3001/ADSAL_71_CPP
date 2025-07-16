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
