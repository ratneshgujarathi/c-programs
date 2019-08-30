#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *set,f,i,h,ch;
	do{
	int j=0;
	printf("\nEnter How many elements you Wanted to enter\n");
	scanf("%d",&f);
	set=(int *)malloc(sizeof(int)*(f));

	for(i=0;i<f;i++)
	{
		printf("Enter the elements\t");
		scanf("%d",&set[i]);
	}

		printf("The elements are {");
	for (i = 0; i<f; i++)
	{
		printf(" %d,",set[i]);
		j=j+1;
	}
	for (i=0; i<f; i++)
	{
	      h=set[i];
		for(i=0;i<f;i++)
	       {
		if(h==set[i+1])
		j=j-1;
		}
	}
	printf("}");
	printf("\nCardinality of given set is %d\n",j );

	printf("Do you want to continue press 1 or enter anything else\n");
	scanf("%d",&ch);
	}
	while(ch==1);
       {
       exit(0);
       }
}