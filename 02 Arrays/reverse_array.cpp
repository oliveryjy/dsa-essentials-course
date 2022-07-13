#include<iostream>
using namespace std;

// This reverse array is of time complexity O(N) -> Because it depends majorly on the number of elements in the array.

//Problem : Reverse all the elements of a given array
void reverseArray(int arr[],int n){

	int s = 0; // Starting index
	int e = n - 1; // Ending index

	while(s < e){ // Swap elements 5 and 1, then 4 and 2 -> Now its reversed! Also works for even elements.
		swap(arr[s],arr[e]); // Swap is an in-built function.
		s += 1;
		e -= 1;
	}

}


int main(){

	// Initialise the array and get the no. of elements
	int arr[] = {10,20,30,45,60,80,90};
	int n = sizeof(arr)/sizeof(int);

	//Print the Output
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout <<endl;

	// Reverse the array
	reverseArray(arr,n);

	//Print the Output
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout <<endl;

	return 0;
}