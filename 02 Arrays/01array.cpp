
#include<iostream>
using namespace std;


int main(){

	int marks[100] = {-1}; // Create array of 100 elements, initialise first element as -1.

	int n;
	cout<<"Enter the no of students ";
	cin>>n;


	//Input
	for(int i=1; i<=n; i++){ // Start from index 1, end at n.
		cin>> marks[i];

		//Update
		marks[i] = marks[i]*2;
	}

	
	//Output
	for(int i=0;i<100;i++){ // From index 1 to 99, print the marks
		cout<< marks[i] <<", "; 
		// Note that the unassigned indexes will be garbage values (for declared only arrays).
		// UNLESS one or more elements have been initalised, then the rest of the elements will be zero. (like line 8)
	}

	cout <<endl;


	return 0;
}