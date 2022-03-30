#include <iostream>
//Fuksiya & array
using namespace std;
/*
void printArray(int arr[], int size) {

  for (int i = 0; i < size; i++){
    cout << arr[i] << endl;
  }
}
*/


void printArray(int arr[],int size){
for(int i = 0; i < size; i++){
    cout << ++arr[i] << endl;
}

}
int main() {
/*
int myArray[3] = {12,56,32};
printArray(myArray,3);
*/

int myArray[3] = {32,56,42};

for(int i = 0; i < 3; i++) {
    cout << myArray[i] << endl;
}

printArray(myArray,3);

for(int i = 0; i < 3; i++){
    cout << myArray[i] << endl;
}

return 0;
}
