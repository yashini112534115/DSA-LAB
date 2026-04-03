#include<stdio.h>
int main()
{
	int n,i,j,temp,minindex;
	printf("Enter number of elements:");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter %d elements: \n",n);
	for(i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	    
	//selection sort logic
	for(i=0;i<n-1;i++)
   {
	minindex=i;
		
		for(j=i+1;j<n; j++)
		{
		if(arr[j]<arr[minindex])
		  minindex=j;
        }
	
	//Swap
	temp=arr[i];
	arr[i]=arr[minindex];
	arr[minindex]=temp;
    }

  printf("sorted array: \n");
  for(i=0;i<n;i++)

  printf("%d",arr[i]);

 return 0;
}
