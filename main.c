#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input;
	
	printf("숫자를 입력해주세요 : ");
	scanf("%d",&input);
	
	if (input>0)
		printf("양수입니다.\n");
	else
		printf("음수입니다.\n");	
	return 0;
}
