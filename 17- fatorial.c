#include <stdio.h>

int main(){
	int num,i;
	printf("Digite um valor: ");
	scanf("%d",&num);
		for(i=1;num>1;num--){
			i=i*num;
		}
	printf("%d",i);
	return 0;		
}
