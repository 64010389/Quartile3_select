#include<stdio.h>
int main(){
	int n,i,j,a,b,R;
	int num[100];
	float Q3;
	int min_index;
	printf("Enter Amount of Number You want to put : ");
	scanf("%d",&n);
	printf("Enter Number : ");
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;++i){
		min_index = i;
		for(j=i;j<10;++j){
			if(num[j]<num[min_index]){
				min_index=j;
			}
		}
		a=num[i];
		b=num[min_index];
		num[i]=b;
		num[min_index]=a;
	}
	Q3=(3*(n+1))/4.0;
	R=((n+1)*3)/4;
	if((Q3-R)==0){
		printf("Third Quartiles (Q3) : %d",num[R-1]);
	}else{
		float q3;
		q3=num[R-1]+((Q3-R)*(num[R]-num[R-1]));
		printf("Third Quartiles (Q3) : %.2f",q3);
	}
	
	
}