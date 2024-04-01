#include <iostream>
using namespace std;
// user defined function to print array
void printArr (int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
  // declare array
  const int size = 5;
  int arr[size] = {1,2,3,4,5};
  
  int temp;
  cout << "Original array: ";
  printArr(arr, size);
  // swapping becomes 
  temp = arr[0];
  arr[0] = arr[size - 1];
  arr[size - 1] = temp;
  cout <<" array with swapping become: ";
  printArr(arr, size);
  return 0;
}
