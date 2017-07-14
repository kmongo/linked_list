#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int power3(int val){
	int temp = val;
	
	while (temp%3 == 0)
		temp = temp / 3;
	
//	printf("power3=%d\n", temp);
	
	if (temp == 1)
		return TRUE;
	else 
		return FALSE;		
}

int div2(int val){
	int temp = val;
	
	while (temp%2 == 0)
		temp = temp / 2;
		
//	printf("div2=%d\n", temp);
	return temp;
}

int main(){
	int num,temp,result;
	int count = -1;
	int pos = 0;
	printf("input numbers?\n");
	scanf("%d",&num);

	while(count < num){
		pos++;

		temp = div2(pos);
//		printf("after div2=%d\n", temp);
		result = power3(temp);		
//		printf("OK=%d\n", result);
		
		if(result == TRUE)
			count++;
//		printf("pos=%d, count=%d\n\n", pos, count);
	}
	
	printf("answer=%d\n", pos);
}
