#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	double e=sqrt(pow(a-c,2)+pow(b-d,2));
	printf("%.2lf",e);
	
	
	
	return 0;
}
