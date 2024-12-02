#include<stdio.h>
#include<math.h>
int main(){
    int choice,current_length,index,value,sum,max,min,prime = 1,count,maxCount;
    int arr[100];
    do
    {
        printf("----------------------------------------------------------------------\n");
        printf("        MENU        \n");
        printf("1.Nhap so phan tu muon nhap va gia tri cac phan tu.\n");
        printf("2.In ra gia tri cac phan tu dang quan ly.\n");
        printf("3.In ra phan tu chan va tinh tong.\n");
        printf("4.In ra gia tri lon nhat va nho nhat trong mang.\n");
        printf("5.In ra cac phan tu la SNT trong mang va tinh tong.\n");
        printf("6.Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do.\n");
        printf("7.Them mot phan tu vao vi tri chi dinh.\n");
        printf("8.Thoat\n");
        printf("----------------------------------------------------------------------\n");
        printf("Lua chon cua ban : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Nhap so luong phan tu muon them vao mang : ");
            scanf("%d",&current_length);
            for (int i = 0; i < current_length; i++)
            {
                printf("arr[%d] = ",i);
                scanf("%d",&arr[i]);
            }
            break;
        case 2:
            printf("Mang da nhap : \n");
            for (int i = 0; i < current_length; i++)
            {
                printf("arr[%d] = %d\n",i,arr[i]);
            }
            break;
        case 3:
            sum = 0;
            printf("Phan tu la so chan : \n");
            for (int i = 0; i < current_length; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    printf("arr[%d] = %d\n",i,arr[i]);
                    sum += arr[i];
                }   
            }
            printf("Tong cac phan tu la so chan = %d\n",sum);
            break;
        case 4:
            max = arr[0];
            min = arr[0];
            for (int i = 0; i < current_length; i++)
            {
                if (max < arr[i])
                {
                    max = arr[i];
                }
                if (min > arr[i])
                {
                    min = arr[i];
                }
            }
            printf("Phan tu lon nhat trong mang la : %d\nPhan tu nho nhat trong mang : %d",max,min);
            break;
        case 5:
            sum = 0;
            printf("Phan tu la SNT trong mang la : \n");
            for (int i = 0; i < current_length; i++)
            {
                prime = 1;
                if (arr[i] < 2) {
                    prime = 0;
                }
                for (int j = 2; j <= sqrt(arr[i]); j++) {
                    if (arr[i] % j == 0) {
                        prime = 0;
                        break;
                    }
                }
                if (prime)
                {
                    printf("arr[%d] = %d\n",i,arr[i]);
                    sum += arr[i];
                }
            }
            printf("Tong cua cac phan tu la SNT trong mang = %d\n",sum);
            break;
        case 6:
            maxCount = 0;
            count = 0;
            int n;
            printf("Nhap so n trong mang : ");
            scanf("%d",&n);
            for (int i = 0; i < current_length; i++){
                if (n == arr[i])
                {
                    count++;
                }
                if (count > maxCount)
                {
                    maxCount = count;
                }
            }
        printf("Phan tu xuat hien %d lan\n",maxCount);
            break;
        case 7:
        printf("Nhap gia tri muon them : ");
        scanf("%d",&value);
        printf("Nhap vi tri index ban muon them (0 - 99) : ");
        scanf("%d",&index);
        if (index > current_length || index < 0 )
        {
            printf("Vi tri khong hop le!!\n");
            break;
        }
        for (int i = current_length;i > index; i--)
            {
                arr[i]=arr[i-1]; 
            }
            arr[index] = value;
            break;
        default:
            printf("Khong hop le!! Nhap lai\n");
        }

    } while (choice != 8);
    return 0;
}
