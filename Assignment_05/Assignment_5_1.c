//Write a program to accept marks of five subjects, calculate its total and average.



#include<stdio.h>

void total_marks(float Marathi, float Hindi, float History, float Geography, float Maths);
void average_value(float Marathi, float Hindi, float History, float Geography, float Maths);

int main()

{
  
  float Marathi, Hindi, History, Geography, Maths, total;
  
  printf("Enter the Marathi marks : ");
  scanf("%f", &Marathi);
  
  printf("Enter the Hindi marks : ");
  scanf("%f", &Hindi);
  
  printf("Enter the History marks : ");
  scanf("%f", &History);
  
  printf("Enter the Geography marks : ");
  scanf("%f", &Geography);
  
  printf("Enter the Maths marks : ");
  scanf("%f", &Maths);

  total_marks(Marathi, Hindi, History, Geography, Maths);
  average_value(Marathi, Hindi, History, Geography, Maths);
  
  return 0;

}

void total_marks(float Marathi, float Hindi, float History, float Geography, float Maths)
{

      float total;

      total = Marathi + Hindi + History + Geography + Maths;

      printf("Total marks out of 100 :  %.2f \n", total);
      
}

void average_value(float Marathi, float Hindi, float History, float Geography, float Maths)
{

  float avg;

  avg = (Marathi + Hindi + History + Geography + Maths) / 5;

  printf("Average marks : %.2f \n", avg);

}
