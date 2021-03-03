#include <stdio.h>
#define N 95
int main(){
    int Number;
    unsigned short number;
    while(1){
        printf("ID Number:");
        scanf("%d", &Number);
        number = Number;
        if(number <= N && Number > N){
            puts("Welcome!!!");
            break;
        }
        else {
            printf("%d\n", number);
            printf("It is illegal, please check your id number.\n");
        }
    }
    return 0;
}
