//prime number program
//https://www.facebook.com/Ashi.Sk99/posts/1430832100447900
//subscribed by Code House
#include<stdio.h>
int main()
{
    int i,num,prime=0;;
    printf("Enter the number to check it's prime or not : \n");
    scanf("%d",&num);
    for(i=2;i<=sqrt(num);i++)
    {
if(num%i==0)
{
prime=1;
}
    }
    if(prime==0)
    {
        printf("It's not a  prime number.");
    }
 else
 {
     printf("It's a prime number.");
 }

}