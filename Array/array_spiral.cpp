#include<stdio.h>
int main(){
    
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("given matrix:-\n");
        for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("spiral matrix:-\n");
    for (int i=0, j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
         printf("\n%d ",arr[1][2]);
    for (int i=2, j = 2; j >=1; j--)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n%d ",arr[2][0]);
        for (int i=1, j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
    return 0;

}