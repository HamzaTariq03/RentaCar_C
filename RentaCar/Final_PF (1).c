#include<stdio.h>
#include<conio.h>
#define SIZE 30
int main()
{
    int vehicles, cars, long_veh, luxury, n, t, driver, with_driver;
    char name[SIZE];
    int phone[11];
 
    printf("\n \t\t\t\t\t\t **********\n");  
    printf("\t\t\t\t\t\t Rent A Car \n");  
    printf("\t\t\t\t\t\t **********\n"); 
    
    
    printf("\n Enter your Full Name: ");
    gets(name);
    printf("\n Enter your Phone no: ");
    scanf("%s", &phone);
    
    printf("\n For how many days you want a car: ");
    scanf("%d", &n);
    printf("\n ----------------------- \n");
    printf("\n Press 1 For  5 Seater");
    printf("\n Press 2 For  Long Trip Vehicle (more than 5 seater)");
    printf("\n Press 3 For  Luxury Vehicle \n");
    printf("\n ---------------------------- \n");
    printf("\n ---------------------------- \n");
    printf("\n Please Click Option According To Your Condition: ");
    scanf("%d", &vehicles);
    
    if(vehicles>3)
    {
    	printf(" Invalid number");
	}
	else
	{

     switch(vehicles)
     {
        case 1:
        printf("\n You have chosen 5 Seater Vehicle \n");
        printf("\n ------------------------------ \n");
        printf("\n Your Vehicle : \n Press 1 for Vitz | Cost 4000rs per day \n Press 2 For Corolla | Cost 5000rs per day \n Press 3 For Civic | Cost 6000rs per day \n Press 4 for Mehran | Cost 4000rs per day \n Press 5 for Toady | Cost 8000rs per day\n ");
        printf("\n Please Click Option According To Your Condition: ");
		scanf("%d", &cars);
        printf("\n ----------------------- \n");
      
    if(cars>5)
    {
    	printf(" Invalid number");
	}
	else
	{
        switch(cars)
        {
            case 1:
            printf("\n You have selected Vitz \n");
            t=n*4000;
            printf("\n your amount is: %d\n",t);
            break;

            case 2:
            printf("\n You have selected Corolla \n");
            t=n*5000; 
            printf("\n your amount is: %d\n",t);
            break;

            case 3:
            printf("\n You have selected Civic \n");
            t=n*6000;
            printf("\n your amount is: %d\n",t);
            break;
            
            case 4:
            printf("\n You have selected Mehran \n");
            t=n*4000;
            printf("\n your amount is: %d\n",t); 
            break;
            
            case 5:
            printf("\n You have selected Toady \n");
            t=n*8000;
            printf("\n your amount is: %d\n",t);
            break;
            
		}      
		
		
        
        printf("\n ----------------------- \n");
        printf("\n Do You Want driver ? \n");
        printf("\n Driver charges: 500 per day \n");
        printf("\n Press 1 For Yes | 2 For No \n");
        printf("\n Please Click Option According To Your Condition: ");
        scanf("%d" , &driver);
        
        if(driver>2)
        {
    	printf(" Invalid number");
	    }
	    else
	    {
        
        switch(driver)
        {     	
            case 1:
            printf("\n---------------------------------\n");
            printf("\n You have seleced driver \n");
            with_driver= (n*500)+t;
            printf("\n you total is %d", with_driver);
            printf("\n Enjoy Your Ride \n");
            printf("\n---------------------------------\n");
            break;
            
        	case 2:
        	printf("\n---------------------------------\n");
        	printf("\n Your Vehicle is Ready");
        	printf("\n your total amount is: %d",t);
        	printf("\n Enjoy Your Ride \n");
            printf("\n---------------------------------\n");
		    break;
		    
		    
	
            
        }
       
        

        case 2:
        printf("\n You have chosen Long Trip Vehicles \n");
        printf("\n ----------------------------- \n");
        printf("Your Vehicle :\n Press 1 For Hiace | Cost 10000rs per day \n Press 2 For Bus | Cost 12000rs per day \n Press 3 For Coach | Cost 12000rs per day \n Press 4 For MiniBus | Cost 8000rs per day \n Press 5 For MiniCoach | Cost 8000rs per day \n");
        printf("\n Please Click Option According To Your Condition: ");
		scanf("%d", &long_veh);
        if(long_veh>5)
           {
            	printf(" Invalid number");
        	}
         	else
        	{
        
        switch (long_veh)
        {
            case 1:
            printf("\n You have selected Hiace \n");
            t=n*10000;
            printf("\n your amount is: %d\n",t);
            break;

            case 2:
            printf("\n You have selected Bus \n");
            t=n*12000;
            printf("\n your amount is: %d\n",t);
            break;
            
            case 3:
            printf("\n You have selected Coach |\n");
            t=n*12000;
            printf("\n your amount is: %d\n",t);
            break;
            
            case 4:
            printf("\n You have selected MiniBus \n");
            t=n*8000;
            printf("\n your amount is: %d\n",t);
            break;
            
            case 5:
            printf("\n You have selected MiniCoach \n");
            t=n*8000;
            printf("\n your amount is: %d\n",t);
            break;
         
            
        }
    
        
        printf("\n ----------------------- \n");
        printf("\n Do You Want driver ? \n");
        printf("\n Driver charges 500 per day");
        printf("\n Press 1 For Yes | 2 For No \n");
        printf("\n Please Click Option According To Your Condition: ");
        scanf("%d" , &driver);
        printf("\n ----------------------- \n");
        
        if(driver>2)
        {
    	printf(" Invalid number");
	    }
	    else
	    {
        
        switch(driver)
        {     	
            case 1:
            printf("\n---------------------------------\n");
            printf("\n You have seleced driver \n");
            with_driver= (n*500)+t;
            printf("\n you total is %d", with_driver);
            printf("\n Enjoy Your Ride \n");
            printf("\n---------------------------------\n");
            break;
            
        	case 2:
        	printf("\n---------------------------------\n");
        	printf("\n Your Vehicle is Ready");
        	printf("\n your total amount is:%d",t);
        	printf("\n Enjoy Your Ride \n");
            printf("\n---------------------------------\n");
            break;
          
            
		}

		    
		
	
        case 3:
        printf("\n You have chosen Luxury Car \n");
        printf("\n ------------------------------ \n");
        printf("\n Your Vehicles : \n Press 1 For Mercedes-Benz | Cost 40,000rs per day \n Press 2 For BMW M5 | Cost 45,000rs per day \n Press 3 For Audi A8 | Cost 50,000rs per day \n Press 4 For Rolls-Royce | Cost 80,000rs per day \n Press 5 For Range Rover | Cost 70,000rs per day \n");
        printf("\n Please Click Option According To Your Condition: ");
		scanf("%d", &luxury);
		if(luxury>5)
           {
            	printf(" Invalid number");
        	}
         	else
        	{
        
        switch(luxury)
        {
            case 1:
            printf("\n You have selected Mercedes-Benz \n");
            t=n*40000;
            printf("\n your amount is: %d\n",t);
            break;

            case 2:
            printf("\n You have selected BMW M5 \n");
            t=n*45000;
            printf("\n your amount is: %d\n",t);
            break;

            case 3:
            printf("\n You have selected Audi A8 \n");
            t=n*50000;
            printf("\n your amount is: %d\n",t);
            break;
            
            case 4:
            printf("\n You have selected Rolls-Royce \n");
            t=n*80000;
            printf("\n your amount is: %d\n",t);
            break;
            
             case 5:
            printf("\n You have selected  Range Rover \n");
            t=n*70000;
            printf("\n your amount is: %d\n",t);
            break;
            
         
        }

        
        printf("\n ----------------------- \n");
        printf("\n Do You Want driver ? \n");
        printf("\n Driver charges is 500 per day");
        printf("\n Press 1 For Yes | 2 For No \n");
        printf("\n Please Click Option According To Your Condition: ");
        scanf("%d" , &driver);
        
        if(driver>2)
        {
    	printf(" Invalid number");
	    }
	    else
	    {
        
        switch(driver)
        {     	
           case 1:
            printf("\n---------------------------------\n");
            printf("\n You have seleced driver \n");
            t=n*500+t;
            with_driver= (n*500)+t;
            printf("\n your total is %d",t);
            // printf("\n you total is %d",n*500+t);
            printf("\n Enjoy Your Ride \n");
            printf("\n---------------------------------\n");
            break;
        	case 2:
        	printf("\n---------------------------------\n");
        	printf("\n your total amount is:%d",t);
        	printf("\n Enjoy Your Ride \n");
            printf("\n---------------------------------\n");
            break;
            
         
		   }
    	}
        }
        }
        
      }
	  }  
	  } 
	  }
 }
     FILE *fp;
     //writing to file
    fp=fopen("file.txt","w");
    fprintf(fp," Your Name is: %s",name);
    fprintf(fp,"\n Your Phone Number is: %s", phone);
    fprintf(fp,"\n You Have Rented a Car for %d Days", n);
    fprintf(fp,"\n Press 1 For  5 Seater \n Press 2 For  Long Trip Vehicle \n Press 3 For Luxury Vehicle\n you pressed  %d",vehicles);
    
    fprintf(fp,"\n Your Current Amount is %d \n Do you want a Driver? \n Driver Cost Per Day is 500 Rupees \n Press 1 For Yes and 2 For No \n You Pressed %d", t, driver);
    fprintf(fp,"\n You have to Pay %d Rupees \n Enjoy Your Ride",with_driver);
    fclose(fp);
}




