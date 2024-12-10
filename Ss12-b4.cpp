#include <stdio.h>

int PhanTuMax(int arr[], int length) {
	int max = 0;
	for(int i = 0; i < length; i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	
    return max;
}

int main() {
    int arr[5] = {15,71,22,69,97};
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("So phan tu lon nhat trong mang la: %d", PhanTuMax(arr, length));

    return 0;
}

