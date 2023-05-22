#include<stdio.h>
void main(){
	float cel = 0, fer = 300;
	float upper = 300, lower = 0, step = 20;

	while(fer > 0){
		cel = (5.0/9.0)*(fer-32.0);
		printf("%6.2f %6.2f\n",cel, fer);
		fer = fer - step;
	}
}
