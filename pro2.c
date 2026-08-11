#include <stdio.h>
#include <string.h>

struct Student{
  char name[50];
  int roll;
};

void insert(struct Student *myStudents, int studentNumber){
  printf("Enter the name of the student: ");
  scanf("%s", myStudents[studentNumber].name);

  printf("Enter the roll of the student: ");
  scanf("%d", &myStudents[studentNumber].roll);
}

void delete(struct Student *myStudents,int studentCount){
  printf("Enter the delete position");
  int deletePosi;
  scanf("%d", &deletePosi);
  for (int i = deletePosi; i < studentCount; i++){
    strcpy(myStudents[i].name, myStudents[i+1].name);
    myStudents[i].roll = myStudents[i+1].roll;
  }
}

int search(struct Student *myStudents, int studentCount){
  printf("Enter the number you want to search: ");
  int rollKey;
  scanf("%d", &rollKey);
  for(int i = 0; i < studentCount; i++){
    if (myStudents[i].roll == rollKey){
      printf("\nName of the student: %s\n", myStudents[i].name);
      return rollKey;
    }
  }
  return -1;
}

void display(struct Student *myStudents, int studentCount){
  for (int i = 0; i < studentCount; i++){
    printf("\n%s, %d \n", myStudents[i].name, myStudents[i].roll);
  }
}

int main(){
  struct Student s[100];
  int st_num = 0;
  int choice = 0;
  while (choice < 4){

    printf("\n0:Insert\n1:Delete\n2:Search\n3:Display\n4:Exit\nGive your choice: \n");
    scanf("%d", &choice);
    switch (choice){
      case 0:
        insert(s, st_num);
        st_num++;
        break;

      case 1:
        delete(s,st_num);
        st_num--;
        break;

      case 2:
        search(s,st_num);
        st_num--;
        break;

      case 3:
        display(s, st_num);
        break;
      case 4:
        printf("Exit.");
        break;

      default:
        printf("Invalid Choice");
        break;
    }
  }
  return 0;
}