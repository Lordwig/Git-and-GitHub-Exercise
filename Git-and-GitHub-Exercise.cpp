#include <iostream>
using namespace std;
int main() {

const int arrSize = 20;
int arr1[arrSize], arr2[arrSize], merged[arrSize * 2];
int numOfE1, numOfE2;
do {
cout << "Enter number of elements for first array (1-20): ";
cin >> numOfE1;
if (numOfE1 <= 0 || numOfE1 > arrSize) {
cout << "Invalid input. Please choose a number between 1 and 20." <<
endl;
}
} while (numOfE1 <= 0 || numOfE1 > arrSize);
cout << "Enter " << numOfE1 << " elements: ";
for (int i = 0; i < numOfE1; i++) cin >> arr1[i];
do {
cout << "Enter number of elements for second array (1-20): ";
cin >> numOfE2;
if (numOfE2 <= 0 || numOfE2 > arrSize) {
cout << "Invalid input. Please choose a number between 1 and 20." <<
endl;
}
} while (numOfE2 <= 0 || numOfE2 > arrSize);
cout << "Enter " << numOfE2 << " elements: ";
for (int i = 0; i < numOfE2; i++) cin >> arr2[i];
int total = numOfE1 + numOfE2;
for (int i = 0; i < numOfE1; i++) merged[i] = arr1[i];
for (int i = 0; i < numOfE2; i++) merged[numOfE1 + i] = arr2[i];
for (int i = 0; i < total - 1; i++)
for (int j = 0; j < total - i - 1; j++)
if (merged[j] < merged[j + 1]) swap(merged[j], merged[j + 1]);
cout << "Merged array in descending order: ";
for (int i = 0; i < total; i++) cout << merged[i] << " ";
cout << endl;
return 0;
}
