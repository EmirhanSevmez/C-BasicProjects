#include <iostream>

using namespace std;

void bubbleSort(int arr[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(arr[j+1]<arr[j])
				swap(arr[j],arr[j+1]);
		}
	}
}
void insertionSort(int arr[],int n){
	for (int i = 1; i < n ; i++){
		int key = arr[i];
		int j = i-1;
		while (j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}
void selectionSort(int arr[],int n){
	for (int i = 0;i<n-1;i++){
	int first = i;
		for (int k = i+1; k<n ; k++){
			if (arr[k]<arr[first])
				first=k;
		}
		swap(arr[i],arr[first]);
	}
}

void printArray(int arr[],int n){
	int i;
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
} 


int main(){
	
	int arr[] = {7,8,5,2,4,6,3};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Ilk Arr ";
	printArray(arr,n);
	
	bubbleSort(arr,n);
	
	cout << "Ikinci arr ";
	
	printArray(arr,n);
	cout<<endl;
	int arr2[] = {7,8,5,2,4,6,3};
	cout << "Ilk Arr ";
	printArray(arr2,n);
	cout << "Ikinci arr ";
	insertionSort(arr2,n);
	printArray(arr2,n);
	cout<<endl;
	int arr3[] = {7,8,5,2,4,6,3};
	cout << "Ilk Arr ";
	printArray(arr3,n);
	cout << "Ikinci arr ";
	selectionSort(arr3,n);
	printArray(arr3,n);
	return 0;
}
