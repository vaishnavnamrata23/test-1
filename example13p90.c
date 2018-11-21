#include<stdio.h>
void main()
{
  int d,m,y;
  printf("Enter the date: \n");

  scanf("%d",&d);
  scanf("%d",&m);
  scanf("%d",&y);
  if(1849<y && y<2051)
  { 
    	 if(0<m && m<13)
   	 {
	       if(0<d && d<32)
     		 {
		    	switch(m)
			{
			 case 1:
			        if(d>0 && d<32)
				  {  printf("Valid date \n"); }
				break;

			 case 2:
                                if(d>0 && d<29)
				 {

						if(y%4==0 && y%100!=0 || y%400==0)
        		                          {
							  printf("Valid date with leap year \n");
						  }
			         		 else
                                 		  { 
  							  printf("Valid date without leap year \n");
						  }
				}                  
			        else
                                                  {
                                                          printf("Invalid date \n");
                                                  }
              
				break;

			
			 case 3:
                                if(d>0 && d<32)
                                  {  printf("Valid date \n"); }
                                break;
			
			 case 4:
                                if(d>0 && d<31)
                                  {  printf("Valid date \n"); }
                                break;
		
			 case 5:
                                if(d>0 && d<32)
                                   {  printf("Valid date \n"); }

                                break;

			 case 6:
                                if(d>0 && d<31)
                                  {  printf("Valid date \n"); }
                                break;

			 case 7:
                                if(d>0 && d<32)
                                   {  printf("Valid date \n"); }
                                break;

			 case 8:
                                if(d>0 && d<32)
                                  {  printf("Valid date \n"); }
                                break;
			
			 case 9:
                                if(d>0 && d<31)
                                  {  printf("Valid date \n"); }
                                break;

			 case 10:
                                if(d>0 && d<32)
                                  {  printf("Valid date \n"); }
                                break;
	
			 case 11:
                                if(d>0 && d<31)
                                  {  printf("Valid date \n"); }
                                break;

			 case 12:
                                if(d>0 && d<32)
                                  {  printf("Valid date \n"); }
                                break;
			}
     		 }

    		 else
    		 {
       			 printf("Invalid date \n");

     		 }
     
  	 }
  	 else
  	 {
        	printf("Invalid month \n");

   	}

  }
  
  else 
  {
        printf("Invalid year \n");

  }

  
}

