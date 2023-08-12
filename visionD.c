#include<stdio.h> 

int SriLankan_E =36500   ,  SriLankan_B=77600 ,  ExtraLuggage=7800 ;     
int  Emirates_E =35800     ,  Emirates_B =76500  ,  ExtraMeal=1500 ;
int ThaiAirways_E = 54600 ,  ThaiAirways_B = 84700 ,  RoomHotel =19500 ;         
int AirAsia_E  =  28500   ,   AirAsia_B=42800      , TaxiService =2000;


int main() 
{
	int option,seats,option1;
	char type,need;
	float total=0;
	
	printf("Input Airline Option : ");
	scanf("%d",&option);
	printf("Class type ( E/ B ) :");
	scanf(" %c",&type);
	printf("Number of seats :");
	scanf("%d",&seats);
	if(option==1) 
	{
		if(type=='E'||type=='e')
		{
		printf("Do you need any extra services ( y/n) :");
		scanf(" %c",&need);
		while(need=='y'||need=='Y') 
		{
		printf("Input your option :");
		scanf("%d",&option1);
		    if(option1==1)
		    {
		    	total=SriLankan_E*seats+ExtraLuggage;
			}
			if(option1==2)
		    {
		    	total=SriLankan_E*seats+ExtraMeal;
			}
			if(option1==3)
		    {
		    	total=SriLankan_E*seats+RoomHotel;
			}
			if(option1==4)
		    {
		    	total=SriLankan_E*seats+TaxiService;
			}
		printf("Do you need any extra services ( y/n) :");
		scanf(" %c",&need);
		}
		
		printf("Total Price :%.2f",total);	
		} 
		
		if(type=='B'||type=='b')
		{
		printf("Do you need any extra services ( y/n) :");
		scanf(" %c",&need);
		while(need=='y'||need=='Y') 
		{
		printf("Input your option :");
		scanf("%d",&option1);
		    if(option1==1)
		    {
		    	total=SriLankan_B*seats+ExtraLuggage;
			}
			if(option1==2)
		    {
		    	total=SriLankan_B*seats+ExtraMeal;
			}
			if(option1==3)
		    {
		    	total=SriLankan_B*seats+RoomHotel;
			}
			if(option1==4)
		    {
		    	total=SriLankan_B*seats+TaxiService;
			}
		printf("Do you need any extra services ( y/n) :");
		scanf(" %c",&need);
		}
		
		printf("Total Price :%.2f",total);	
		} 
	    
	}
	
	
	if(option==2) 
	{
		if(type=='E'||type=='e')
		{
		printf("Do you need any extra services ( y/n) :");
		scanf(" %c",&need);
		while(need=='y'||need=='Y') 
		{
		printf("Input your option :");
		scanf("%d",&option1);
		    if(option1==1)
		    {
		    	total=Emirates_E*seats+ExtraLuggage;
			}
			if(option1==2)
		    {
		    	total=Emirates_E*seats+ExtraMeal;
			}
			if(option1==3)
		    {
		    	total=Emirates_E*seats+RoomHotel;
			}
			if(option1==4)
		    {
		    	total=Emirates_E*seats+TaxiService;
			}
		printf("Do you need any extra services ( y/n) :");
		scanf(" %c",&need);
		}
		
		printf("Total Price :%.2f",total);	
		} 
		
		if(type=='B'||type=='b')
		{
		printf("Do you need any extra services ( y/n) :");
		scanf(" %c",&need);
		while(need=='y'||need=='Y') 
		{
		printf("Input your option :");
		scanf("%d",&option1);
		    if(option1==1)
		    {
		    	total=Emirates_B*seats+ExtraLuggage;
			}
			if(option1==2)
		    {
		    	total=Emirates_B*seats+ExtraMeal;
			}
			if(option1==3)
		    {
		    	total=Emirates_B*seats+RoomHotel;
			}
			if(option1==4)
		    {
		    	total=Emirates_B*seats+TaxiService;
			}
		printf("Do you need any extra services ( y/n) :");
		scanf(" %c",&need);
		}
		
		printf("Total Price :%.2f",total);	
		} 
	    
	}
	
	
	
	if(option==3) 
	{
		if(type=='E'||type=='e')
		{
		printf("Do you need any extra services ( y/n) :");
		scanf(" %c",&need);
		while(need=='y'||need=='Y') 
		{
		printf("Input your option :");
		scanf("%d",&option1);
		    if(option1==1)
		    {
		    	total=ThaiAirways_E*seats+ExtraLuggage;
			}
			if(option1==2)
		    {
		    	total=ThaiAirways_E*seats+ExtraMeal;
			}
			if(option1==3)
		    {
		    	total=ThaiAirways_E*seats+RoomHotel;
			}
			if(option1==4)
		    {
		    	total=ThaiAirways_E*seats+TaxiService;
			}
		printf("Do you need any extra services ( y/n) :");
		scanf(" %c",&need);
		}
		
		printf("Total Price :%.2f",total);	
		} 
		
		if(type=='B'||type=='b')
		{
		printf("Do you need any extra services ( y/n) :");
		scanf(" %c",&need);
		while(need=='y'||need=='Y') 
		{
		printf("Input your option :");
		scanf("%d",&option1);
		    if(option1==1)
		    {
		    	total=ThaiAirways_B*seats+ExtraLuggage;
			}
			if(option1==2)
		    {
		    	total=ThaiAirways_B*seats+ExtraMeal;
			}
			if(option1==3)
		    {
		    	total=ThaiAirways_B*seats+RoomHotel;
			}
			if(option1==4)
		    {
		    	total=ThaiAirways_B*seats+TaxiService;
			}
		printf("Do you need any extra services ( y/n) :");
		scanf(" %c",&need);
		}
		
		printf("Total Price :%.2f",total);	
		} 
	    
	}
	
	
	
	
	if(option==4) 
	{
		if(type=='E'||type=='e')
		{
		printf("Do you need any extra services ( y/n) :");
		scanf(" %c",&need);
		while(need=='y'||need=='Y') 
		{
		printf("Input your option :");
		scanf("%d",&option1);
		    if(option1==1)
		    {
		    	total=AirAsia_E*seats+ExtraLuggage;
			}
			if(option1==2)
		    {
		    	total=ExtraMeal*seats;
			}
			if(option1==3)
		    {
		    	total=AirAsia_E*seats+RoomHotel;
			}
			if(option1==4)
		    {
		    	total=TaxiService*seats;
			}
		printf("Do you need any extra services ( y/n) :");
		scanf(" %c",&need);
		}
		
		printf("Total Price :%.2f",total+(AirAsia_E*seats));	
		} 
		
		if(type=='B'||type=='b')
		{
		printf("Do you need any extra services ( y/n) :");
		scanf(" %c",&need);
		while(need=='y'||need=='Y') 
		{
		printf("Input your option :");
		scanf("%d",&option1);
		    if(option1==1)
		    {
		    	total=AirAsia_B*seats+ExtraLuggage;
			}
			if(option1==2)
		    {
		    	total=(AirAsia_B+ExtraMeal)*seats;
			}
			if(option1==3)
		    {
		    	total=AirAsia_B*seats+RoomHotel;
			}
			if(option1==4)
		    {
		    	total=(AirAsia_B+TaxiService)*seats;
			}
		printf("Do you need any extra services ( y/n) :");
		scanf(" %c",&need);
		}
		
		printf("Total Price :%.2f",total);	
		} 
	    
	}
	
	
	
	
	return 0;
}
