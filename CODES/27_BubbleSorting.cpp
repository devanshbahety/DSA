#include <iostream>
#include<vector>
using namespace std;

int main() {
    int arr[6]={10,1,7,6,14,9};

    int n = 6;
    //Bubble Sort
    for(int round = 1; round < n; round++) {
        int swapCount = 0;
        for(int j =0; j< n-round; j++) {

            if(arr[j] > arr[j+1] ) {
                swap(arr[j], arr[j+1]);
                swapCount++;
            }

        }
        if(swapCount == 0) {
            //sort ho chuka hai, no need to check in further rounds
            break;
        }
    }

    //prninting
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;





  return 0;
}