#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[20];

};
int main()
{  int num;
    printf("enter the number of student\n");
    scanf("%d",&num);
    struct student *ptr[num];
    *ptr=(struct student* )malloc(sizeof(struct student));
    if(&ptr==NULL)
    {
        printf("out of memory Error \n");
    }
    else{
        printf("Enter the name\n");
        scanf("%s",&ptr->name);
        printf("\n enter the marks\n");   
    }




    return 0;
}