#include<iostream>
using namespace std;

//Problem : Print all pairs of elements (two nested loops)
void printAllPairs(int arr[],int n){
	for(int i=0; i<n; i++){
		int x = arr[i]; // First number

		for(int j=i+1; j<n; j++){ // Start from i+1 (one number after)
			int y = arr[j];

			cout << x << "," << y << endl;
		}
		cout << endl;
	}
}


int main(){
	//Array Containing 
	int arr[] = {10,20,30,40,50,60};
	int n = sizeof(arr)/sizeof(int);

	//Print all elements
	for(int x : arr){ // This loop takes the elements directly in the array.
		cout << x << endl;
	}
	cout << endl;

	printAllPairs(arr, n);

	return 0;
}