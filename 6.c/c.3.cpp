#include<stdio.h>

main()
{
	float maths,science,english,sum,averge;
	printf("enter maths marks:");
	scanf("%f",&maths );
	printf("enter science marks:");
	scanf("%f",&science );
		printf("enter english marks:");
	scanf("%f",&english);


    sum=maths+science+english;
	averge=sum/3;
		printf("averge marks is % .2f\n",averge);
	if (averge>=90 && averge<100)
	{
		printf("a+");
	}
}
	
	

	
			
				
	
	
