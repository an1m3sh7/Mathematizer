#include<stdio.h>
#include<conio.h>
void main()
{
    int First,Middle,Last,Search,n,array[100];
    printf("Enter the number of Elements you want to enter\n");
    scanf("%d",&n);
    printf("Enter %d Element-->\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);

    }
    printf("Enter value to find\n");
    scanf("%d",&Search);

    First=0;
    Last=n-1;
    Middle=(First+Last)/2;

    while (First <= Last)
    {
        if(array[Middle] < Search)
        First=Middle+1;
        else if (array[Middle] == Search);
        {
            printf("%d found at location %d \n",Search,Middle+1);
            break;
        }
        else
        {
        Last=Middle+1;
        Middle = (First+Last)/2;
        }
    }
    if (First>Last)
    {
        printf("Not found %d is not Present in the list \n",Search);
    }
    
    

}