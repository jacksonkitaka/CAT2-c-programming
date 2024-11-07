#include<stdio.h>
int main()
{
	int j,k,r;
	
	int score[2][2][2] = { {{65,92},{84,72}},{{35,70},{59,67}} };
	for(j=0;j<2;j++){
		
		for(k=0;k<2;k++){
			
			for(r=0;r<2;r++){
			
			printf("score[%d][%d][%d]= %d \n",j,k,r, score[j][k][r]);
			
			}
			
		}
		
	}

	return 0;
		
}