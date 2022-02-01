#include<iostream>
using namespace std; 
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
void selectionSort(int array[],int size){
    for(int i =0; i < size-1; i++){
        int min = i;
        
        for(int j=i+1; j < size; j++){   
            if (array[j] < array[min])
            min = j;
            }
        swap(&array[min],&array[i]);
    }
}
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout<<array[i]<<" ";
  }
  cout<<"\n";
}

int main()
{
    int arr[] = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
    int n =sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr,n);
    printf("sorted Array\n");
    printArray(arr,n);
    return 0;   }

