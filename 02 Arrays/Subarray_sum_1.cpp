#include<iostream>
using namespace std;

//Problem : Print all subarrays of a given array
// Brute Force Approach O(N^3) (Because of 3 nested loops)
int largestSubarraySum1(int arr[],int n){

	int largest_sum = 0;

	//// THIS LOOP = ORDER OF N^3 (3 nested loops)
	for(int i=0;i<n;i++){ 
		for(int j=i; j<n; j++){

			int subarraySum = 0;

			for(int k=i; k<=j; k++){
				//cout<<arr[k] <<",";
				subarraySum += arr[k];
			}
			//put a check if subarraySum > largest_sum
			largest_sum = max(largest_sum,subarraySum);

		}
	}
	return largest_sum;
}
// Prefix Sum Approach O(N^2) -> N + N^2 =~ N^2 (because of two nested loops)
// Make another array (prefix array) stores the cumulative sum of all the elements up til a specified index
int largestSubarraySum2(int arr[],int n){

	//Prefix Sums
	int prefix[100] = {0}; 
	//C++ does not allow variable-length array initialization e.g. int prefix[n] = {0}. Hence, we need to make a static array e.g. making 100 elements.
	// Initialise the first element so there is no garbage values in the array.
	prefix[0] = arr[0]; //Set first element of the prefix array to be the input array's first element.
	
	//// THIS LOOP = ORDER OF N (one loop)
	for(int i=1;i<n;i++){ //This stores the cumulative sum of all the elements til the ith index.
		//ith prefix array element = i-1 prefix array element + ith input array element
		prefix[i] = prefix[i-1] + arr[i];
		//Imagine if i=1
		// prefix[1] = prefix[0-1] + arr[1]
		// prefix[1] = -2 + 3
	}

	//Largest sum logic
	int largest_sum = 0;

	//// THIS LOOP = ORDER OF N^2 (two nested loops)
	// i = starting index, j = ending index.
	for(int i=0;i<n;i++){
		for(int j=i; j<n; j++){
			//If i=0, means you will grab the sum of all the elements that starts from index 0 to the ending index j.
			// The i>0? conditional statement (similar to if else statement) is added because i cannot be negative.
			int subarraySum = i>0 ? prefix[j] - prefix[i-1] : prefix[j];
			//put a check if subarraySum > largest_sum
			largest_sum = max(largest_sum,subarraySum);
		}
	}
	return largest_sum;
}

int main(){
	//Array Containing 
	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int n = sizeof(arr)/sizeof(int);

	cout<< largestSubarraySum1(arr,n) <<endl;
	cout<< largestSubarraySum2(arr,n) <<endl;


	return 0;
}