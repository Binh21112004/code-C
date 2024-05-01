#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>=0&&a<=12&&b>0){
		if(a==1||a==3||a==5||a==7||a==8||a==10||a==12){
			printf("31");
		}
			else if(a==4||a==6||a==9||a==11){
				printf("30");
		}
		    else if(a==2&&(b%400==0||(b%4==0&&b%100!=0))){
		    	printf("29");
			}
		else {
               printf("28");		
		}
	}
	
	else{
		printf("INVALID");
	}
	
	
	return 0;
}
