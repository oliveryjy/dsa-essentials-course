#include<iostream>
using namespace std;

//Kadane's algorithm O(N) -> Only one loop
// It works in linear time.
// This algorithm works for contiguous sum only!
// This algorithm does not take up extra space unlike prefix sum!
int maximum_subarray_sum(int arr[],int n){

	int cs = 0; // current_sum (cs)
	int largest = 0;

	for(int i=0;i<n;i++){
		cs = cs + arr[i]; // Add current sum to the 'i'th array element
		if(cs < 0){ // If cs becomes negative, reset it to zero.
			cs = 0;
		}
		largest = max(largest, cs); // If cs is positive, assign the largest.
	}

	return largest;
}


int main(){
	//Array Containing 
	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int n = sizeof(arr)/sizeof(int);

	cout<< maximum_subarray_sum(arr,n) <<endl;

	return 0;
}