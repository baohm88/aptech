#include <stdio.h>
#include <math.h>

int main() { 
  float a, b, c, dt, x1, x2;
  // Get user's input for a, b and c
  printf("Enter value of a: ");
  scanf("%f", &a);
  
  printf("Enter value of b: ");
  scanf("%f", &b);
  
  printf("Enter value of c: ");
  scanf("%f", &c);

  // If a == 0, Equation becomes bx + c = 0
  if (a == 0) 
  {
    // If b == 0, check value of c
    if (b == 0) 
    {
      // If c == 0, equation has infinite resolutions
      if (c == 0)
      {
        printf("Equation has infinite resolutions.\n");
      }
      else
      {
        printf("Equation has NO resolution.\n");
      }
    }
    // PT has 1 resolution x = -(c / b)
    else 
    {
      x1 = -(c / b);
      printf("Equation has only 1 resoluation x = %.2f\n", x1);
    }
  }
  // Calculate dt = b*b - 4 * (a * c
  else 
  {
    dt = b*b - 4 * (a * c);
    // Check value of dt
    if (dt < 0)
    {
      printf("Equation has NO resolution.\n");
    }
    else if (dt == 0)
    {
      x1 = -(b/(2 * a));
      printf("Equation has only 1 resoluation x = %.2f\n", x1);
    }    
    else
    {
      x1 = (-b + sqrt(dt)) / (2 * a);
      x2 = (-b - sqrt(dt)) / (2 * a);
      printf("Equation has 2 resulutions\nx1 = %.2f\nx2 = %.2f\n", x1, x2);
    }
  }
}

