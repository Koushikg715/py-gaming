# swapping
Just another repository
/*swapping of two numbers using pointer*/
void swap(int *,int *);
int main()
{
  int a,b;
  printf("Enter numbers:");
  scanf("%d %d",&a,&b);
  printf("Before swapping:");
  printf("numbers were %d and %d",a,b);
  swap(&a,&b);
  printf("After swapping:");
  printf("numbers are %d and %d",a,b);
  return 0;
  }
  
  
 void swap(int *x,int *y)
 { int temp;
   temp=*x;
   *x=*y;
   *y=temp;
   }
  
