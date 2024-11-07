#include<stdio.h>
int main()
{
	int hoursworkedinaweek;
	int hourlywage;
	int grosspay;
	float taxes;
	float netpay;
	float regularpay;
	float overtimehours;
	float overtimepay;
	
	printf("enter hoursworkedinaweek: ");
	scanf("%d", &hoursworkedinaweek);
	printf("enter hourlywage: ");
	scanf("%d", &hourlywage);
	
	//calculate grosspay
	if(hoursworkedinaweek <= 40){
		grosspay = (hoursworkedinaweek * hourlywage);
		
	}else{
		regularpay = (40 * hourlywage);
		
		//calculate overtimehours
		overtimehours = (hoursworkedinaweek - 40);
		
		 //calculate overtimepay
		 overtimepay = (overtimehours * hourlywage * 1.5);
		 
		  grosspay = (regularpay + overtimepay);
		  
	}
	
	//calculate taxes
	if(grosspay <= 600){
		taxes = (grosspay * 0.15);
		
	}else{
		taxes = (600 * 0.15 + (grosspay - 600) * 0.20);
	}
	
	//calculate netpay
	netpay = (grosspay - taxes);
	
	printf("grosspay: %d \n",grosspay);
	printf("taxes: %f \n",taxes);
	printf("netpay: %f \n",netpay);
	
	return 0;
		
		 
}