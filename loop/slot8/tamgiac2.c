#include<stdio.h>
int main(int argc, char const *argv[])
{
  int canh;
  printf("Nhap vao do dai canh: ");
  scanf("%d", &canh);
  
  for (int i = 0; i < canh; i++)
  {
    for (int j = 0; j < canh; j++)
    {
      if (i + j < canh - 1)
      {
        printf("  ");
      }
      
      else
      {
        printf("* ");
      }
    }
    printf("\n");
  }

  return 0;
}
