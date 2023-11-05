#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


void printArray(int* array, int size, int i);
void generateArray(int* arr, int size, int min, int max, int i);
int  FindBiggestElement(const int* arr, int size, int BiggestNum, int i);

template <typename T>
void printArray1(T* array, int size, int i) {
    cout << setw(4) << array[i] << " ";
    if (i < size - 1)
        printArray(array, size, i + 1);
    if (i == size - 1)
        cout << endl;
}

template <typename T>
void generateArray1(T* arr, int size, int min, int max, int i) {
    if (i < size) {
        arr[i] = min + rand() % (max - min + 1);
        generateArray(arr, size, min, max, i + 1);
    }
    else return;
}

template <typename T>
T FindBiggestElement1(const T* arr, int size, T BiggestNum, int i) {
    if (i < size) {
        if (arr[i] % 2 == 0 && arr[i] > BiggestNum) {
            BiggestNum = arr[i];
        }
        FindBiggestElement(arr, size, BiggestNum, i + 1);
    }
    else return BiggestNum;
}


int main() {
    srand(unsigned(time(NULL)));
    const int arrSize = 10;
    int a[arrSize];

    generateArray(a, arrSize, -100, 100, 0);

    cout << "Array Elements:                        ";
    printArray(a, arrSize, 0);

    int biggestNumber = FindBiggestElement(a, arrSize, INT_MIN, 0);
    cout << "Biggest Number in Array which divides 2: " << biggestNumber << endl;

    const int arrSize1 = 10;
    int b[arrSize1];

    generateArray1(b, arrSize1, -100, 100, 0);
    cout << "Array Elements:                        ";
    printArray1(b, arrSize1, 0);

    int biggestNumber1 = FindBiggestElement1(b, arrSize1, INT_MIN, 0);
    cout << "Biggest Number in Array which divides 2: " << biggestNumber1;

    return 0;
}



void printArray(int* array, int size, int i) {
    cout << setw(4) << array[i] << " ";
    if (i < size - 1)
        printArray(array, size, i + 1);
    if (i == size - 1)
        cout << endl;
}



void generateArray(int* arr, int size, int min, int max, int i) {
    if (i < size) {
        arr[i] = min + rand() % (max - min + 1);
        generateArray(arr, size, min, max, i + 1);
    }
    else return;
}

int FindBiggestElement(const int* arr, int size, int BiggestNum, int i) {
    if (i < size) {
        if (arr[i] % 2 == 0 && arr[i] > BiggestNum) {
            BiggestNum = arr[i];
        }
        FindBiggestElement(arr, size, BiggestNum, i + 1);
    }
    else return BiggestNum;
}