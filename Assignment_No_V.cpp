/*

Implement a problem of activity selection problem with K persons.
Statement: Given two arrays S[] and E[] of size N denoting starting and closing time 
of the shops and an integer value K denoting the number of people, the task is to find
out the maximum n umber of shops they can visit in total if they visit each shop 
optimally based on the following conditions:

*/

#include <iostream>
using namespace std;

int main() {
    int N, K;
    cout << "Enter number of shops: ";
    cin >> N;

    cout << "Enter number of persons: ";
    cin >> K;

    int start[50], end[50];   

    for (int i = 0; i < N; i++) {
        cout << "Enter start and end time of shop " << i + 1 << ": ";
        cin >> start[i] >> end[i];
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (end[i] > end[j]) {
                int temp = end[i];
                end[i] = end[j];
                end[j] = temp;
                temp = start[i];
                start[i] = start[j];
                start[j] = temp;
            }
        }
    }

    int lastEnd[50];
    for (int i = 0; i < K; i++) {
        lastEnd[i] = -1; 
    }

    int count = 0; 

   
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            if (lastEnd[j] == -1 || start[i] >= lastEnd[j]) {
                lastEnd[j] = end[i];
                count++;
                break; 
            }
        }
    }

    cout << "Maximum shops visited = " << count << endl;

    return 0;
}


     
}


