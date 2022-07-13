
#include<iostream>
using namespace std;

// Note that inside the main function, we have the actual array.
// But if we pass in an array into a function, we only have the address of the array. This is known as pass by reference (which means the array is not passed by value).

// Using this as an example: void printArray(int arr[]){...}:
// If we ""cout << sizeof(arr)"" with the function taking in ""int arr[]"", it will return 8 bytes. Why? 
// Because in this case, variable arr is a pointer that holds the array address. And a pointer size is 8 bytes.

// If you want to make it more explicit, you cna use "int *arr" instead of "int arr[]".

void printArray(int *arr,int n){ 
	// "int *arr" to be more explicit that an address is being passed
	// "int n" to get the correct number of elements as calculated in main.

	cout <<"In Function "<<sizeof(arr) <<endl;

	arr[0] = 100; // Update the 0th index of the array to 100

	for(int i=0;i<n;i++){
		cout << arr[i] <<endl; 
	}

}


int main(){

	int arr[] = {1,2,3,4,5,6};

	int n = sizeof(arr)/sizeof(int);
	// int = 4 bytes
	// array has 6 int elements = 24 bytes
	// sizeof(arr)/sizeof(int) = 24 bytes / 4 bytes = 6 elements

	printArray(arr,n);
	
	cout <<"In Main "<<sizeof(arr) <<endl;

	for(int i=0;i<n;i++){ // Print out array elements
		cout << arr[i] <<endl; 
	}

	return 0;
}

