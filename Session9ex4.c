#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[100];
    int n, index, value;
    int choice;
    do
    {
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5.Xoa phan tu\n");
        printf("6.Thoat\n");
        printf("Lua chon cua ban : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
             printf("Moi ban nhap vao so phan tu ");
             scanf("%d",&n);

             for(int i = 0;i<n;i++){
             printf("Tung phan tu cua mang la ");
             scanf("%d",&arr[i]);
            }
            break;
        case 2:
           for (int i = 0; i < n; i++) {
           printf("arr[%d] = %d\n", i, arr[i]);
        }
            break;
        case 3:
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
            break;
        case 4:
         printf("Moi ban nhap vao vi tri can sua ");
         scanf("%d",&index);

         printf("Moi ban nhap vao gia tri moi ");
         scanf("%d",&value);
    
        if(index>n){
        printf("Khong hop le ");
        return 0;
    }
        arr[index]=value;

        for(int i = 0;i<n;i++){
        printf("%d\n",arr[i]);
    }
            break;
        case 5:
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
        case 6:
        exit(0);
        default:
            printf("Nhap khong hop le!");
            break;
        }
        printf("\n");
    } while (choice != 6);
    return 0;
}
