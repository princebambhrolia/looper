#include<stdio.h>
int main(){
	int num=1;
	int a=0;
	printf("Enter any number:- ");
	scanf("%d",&num);
	while (num != 0) {
        num = num / 10;
        a++;    }
    printf("Total number of digits: %d\n",a);
}