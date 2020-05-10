/*how to swap two numbers using pointer*/
void swap(int *,int *);
int main()
{
	int a,b;
	printf("Enter numbers:");
	scanf("%d %d",&a,&b);
	printf("Before swapping:");
	printf("\na=%d b=%d",a,b);
	printf("\nAfter swapping:");
	swap(&a,&b);
	printf("\na=%d b=%d",a,b);
	return 0;
	
}

void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}


