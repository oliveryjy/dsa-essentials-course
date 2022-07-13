#include <iostream>
using namespace std;

//Time complexity of this sub arrays = O(N*N*N) = O(N^3)

//For subarrays, for every N elements, we will get a total subarrays of:
//- NC2 subarrays or
//- N^2 subarrays
//(Both are the same)

//nC2 = the number of combinations of 2 objects given n objects.
//n can be any integer greater than or equal to 2. (no. of elements in the array)

// NC2 is calculated by (n!) / (2!*(n-2)!).
// N has to be greater than or equal to 2, but can be any number in that range.

//Problem: Print all subarrays of a given array
void printSubarrays(int arr[], int n){

    // i gives the start point
    // j gives the end point
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            //cout << "(" << i << "," << j << "),";

            for(int k=i; k<=j; k++){ // This loop gives a particular subarray
                cout << arr[k] << ",";
            }
            cout << endl; // Notice all the blank spaces when printing out. This is because
        }
        cout << endl;
    }
}

// Print the sum of each subarray & find out the largest sum. (My solution)
void printSubarraysSum(int arr[], int n){

    // i gives the start point
    // j gives the end point
    
    int largest_sum = 0;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){

            int sum = 0;

            for(int k=i; k<=j; k++){ // This loop gives a particular subarray and sums all the elements of the subarray.
                sum += arr[k];
            }
            cout << sum << endl;
            
            if (largest_sum < sum){ // Assign new largest sum if the sum for the particular subarray is larger.
                largest_sum = sum;
            }
        }
        cout << endl;
    }
    cout << "The largest sum is: " << largest_sum << endl;
}


int main(){

    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);

    // printSubarrays(arr,n);
    printSubarraysSum(arr,n);

    return 0;
}