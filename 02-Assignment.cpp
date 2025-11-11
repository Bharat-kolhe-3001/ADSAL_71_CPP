/*Implement the problem of moving all zeroes to the end of array. 
Statement: Given an array of random numbers, Push all the zeroes of a 
given array to the end of the array.*/


#include<iostream>
using namespace std;

class sort {
    public:
    void mergesort(int a[], int lb, int ub) {
        if (lb < ub) { 
            int mid = (lb + ub) / 2; 
            mergesort(a, lb, mid);
            mergesort(a, mid + 1, ub);
            merge(a, lb, mid, ub);
        }
    }

    void merge(int a[], int lb, int mid, int ub) {
        int b[20];
        int i = lb; 
        int j = mid + 1;
        int k = lb;

        while (i <= mid && j <= ub) {
         
            if (a[i] >= a[j]) {
                b[k] = a[i];
                i++;
            }
            else {
                b[k] = a[j];
                j++;
            }
            k++;
        }

        if (i > mid) {
            while (j <= ub) {
                b[k] = a[j];
                j++;
                k++;
            }
        }
        else {
            while (i <= mid) {
                b[k] = a[i];
                i++;
                k++;
            }
        }

        for (int m = lb; m <= ub; m++) {
            a[m] = b[m];
        }
    }
};

int main() {
    int size, a[20];
    cout << "Enter ARRAY size: ";
    cin >> size;

    cout << "Enter ARRAY elements:\n";
    for (int i = 0; i < size; i++) {
        cout << "Enter " << i << " Element: ";
        cin >> a[i];
    }

    sort obj;
    obj.mergesort(a, 0, size - 1);

    cout << "\nSorted ARRAY in Descending Order:\n";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}


 /*
Output:-
PS C:\ADSA LAB> g++ Assignment_2.cpp
PS C:\ADSA LAB> ./a  
Enter ARRAY size: 6
Enter ARRAY elements:
Enter 1 Element: 5
Enter 2 Element: 0
Enter 3 Element: 2
Enter 4 Element: 5
Enter 5 Element: 4
Enter 6 Element: 0

Sorted ARRAY in Descending Order:
5 5 4 2 0 0 
PS C:\ADSA LAB> 
*/

