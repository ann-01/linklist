#include<stdio.h>
#include<stdlib.h>
void main()
{
   struct node
   {
     int data;
     struct node*next;
   };
struct node *head=NULL,*pos=NULL,*tail=NULL;
   int ch,entry,count=0;
   while(1)
   {
      printf("\n1.Insert \n2.Display \n3.Exit");
      printf("\n Enter your choice:");
      scanf("%d",&ch);
   switch(ch)
   {
      case 1:
             {
             printf("Enter the data:");
             scanf("%d",&entry);
             if(head==NULL)
             {
                head=(struct node*)malloc(sizeof(struct node));
                head->data=entry;
                pos=head;
                tail=head;
             }
             else
             {
              tail->next=(struct node*)malloc(sizeof(struct node));
              tail=tail->next;
              tail->data=entry;
             }
             break;
             }
     case 2:
           {
           pos=head;
           printf("\nELEMENTS ARE:");
           while(pos!=NULL)
           {
               printf("%d \n",pos->data);
               pos=pos->next;
           }
           break;
           }
  case 3:
  {
   pos=head;
   while(pos!=NULL)
   {
       count++;
       pos=pos->next;
   }
   printf("No. of elements=%d",count);
   }
   break;             
   case 4:
        {
        printf("Good Bye\n");
        exit(0);
 
        }
}
}
}
      
           
           
           
           
           
