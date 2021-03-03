#include<stdio.h> 
#include<string.h> 
int hackhere(){
	printf("Congratulations! You hacked me now.\n");
}
int foo(){
	printf("Wrong!!!\n");
}
int main(){
    char username[10];
    printf("Give me your username:");
    scanf("%s",username);
    if(strlen(username)==4 && !strcmp(username,"admin")){
		hackhere();
    } 
    else{
		foo();
    }
}
