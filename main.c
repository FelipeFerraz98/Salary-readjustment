#include <stdio.h>

int main(void) {
    int employee=0, majority, readjustment, son;
  float salary;
  while(1){
    printf("\nEmployee salary: <0 = end>");
    scanf("%f", &salary);
    if (salary == 0){
     break; 
    }
    else{
      printf("\nNumber of children: ");
      scanf("%d", &son);
      printf("\nHow many are +18: ");
      scanf("%d", &majority);
      readjustment = son - majority;
      if(salary < 4000 && readjustment >= 1){
      employee++;
        }
    }
  }
  printf("\n%d employees with a salary of less than 4000 and with children under the age of 18", employee);
  return 0;
}
