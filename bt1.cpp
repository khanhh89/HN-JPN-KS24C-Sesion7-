#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Cac phan tu trong mang:\n");
    for (int i = 0; i < length; i++) {
        printf("Phan tu thu %d: %d\n", i, arr[i]);
    }
    printf("Do dai cua mang la: %d\n", length);
	 return 0;
}