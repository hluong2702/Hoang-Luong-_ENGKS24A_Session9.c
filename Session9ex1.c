#include<stdio.h>

int main(){

    int arr[100];
    int n;
    printf("Moi ban nhap vao so phan tu ");
    scanf("%d",&n);

    for(int i = 0;i<n;i++){
        printf("Tung phan tu cua mang la ");
        scanf("%d",&arr[i]);
    }
    int index, value;

    printf("Moi ban nhap vao vi tri muon chen ");
    scanf("%d",&index);

    printf("Moi ban nhap vao gia tri muon them ");
    scanf("%d",&value);

    if(index> n-1){
        printf("Khong hop le ");
        return 0;
    }
    
    for(int i =n ;i>index;i--){
        arr[i]= arr[i-1];
    }
    arr[index]=value;
    for(int i = 0;i<n+1;i++){
        printf("%d\n",arr[i]);
    }
    return 0;

}