//write a c program to use the insert,delete ,search and display operationns to show the ddetail of a student name and roll numbrer//
#include <stdio.h>
#include <string.h>
struct student{
    char name[100];
    int roll;   
    };
    void  insert( struct student *s,int student_num){
       printf("Enter the name of student :");
       scanf("%s",s[student_num].name);
       printf("Enter the roll number of student:");
       scanf("%d",&s[student_num].roll);
        }
        void delete(struct student *s,int *student_num){
            int roll;
            printf("Enter the roll number of the student to delete: ");
            scanf("%d",&roll);
            for(int i=0;i<*student_num;i++){
                if(s[i].roll==roll){
                    for(int j=i;j<*student_num-1;j++){
                        s[j]=s[j+1];
                    }
                    (*student_num)--;
                    printf("Student with roll number %d deleted successfully.\n",roll);
                    return;
                }
            }
            printf("Student with roll number %d not found.\n",roll);
        }
        int search(struct student *s,int student_num){
            int roll;
            printf("Enter the roll number of the student to search: ");
            scanf("%d",&roll);
            for(int i=0;i<student_num;i++){
                if(s[i].roll==roll){
                    printf("Student found: Name: %s, Roll Number: %d\n",s[i].name,s[i].roll);
                    return 1;
                }
            }
            printf("Student with roll number %d not found.\n",roll);
            return 0;
        }   
        void display(struct student *s,int student_num){
            if(student_num==0){
                printf("No students to display.\n");
                return;
            }
            printf("Student Details:\n");
            for(int i=0;i<student_num;i++){
                printf("Name: %s, Roll Number: %d\n",s[i].name,s[i].roll);
            }
        }   
        int main(){
            struct student s[100];
            int student_num=0;
            int choice;
            do{
                printf("\nMenu:\n");
                printf("1. Insert Student\n");
                printf("2. Delete Student\n");
                printf("3. Search Student\n");
                printf("4. Display Students\n");
                printf("5. Exit\n");
                printf("Enter your choice: ");
                scanf("%d",&choice);
                switch(choice){
                    case 1:
                        insert(s,student_num);
                        student_num++;
                        break;
                    case 2:
                        delete(s,&student_num);
                        break;
                    case 3:
                        search(s,student_num);
                        break;
                    case 4:
                        display(s,student_num);
                        break;
                    case 5:
                        printf("Exiting...\n");
                        break;
                    default:
                        printf("Invalid choice. Please try again.\n");
                }
            }while(choice!=5);
            return 0;
        }   