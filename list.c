#include<stdio.h>
#include<stdlib.h>
typedef struct list
{ 
  int data;
  struct list* next;
}node;
node  *head,*tail;// creating a head and tail of a list //

void insert( int n)  //inserting a node // 
{ 
  node *start;
  start=(node*)malloc(sizeof(node));
  start->data=n;
  start->next=NULL;
  if(head==NULL)// if the list is empty //
  { 
    head=start;
    tail=start;
  }
  else// if the list is not empty it adds a node after another node, like that it creates a list //
  { 
    tail->next=start;
    tail = start;
  }
}
void print_list()// it prints the list//
{ 
  node *start;
  start = head;
  while(start!=NULL)
  { 
    printf(" %d ",start->data);
    start=start->next;
  }
  printf("\n");
}

void is_empty()// it prints whether the list is empty or not //
{ 
  node *start = head;
  if(start->next==NULL)
    printf(" the list is empty \n");
  else
    printf(" the list is not empty \n ");
}

void find()// it finds whether the entered node is there or not if it is there it prints with the position //
{
  node *start = head;
  int f;
  int count =0;
  printf(" enter a number to find : ");
  scanf("%d",&f);
  while(start!=NULL)
  {
    if(start->data==f)
    {
      printf(" the position is %d \n",count);
      return;
    }
    count++;
    start=start->next;
  }
  printf("NULL");
}


void delete(int n)// it deletes the node given by the user//
{
  node *temp = head, *prev;
  while (temp != NULL && temp->data !=n )
  {
    prev = temp;
    temp = temp->next;// it deletes 1 from the list when n = 1//
  }
  prev->next = temp->next;
  free(temp);
  printf(" printing the new list \n");
}
void delete_list()//it deletes the entire list by pointing the head to null//
{
  node *start = head;
  start->next= NULL;
  free( start );
}

int main()
{
  insert(8);
  insert(2);
  insert(3);
  insert(1);
  insert(4);
  insert(6);
  insert(9);
  print_list();
  is_empty();
  find();
  delete(1);
  print_list();
  delete_list();
}

                                                                                                                                                                                          104,0-1       Bot
