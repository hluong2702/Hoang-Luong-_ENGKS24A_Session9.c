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
    int index;

    printf("Moi ban nhap vao vi tri can xoa ");
    scanf("%d",&index);

    if(index>n-1){
        printf("Khong hop le ");
        return 0;
    }
   
    for(int i = index;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    for(int i =0;i< n-1;i++){
        printf("%d\n",arr[i]);
    }
    
    return 0;
}