#include<stdio.h>
#include<conio.h>
#define maxsize 10   // preprocessor statement to define maxsize of que
int queue[maxsize]; // declare array 
int rear=-1;     // for insert elment 
int front=0;     // for delete or remove element
/*-----------------------------------------------------------*/
int  main()
{ 
 
    int choice;
    do
    {
    printf("\n 1.insert \n 2. delete \n 3 display \n 4 exit");
    printf("\n---------------------------------------------");
    printf("\n enter the choice  = "); 
    scanf("%d",&choice);
switch(choice)
{ 
    case 1:
            insert();
            break;
    case 2:
            delete1();
            break;
    case 3:
            display();
            break;      
    default:
             printf("invalid choice");
} 
}  while(choice!=4);
return 0;

} 
int insert()
{
    int n;
    if(rear==maxsize-1)
    {
        printf("queue is overflow");
    }
    else
    {
        printf("enter an element=");
        scanf("%d",&n);
        rear++;
        queue[rear]=n;
    }
    return 0;
}
int delete1()
{
    int n;
    if(front>rear)
    {
        printf("queue is empty");
    }
    else
    {
        n=queue[front];
        printf("Deleted element = %d",n);
        front ++;
    }
return 0;
    
}
int display()
{ 
    int i;
    if(front>rear)
    {
        printf("queue is empty");
    }
    else
    {
        printf("\n----queue elements----\n");
        for( i=front;i<=rear;i++)
        {
            printf("%d\n",queue[i]);
        }
    }
    return 0;
}
