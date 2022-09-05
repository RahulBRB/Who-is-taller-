#include <stdio.h>

int main(void) {
	
	int t;
	scanf("%d", &t);
	
	int x,y;
	
	while(t--){
	    scanf("%d%d", &x,&y);
	    if(x>y){
	        printf("A \n");
	}
	else {
	    printf("B \n");
	}}
	return 0;
}

