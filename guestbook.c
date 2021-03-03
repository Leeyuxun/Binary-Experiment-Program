#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int function()
{
    int i;
    char **tmp;
    const char *sys;
    int flag;
    char *name;
    char *dest[4];
    int choice;
    int num;
    char s[100];

    setvbuf(stdout,0,2,0x14);
    puts("Please setup your guest book");
    for(i=0;i<=3;i++)
    {
	printf("Name for guest: #%d\n>>>",i);
	name = malloc(0xf);
	scanf("%15s",name);
        getchar();
        name[14]=0;
	dest[i]=name;
    }
    tmp = dest;
    sys = &system;
    flag = 1;
    while(flag)
    {
	puts("---------------------------");
    	puts("1: View name");
    	puts("2: Change name");
    	puts("3. Quit");
    	printf(">>");
	scanf("%d",&choice);
	getchar();
	switch(choice)
	{
	    case 1:
		printf("Which entry do you want to view?\n>>>");
    
	        scanf("%d",&num);
	        getchar();
	        if(num>=0)
	        {
		    puts(dest[num]);
	        }
	        else
	    	    puts("Enter a valid number");
		//readName(dest);
		break;
	    case 2:
		printf("Which entry do you want to change?\n>>>");
		scanf("%d",&num);
		getchar();
		if(num>=0)
		{
		     printf("Enter the name of the new guest.\n>>>");
		     gets(&s);
		     strcpy(dest[num], &s);
		}
		else
        	{
         	     puts("Enter a valid number");
        	}
		break;
	    case 3:
		flag = 0;
		break;
	    default:
        	puts("Not a valid option. Try again");
        	break;
	} 
    }
    return 0;
}
int main()
{
    function();
}
