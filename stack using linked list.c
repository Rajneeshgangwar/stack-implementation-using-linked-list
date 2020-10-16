#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<process.h>
int count=0;
 struct node
    {
        int info;
        struct node *next;
    };
    struct node *top;
void push()
{
    int n;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nenter the element");
        scanf("%d",&n);

            if(top==NULL)

        {
            newnode->info=n;
            newnode->next=NULL;
            top=newnode;

        }
        else
        {

            newnode->info=n;
            newnode->next=top;
            top=newnode;

        }



}


void pop()
{
    struct node *temp;
if(top==NULL)
    printf("\nstack is empty");
else
      {   temp=top;
        top=top->next;
        free(temp);
        printf("\nitem popped successfully");
      }
}
void display()
{
    int i;
    struct node *p;
    p=top;
    if(p==NULL)
        printf("\nthe stack is empty");
    else
    {
        printf("\n the stack is........");
        while(p!=NULL)
      {
          printf("%d ",p->info);
          p=p->next;

    }
}
}
void main()
{

    struct node *top=NULL;
    int ch,n;
    while(1)
    {

      printf("\n1.push\n2.pop\n3.dispaly\n4.exit");
      printf("\nenter the choice");
      scanf("%d",&ch);
      switch(ch)
    {
        case 1:
            if(count<5)
            {
                push();
                count++;
            }
            else
                printf("stack is over flow");
            break;
        case 2:
            pop();
            count--;
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\ninvalid choice");

    }

  }


}

