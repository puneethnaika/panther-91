/* rock paper scissor*/
#include<stdio.h>
int main()
{
  int s, p, r, value1, value2;
  printf("note 1 for scissor \n 2 represents paper \n 3 represents rock\n");
 
  printf("Enter a number of your choice person 1\n");
  scanf("%d", value1);
  printf("Enter a number of your choice person 2\n");
  scanf("%d", value2);

  if(value1<value2)
      printf("Person 1 is the winner");
 
  
  
  return 0;
}