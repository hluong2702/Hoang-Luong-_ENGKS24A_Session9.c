#include<stdio.h>
int main(){
    int choice = 0,m,n,sum,mul,maxSum,rowIndex;
    int arr[100][100];
    do
    {
        int i = 0,j = 0;
        printf("--------------------------------------------------------------\n");
        printf("                    Menu                    \n");
        printf("1, Nhap kich co va gia tri cac phan tu cua mang.\n");
        printf("2, In cac gia tri cua mang theo ma tran.\n");
        printf("3, In gia tri cac phan tu la le va tinh tong.\n");
        printf("4, In ra cac gia tri nam tren duong bien va tinh tich.\n");
        printf("5, In ra cac phan tu nam tren duong cheo chinh.\n");
        printf("6, In ra cac phan tu nam tren duong cheo phu.\n");
        printf("7, In ra dong co tong gia tri cac phan tu la lon nhat.\n");
        printf("8, Thoat.\n");
        printf("Nhap lua chon cua ban : ");
        scanf("%d",&choice);
        printf("--------------------------------------------------------------\n");
        switch (choice)
        {
        case 1:
            printf("Nhap so hang: \n");
            scanf("%d",&m);
            printf("Nhap so cot : \n");
            scanf("%d",&n);
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("\nNhap arr[%d][%d] = ",i,j);
                    scanf("%d",&arr[i][j]);
                }
            }
            break;
        case 2:
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("%d\t",arr[i][j]);
                }
                printf("\n");
            }
            break;    
        case 3:
            sum = 0;
            printf("Phan tu la so le : \n");
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (arr[i][j] % 2 != 0)
                    {
                        printf("arr[%d][%d] = %d\n",i,j,arr[i][j]);
                        sum += arr[i][j];
                    }
                }
            }
            printf("Tong cua cac phan tu la so le = %d\n", sum);
            break;
        case 4:
            mul = 1;
            for (int i = 0; i < n; i++)
            {
                mul *= arr[0][i];
            }
            for (int i = 0; i < n; i++)
            {
                mul *= arr[m-1][i];
                
            }
            for (int i = 0; i < m; i++)
            {
                mul *= arr[i][0];
            }
            for (int i = 0; i < m ; i++)
            {
                mul *= arr[i][n-1];
            }
            printf("Tich cac phan tu tren duong bien = %d\n",mul);
            break;
        case 5:
            printf("Cac phan tu nam tren duong cheo chinh la : \n");
            for (int k = 0; k < n; k++)
            {
                printf("%d\t",arr[i][j]);
                i++;
                j++;
            }
            printf("\n");
            break;
        case 6:
            i = 0;
            j = n-1;
            printf("Cac phan tu tren duong cheo phu cua ma tran la : \n");
            for (int k = 0; k < n; k++)
            {
                printf("%d\t",arr[i][j]);
                i++;
                j--;
            }
            printf("\n");
            break;
        case 7:
            sum = 0;
            maxSum = 0;
            rowIndex = 0;
            for (int i = 0; i < m; i++)
            {
                sum = 0;
                for (int j = 0; j < n; j++)
                {
                    sum += arr[i][j];
                }
                if (sum > maxSum)
                {
                    maxSum = sum;
                    rowIndex = i;
                }
            }
            printf("Dong co tong lon nhat la dong %d.\n",rowIndex+1);
            
            break;
        case 8:
        break;
        default:
            printf("Khong hop le!!Nhap lai!\n");
        }
    } while (choice != 8);   
}
