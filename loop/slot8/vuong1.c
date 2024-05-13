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
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}
