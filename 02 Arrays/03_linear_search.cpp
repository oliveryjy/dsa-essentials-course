#include<iostream>
using namespace std;
	
// Time complexity for linear search is O(N)
// Because depending on the number of elements (N), it will take as long as searching through ALL the elements.

int linear_search(int arr[],int n,int key){
	// key is the value we are looking in the array

	for(int i=0; i<n; i++){
		//Check if current element matches with the key
		if(arr[i] == key){
			return i;
		}
	}
	//out of the loop -> means the element does not exist in the array.
	return -1;
}


int main(){

	int arr[] = {10,15,12,9,6,4,3,10,8}; // Array initialization
	int n = sizeof(arr)/sizeof(int); // Number of elements in the array

	int key;
	cin>>key;

	int index = linear_search(arr,n,key);
	if(index!=-1){
		cout<<key <<" is present at index "<< index <<endl;
	}
	else{ // If element does not exist, index = -1
		cout<<key <<" is NOT Found!" <<endl;
	}


	return 0;
}