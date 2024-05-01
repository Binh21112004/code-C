#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",a+b);
	printf("%d\n",a-b);
	printf("%lld\n",1ll*a*b);
	if(b==0){
		printf("INVALID\n");
	}
	else{
		printf("%.4lf\n",1.0*a/b);
	}
	
	return 0;
	}
