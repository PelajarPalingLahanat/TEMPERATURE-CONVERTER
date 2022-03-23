//TEMPLATE
#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE 10
#define LEN_ARR(x) sizeof(x) / sizeof(x[0])
// 0 is false 1 is true


void func(){

}

int main(){
  //CONVERT TEMPERATURE
  char choice;
  float temperature;
  printf("\nC. Celcius\nF. Fahrenheit\nK. Kelvin\nR. Rankine\n\nEnter the temperature unit : ");
  scanf("%c",&choice);
  if(choice != 'C' && choice != 'K'&& choice != 'F' && choice != 'R'){
    printf("Invalid key\nProgram will exit"); return 0;
  }
  printf("Enter the temperature : ");
  scanf("%f",&temperature);
  printf("\nYour temperature : %.2f %c\n",temperature,choice);
  if(choice == 'F') temperature = (temperature - 32) * 5.0 / 9.0;
  if(choice == 'K') temperature = temperature - 273.15;
  if(choice == 'R') temperature = temperature * 5.0 / 9.0 - 273.15;

  if(choice != 'C') printf("\nin C : %.2f C",temperature);
  if(choice != 'F') printf("\nin F : %.2f F",temperature * 9.0 / 5.0 + 32);
  if(choice != 'K') printf("\nin K : %.2f K",temperature + 273.15);
  if(choice != 'R') printf("\nin R : %.2f R",temperature * 9.0 / 5.0 + 491.67);


return 0;
}
