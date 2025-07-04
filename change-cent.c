#include <cs50.h>
#include <stdio.h>
int calc(int n);
int main(void)
{
    /*
        Prompt the user for change owed, in cents
        user enter the change and that the total coins that are required for that cents is returned
        we have the following cents to be changed in 25,10,5,1 cent coins
    */
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);
    cents=calc(cents);
    printf("%d\n",cents);

}

int count=0;
int calc(int n)
{
    if(n>=25)
    {
        count++;
        calc(n-25);
    }
    else if(n>=10)
    {
        count++;
        calc(n-10);

    }
    else if(n>=5)
    {
        count++;
        calc(n-5);
    }
    else if(n<5 && n>0)
    {
        count+=n;
    }
    return count;
}
