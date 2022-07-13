#include <iostream>
#include <vector>
using namespace std;

int main(){
    //Demo Vector
    // Note: If nothing is assigned or initialised, the vector size is 0. (not bytes! but no. of elements!)
    // vector<int> arr = {1,2,10,12,15};
    

    //Fill constructor
    vector<int> arr(10,7); // 10 elements of value 7. Similar to the vector's ".assign" method.

    //Fill constructor
    vector<int> visited(100,0); // 100 elements of value 0

    // pop_back pops the last element in the array (similar to python)
    arr.pop_back();

    // push_back appends to the back of the array in constant time O(1)
    arr.push_back(16);

    //Print all the elements
    for(int i=0; i< arr.size(); i++){
        cout << arr[i] << endl;
    }

    /*
    //Size of the vector (no. of elements in the vector)
    cout << arr.size() << endl;

    //Capacity of the vector (size of allocated memory in terms of no. of elements that can be put into the vector)
    // Note: If it is first initalised, the capacity will be same as the size of the vector.
    // - Once more elements are added above the capacity, the capacity will expand by 2x.
    cout << arr.capacity() << endl;
    */
}