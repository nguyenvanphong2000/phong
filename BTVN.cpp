#include <stdio.h>
int main(){
	int n,t; // n: thu tu ngay trong nam , t: thang
	scanf("%d%d",&n,&t);
	int ngay;
	int thu;
	if(t==1){
		ngay =n;
	}else if(t==2){
		ngay =n+31;
	}else if(t==3){
		ngay =n+31+28;
	}else if(t==4){
		ngay =n+31+28+31;
	}else if(t==5){
		ngay =n+31+28+31+30;
	}else if(t==6){
		ngay =n+31+28+31+30+31;
	}else if(t==7){
		ngay =n+31+28+31+30+31+30;
	}else if(t==8){
		ngay =n+31+28+31+30+31+30+31;
	}else if(t==9){
		ngay =n+31+28+31+30+31+30+31+30;
	}else if(t==10){
		ngay =n+31+28+31+30+31+30+31+30+31;
	}else if(t==11){
		ngay =n+31+28+31+30+31+30+31+30+31+30;
	}else if(t==12){
		ngay =n+31+28+31+30+31+30+31+30+31+30+30;
	}
	thu=ngay%7;
	if(thu==1){
		printf("thu 2");
	}else if(thu==2){
		printf("thu 3");
	}else if(thu==3){
		printf("thu 4");
	}else if(thu==4){
		printf("thu 5");
	}else if(thu==5){
		printf("thu 6");
	}else if(thu==6){
		printf("thu 7");
	}else if(thu==0){ // chia lay du cho 7 khong co du 7;
		printf("chu nhat");
	}
	printf("\nngay thu %d trong nam",ngay);
	
}
