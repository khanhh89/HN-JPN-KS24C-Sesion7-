#include<stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	
	while (n<=0){
	printf("So phan tu phai lon hon 0, nhap lai.\n");
	scanf("%d",&n);
	}
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ", i+1);
		int x;
		scanf("%d",&x);
	while(x % 2 ==0){
		printf("Phan tu phai la so le, nhap lai di");
		scanf("%d",&x);
		}
	arr[i]=x;
	}
	printf("Mang vua nhap la: ");
	for(int i=0; i<n;i++){
		printf("%d",arr[i]);
		}
	return 0;
}
