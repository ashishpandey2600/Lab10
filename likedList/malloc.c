#include<stdio.h>
#include<stdlib.h>
struct emp{
    char name[20];
    int marks;
};
int main()
{
    struct emp *ptr;
    ptr=(struct emp* )malloc(sizeof(struct emp));
    if(ptr==NULL)
    {
        printf("out of memory Error \n");
    }
    else{
        printf("Enter the name\n");
        scanf("%s",ptr->name);
        printf("\n enter the marks\n");
        scanf("%d",&ptr->marks);
        printf("you have entered :  %s %d",ptr->name,ptr->marks);
    }









    return 0;
}
