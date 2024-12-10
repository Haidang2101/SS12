#include <stdio.h>

int PhanTu(int arr[], int length){
	for(int i = 0; i < length; i++){
		printf("%d ", arr[i]);
	}
}

int main(){
	int arr[5]={6,17,53,11,39};
	int length = sizeof(arr)/sizeof(arr[0]);
	PhanTu(arr, length);
	return 0;
}
