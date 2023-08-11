 
 #include<stdio.h>

int main()
{
	int room  , days ;
	char card , acco ;
	float total , discount ;
	
	float f1 = 25555.00 , f2 = 17500.00 , f3=9000.00 ;
	float h1=17250.00 ,  h2=12250.00 , h3=7250.00 ;
	
	float dic_G=12.5 , dic_s=11.5 , dic_b=9.5 ;
	
	
	printf("enter the room type:");

	scanf("%d" , &room);
	
 while(room != -1){
 	
	if(room == 1){
		printf("enter the acoomadation type(f / h) :");
		scanf("%*c%c" , &acco);
		
		printf("enter the number of days :");
		scanf("%d" , &days);
		
		printf("enter the card type(G , S, B) :");
		scanf("%*c%c" , &card);
		
		
		if(acco == 'F' || acco =='f'){
			
			if(card == 'G' || card == 'g'){
				
				total = days * f1 ;
				
				discount = total * dic_G / 100.0  ;
				
				total = total - discount ;
				
				printf("the total is RS: %.2f /n" , total);
				
				
			}
			else if(card == 'B' || card == 'b'){
				
				total = days * f1 ;
				
				discount = total * dic_b / 100.0  ;
				
				total = total - discount ;
				
				printf("the total is RS: %.2f " , total);
					
			
			  }else {
			  	 total = days * f1 ;
				
				discount = total * dic_s / 100.0  ;
				
				total = total - discount ;
				
				printf("the total is RS: %.2f /n" , total);
			  	
			  	
			  }
			
			
		}   
		
		if(acco == 'H' || acco =='h'){
			
			if(card == 'G' || card == 'g'){
				
				total = days * f1 ;
				
				discount = total * dic_G / 100.0  ;
				
				total = total - discount ;
				
				printf("the total is RS: %.2f /n" , total);
				
				
			}
			else if(card == 'B' || card == 'b'){
				
				total = days * f1 ;
				
				discount = total * dic_b / 100.0  ;
				
				total = total - discount ;
				
				printf("the total is RS: %.2f /n" , total);
					
			
			  }else {
			  	 total = days * f1 ;
				
				discount = total * dic_s / 100.0  ;
				
				total = total - discount ;
				
				printf("the total is RS: %.2f /n" , total);
			  	
			  	
			  }
		}
			
			
		}
		
	
	else if(room == 2){
		
		printf("enter the acoomadation type(f / h) :");
		scanf("%*c%c" , &acco);
		
		printf("enter the number of days :");
		scanf("%d" , &days);
		
		printf("enter the card type(G , S, B) :");
		scanf("%*c%c" , &card);
		
		
		if(acco == 'F' || acco =='f'){
			
			if(card == 'G' || card == 'g'){
				
				total = days * f2 ;
				
				discount = total * dic_G / 100.0  ;
				
				total = total - discount ;
				
				printf("the total is RS: %.2f /n" , total);
				
				
			}
			else if(card == 'B' || card == 'b'){
				
				total = days * f2 ;
				
				discount = total * dic_b / 100.0  ;
				
				total = total - discount ;
				
				printf("the total is RS: %.2f /n" , total);
					
			
			  }else {
			  	 total = days * f2 ;
				
				discount = total * dic_s / 100.0  ;
				
				total = total - discount ;
				
				printf("the total is RS: %.2f /n" , total);
			  	
			  	
			  }
			
			
		} if(acco == 'H' || acco =='h'){
			
			if(card == 'G' || card == 'g'){
				
				total = days * f1 ;
				
				discount = total * dic_G / 100.0  ;
				
				total = total - discount ;
				
				printf("the total is RS: %.2f /n" , total);
				
				
			}
			else if(card == 'B' || card == 'b'){
				
				total = days * f1 ;
				
				discount = total * dic_b / 100.0  ;
				
				total = total - discount ;
				
				printf("the total is RS: %.2f /n" , total);
					
			
			  }else {
			  	 total = days * f1 ;
				
				discount = total * dic_s / 100.0  ;
				
				total = total - discount ;
				
				printf("the total is RS: %.2f /n" , total);
			  	
			  	
			  }
		}
			
			
		}
		  
		
	

	else if(room == 3){
		
		printf("enter the acoomadation type(f / h) :");
		scanf("%*c%c" , &acco);
		
		printf("enter the number of days :");
		scanf("%d" , &days);
		
		printf("enter the card type(G , S, B) :");
		scanf("%*c%c" , &card);
		
		
		if(acco == 'F' || acco =='f'){
			
			if(card == 'G' || card == 'g'){
				
				total = days * f3 ;
				
				discount = total * dic_G / 100.0  ;
				
				total = total - discount ;
				
				printf("the total is RS: %.2f /n" , total);
				
				
			}
			else if(card == 'B' || card == 'b'){
				
				total = days * f3 ;
				
				discount = total * dic_b / 100.0  ;
				
				total = total - discount ;
				
				printf("the total is RS: %.2f /n" , total);
					
			
			  }else {
			  	 total = days * f3 ;
				
				discount = total * dic_s / 100.0  ;
				
				total = total - discount ;
				
				printf("the total is RS: %.2f /n" , total);
			  	
			  	
			  }
		
	} 
	if(acco == 'H' || acco =='h'){
			
			if(card == 'G' || card == 'g'){
				
				total = days * f1 ;
				
				discount = total * dic_G / 100.0  ;
				
				total = total - discount ;
				
				printf("the total is RS: %.2f /n" , total);
				
				
			}
			else if(card == 'B' || card == 'b'){
				
				total = days * f1 ;
				
				discount = total * dic_b / 100.0  ;
				
				total = total - discount ;
				
				printf("the total is RS: %.2f /n" , total);
					
			
			  }else {
			  	 total = days * f1 ;
				
				discount = total * dic_s / 100.0  ;
				
				total = total - discount ;
				
				printf("the total is RS: %.2f /n" , total);
			  	
			  	
			  }
		}
			
			
		}
		
	else {
		
		printf("invalid input");
	}
	printf("enter the room type:");

	scanf("%d" , &room);
}
	return 0 ;
}
