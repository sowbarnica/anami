#inlude <stdcio.h>
int main(void) 
{
int a,b,c;
scanf("%d /n,%d/n,%d/n", &a,&b,&c);
printf("Enter the numbers = /n");
if((a>b)&&(a>c))
{
	printf("a is the largest number");
}
else if(b>c)
{
	printf("b is the largest number");
}
else
{
	printf("c is the largest number");
	
}
	return 0;
}
