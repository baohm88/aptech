#include <stdio.h>
#include <math.h>

int main() 
{
  int user_choice;
  float a, b, c, x, dt, x1, x2;
  printf("Enter:\n1 for solving equation ax + b = 0, or\n2 for solving equation ax^2 + bx + c = 0\n\nYour choice: ");
  scanf("%d", &user_choice);

  switch (user_choice)
  {
  case 1/* constant-expression */:
    // Solve linear equations in one variable
    printf("You choose 1\n");
    // Ask user to input a & b and save inputs to a, b
    printf("Enter value of a: ");
    scanf("%f", &a);

    printf("Enter value of b: ");
    scanf("%f", &b);

    // Check if a == 0
    if (a == 0) 
    {
      if (b == 0) 
      {
        printf("\nEquation has infinite solutions.\n");
      }
      else 
      {
        printf("\nEquation has NO solutions.\n");
      }
    }
    else 
    {
      x = - (b / a);
      printf("\nEquation has 1 resulution x = %.2f", x);
    }
    break;
  
  case 2/* constant-expression */:
    // Sovle quadratic equations
    printf("You choose 2\n");
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
        // If c == 0, equation has infinite solutions
        if (c == 0)
        {
          printf("\nEquation has infinite solutions.\n");
        }
        else
        {
          printf("\nEquation has NO solution.\n");
        }
      }
      // PT has 1 solution x = -(c / b)
      else 
      {
        x1 = -(c / b);
        printf("\nEquation has only 1 resoluation x = %.2f\n", x1);
      }
    }
    // Calculate dt = b*b - 4 * (a * c
    else 
    {
      dt = b*b - 4 * (a * c);
      // Check value of dt
      if (dt < 0)
      {
        printf("\nEquation has NO solution.\n");
      }
      else if (dt == 0)
      {
        x1 = -(b/(2 * a));
        printf("\nEquation has only 1 resoluation x = %.2f\n", x1);
      }    
      else
      {
        x1 = (-b + sqrt(dt)) / (2 * a);
        x2 = (-b - sqrt(dt)) / (2 * a);
        printf("\nEquation has 2 resulutions\nx1 = %.2f\nx2 = %.2f\n", x1, x2);
      }
    }
    break;
  
  default:
    printf("\nYou entered wrong choice\n");
    break;
  }
}