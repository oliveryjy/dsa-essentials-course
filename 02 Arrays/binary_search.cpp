#include<iostream>
using namespace std;

//// Binary search -> Assuming SORTED order of the data, you start from the centre of the whole dataset
// With SORTED order, you know which items come after one another. 
// This allows you to narrow down the whole search every half. Because you will know which half of the data the key should belong.
// The search will keep narrowing by half until you found your key element.
// s = index of the lowest no. (starting index)
// e = index of the largest no. (ending index)
// If s > e, means the key element cannot be found because s has to cross the e boundary to search for the element.

//// Time complexity of binary search = O(logN)
// E.g. for 1000 data elements, log base 2 will take ~10 iterations to find the answer. i.e. 2^10 = ~1000
// E.g. for 16 data elements, log base 2 will take ~r iterations to find the answer. i.e. 2^4 = 16
// That's how fast binary search is.
// Downside: Your data HAVE to be sorted (a.k.a monotonic -> non-decreasing or non-increasing)!
// Non-decreasing = sorted ascendingly
// Non-increasing = sorted descendingly

int binary_search(int arr[],int n,int key){
	//Implement binary search
	int s = 0; // Start index point
	int e = n - 1; // End index point

	while(s<=e){ // When start > end, break the loop
		int mid = (s+e)/2; // Since its int datatype, the whole number is just returned instead of a float.

		if(arr[mid] == key){
			return mid;
		}
		else if(arr[mid] > key){
			e = mid - 1; // Reassign endpoint to mid-1
		}
		else{ // assumes arr[mid] < key
			s = mid + 1; // Reassign startpoint to mid+1
		}
	}

	return -1; // Element is not present.
}


int main(){

	int arr[] = {10,20,30,40,45,60,70,89}; // Array initialization
	int n = sizeof(arr)/sizeof(int); // Number of elements in the array

	int key;
	cin>>key;

	int index = binary_search(arr,n,key);
	if(index!=-1){
		cout<<key <<" is present at index "<< index <<endl;
	}
	else{
		cout<<key <<" is NOT Found!" <<endl;
	}


	return 0;
}