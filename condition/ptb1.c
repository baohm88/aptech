#include <stdio.h>

int main() {
  // Khai báo biến a, b, x kiểu float variables a, b, x
  float a, b, x;

  // Ask user to input a & b and save inputs to a, b
  printf("Nhập gía trị a: ");
  scanf("%f", &a);
  printf("Nhập gía trị b: ");
  scanf("%f", &b);

  if (a == 0) {
    if (b == 0) {
      printf("PT có vô số nghiệm\n");
    }
    else {
      printf("PT vô nghiệm\n");
    }
  }
  else {
    x = - (b / a);
    printf("Nghiệm của PT là x = %.2f", x);
  }
  return 0;
}