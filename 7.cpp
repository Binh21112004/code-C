#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int x=a/b*b;  // chia nguyen
	printf("%d\n",x);
	if(a%b==0){
		printf("%d\n",a);
	}
	else{
		int c=(a/b+1)*b; // chia nguyen
		printf("%d",c);
	}
	return 0;
}
// cách 2: so thu 2 la (a+b-1)/b*b
