#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n%2==0){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	if(n%5==0&&n%3==0){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	if(n%3==0&&n%7!=0){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	if(n%3==0||n%7==0){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	if(n>30&&n<50){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	if(n>=30&&(n%2==0||n%3==0||n%5==0)){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	if(n>=10&&n<=99&&(n%10==2||n%10==3||n%10==5||n%10==7)){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	if(n<=100&&n%23==0){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	if(!(n>=10&&n<=20)){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	if((n%10)%3==0){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}
