#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int num = 15;
  char name[50];
  char name2[50];
  int marks;
  
  FILE *ptr_file;
  FILE *ptr_file2;

  if ((ptr_file = fopen("results.txt", "r")) == NULL) {printf("Can't open file");
  exit(1);
  }

  ptr_file2 = fopen("graded.txt", "wb");
 
 //read and print just names
 while (fgets(name, sizeof(name), ptr_file))
 {
    fscanf(ptr_file,"%[^0-9]", name);
      printf("Name: %s\n", name);
      fwrite(name, sizeof(num), "Name: %d\n", ptr_file2);
      //printf(" %*s\n", name2);
 }

//read and convert numbers and write to ptr_file2
/*
while (fgets(marks, sizeof(marks), ptr_file))
 {
    fscanf(ptr_file,"%[*A-z]", marks);
      if marks <= 40
      {printf("Grade: Fail\n"}
      elseif marks > 40 && marks < 70
      {printf("Grade: Pass\n")}
      elseif marks >= 70
      {printf("Grade: Distinction\n")}
      fwrite(marks, sizeof(marks), "Grade %d\n", ptr_file2);
 }
*/

//test code

  //fscanf(ptr_file, "%s", &strx, "%s", &strx2, "%d", &num);
  //fscanf(ptr_file, "%d", &num);

  //printf("Name: %s", strx);
  //printf(" %s", strx2);
  //printf(" Score of %d", num);


  fclose(ptr_file);

  return 0;
}
