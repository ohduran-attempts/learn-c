#include <stdio.h>
#include <string.h>

#include "struct.h"

int main(void){
  int enrollment = 2;

  student students[enrollment];

  students[0].name = "Alvaro";
  students[0].dorm = "A";

  students[1].name = "Betty";
  students[1].dorm = "B";

  for (int i = 0; i < enrollment; i++){
    printf("%s is in dorm %s\n", students[i].name, students[i].dorm);
  }



  // save students to disk
  FILE *file = fopen("students.csv", "w");
  if (file){
    for (int i = 0; i < enrollment; i++){
      fprintf(file ,"%s,%s\n", students[i].name, students[i].dorm);
    }
    fclose(file);
  }
}
