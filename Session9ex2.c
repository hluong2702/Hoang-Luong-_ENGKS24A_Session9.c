#include<stdio.h>

int main(){

    int arr[20]={1,2,7,3,4,5};
    int index, value;

    printf("Moi ban nhap vao vi tri can sua ");
    scanf("%d",&index);

    printf("Moi ban nhap vao gia tri moi ");
    scanf("%d",&value);
    
    if(index>6){
        printf("Khong hop le ");
        return 0;
    }
    arr[index]=value;

    for(int i = 0;i<6;i++){
        printf("%d\n",arr[i]);
    }
    
    return 0;
}