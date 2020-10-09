/*
https://www.facebook.com/permalink.php?story_fbid=151732496593519&id=100052703091127
Subscribed By Joy Roy 
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    int i,j,k,l;
    //printf("Enter_rows_and_collumns_for_first_array :\n");
    scanf("%d %d",&i,&j);
    int arr1[i][j];
    //printf("Enter_rows_and_collumns_for_second_array :\n");
    scanf("%d %d",&k,&l);
    int arr2[k][l];
    // if ( j!=k )
    // {
    //     printf("Multiplication_not_possible");
    //     return 1;
    // }
    if ( j==k )
    {
        int multi[i][l];
        for ( int n=0;n<i;n++ )
            for ( int m=0;m<j;m++ )
                scanf("%d",&arr1[n][m]);
        for ( int n=0;n<k;n++ )
            for ( int m=0;m<l;m++ )
                scanf("%d",&arr2[n][m]);
        for ( int n=0;n<i;n++ )
        {
            for ( int m=0;m<l;m++ )
            {
                multi[n][m]=0;
                for ( int p=0;p<j;p++ )
                {
                    multi[n][m]+=arr1[n][p]*arr2[p][m];
                }
            }
        }
    
        printf("%d\t%d\n",i,l);
        for ( int n=0;n<i;n++ )
        {
            for ( int m=0;m<l;m++ )
                printf("%d\t",multi[n][m]);
            printf("\n");
        }
    }
}
