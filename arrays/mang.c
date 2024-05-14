#include<stdio.h>

int main()
{
    // int n;
    // printf("Nhap vao so phan tu cua mang: ");
    // scanf("%d", &n);
    // int arr[n];
    
    // // Inputs
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Nhap vao phan tu thu %d: ", i + 1);
    //     scanf("%d", &arr[i]);
    // }

    // // Outputs
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Phan tu thu %d: %d\n", i + 1, arr[i]);
    // }
    
    int n, m;
    printf("Nhap vao so phan tu cua hang: ");
    scanf("%d", &n);
    printf("Nhap vao so phan tu cua cot: ");
    scanf("%d", &m);

    int arr[n][m];
    // Inputs
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Nhap vao so phan tu hang %d, cot %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    
    
    // Outputs
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Phan tu cua hang %d, cot %d: %d\n", i + 1, j + 1, arr[i][j]);
        }
    }
    
    
    return 0;
}
