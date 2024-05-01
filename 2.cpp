#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d ",&a);
	scanf("%d",&b);
	scanf("%d",&c);  // phai scanf trc neu khong kq a b c là gtri rác
	long long kq=1ll*a*(b+c)+1ll*b*(a+c);
	printf("%lld",kq);
	
	return 0;
}
