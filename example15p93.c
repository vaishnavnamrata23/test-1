#include<stdio.h>
void main()
{
	int n,x;
	printf("Enter the total amount of currency that you want");
	scanf("%d",&n);
	if(n%100>=0)
	{
           x=n/100;
           n=n-x*100;
		 printf("Number of 100 Rs. notes: %d \n",x);

	   if(n%50>=0)
       		 {
         	        x=n/50;
           		n=n-x*50;
			 printf("Number of 50 Rs. notes: %d \n",x);


                 }
	     else
		 {
			if(n%20>=0)
                        {
                                x=n/20;
                                n=n-x*20;
				 printf("Number of 20 Rs. notes: %d \n ",x);


                        }
                        if(n%10>=0)
                                {
                                        x=n/10;
                                        n=n-x*10;
					 printf("Number of 10 Rs. notes: %d \n ",x);


                                }
                                if(n%5>=0)
                                        {
                                                 x=n/5;
                                                 n=n-x*5;
						 printf("Number of 5 Rs. notes: %d \n",x);


                                        }
                                         if(n%2>=0)
                                                {
                                                         x=n/2;
                                                         n=n-x*2;
							 printf("Number of 2 Rs. notes: %d \n",x);

                                                }
                                                if(n%1>=0)
                                                        {
                                                                 x=n/1;
                                                                 n=n-x*1;
								 printf("Number of 1 Rs. notes: %d \n",x);

                                                        }

		 }
		 if(n%20>=0)
			{
				x=n/20;
                        	n=n-x*20;
				 printf("Number of 20 Rs. notes: %d \n",x);


			}
			else printf("Number of 1 Rs. notes: %d \n",x);

			{
			 if(n%10>=0)
                                {
                                        x=n/10;
                                        n=n-x*10;
					 printf("Number of 10 Rs. notes: %d \n",x);


                                }
                                if(n%5>=0)
                                        {
                                                 x=n/5;
                                                 n=n-x*5;
						 printf("Number of 5 Rs. notes: %d \n",x);


                                        }
                                         if(n%2>=0)
                                                {
                                                         x=n/2;
                                                         n=n-x*2;
							 printf("Number of 2 Rs. notes: %d \n",x);


                                                }
                                                if(n%1>=0)
                                                        {
                                                                 x=n/1;
                                                                 n=n-x*1;
								 printf("Number of 1 Rs. notes: %d \n",x);

                                                        }


			}
			if(n%10>=0)
                       	        {
                	                x=n/10;
                        	        n=n-x*10;
					printf("Number of 10 Rs. notes: %d \n",x);

                        	}
			 else
				{
					 if(n%5>=0)
                                        {
                                                 x=n/5;
                                                 n=n-x*5;
						 printf("Number of 5 Rs. notes: %d \n",x);

                                        }
                                         if(n%2>=0)
                                                {
                                                         x=n/2;
                                                         n=n-x*2;
							 printf("Number of 2 Rs. notes: %d \n",x);

                                                }
                                                if(n%1>=0)
                                                        {
                                                                 x=n/1;
                                                                 n=n-x*1;
								 printf("Number of 1 Rs. notes: %d \n",x);
						
							}

				}
				if(n%5>=0)
                       		        {
                               			 x=n/5;
                               			 n=n-x*5;
						 printf("Number of 5 Rs. notes: %d \n",x);


                        		}
				else
					{
						 if(n%2>=0)
                                                {
                                                         x=n/2;
                                                         n=n-x*2;
							 printf("Number of 2 Rs. notes: %d \n",x);


                                                }
                                                if(n%1>=0)
                                                        {
                                                                 x=n/1;
                                                                 n=n-x*1;
								 printf("Number of 1 Rs. notes: %d \n",x);

                                                        }
					}
					 if(n%2>=0)
                	                        {
        	                                         x=n/2;
	                                                 n=n-x*2;
							 printf("Number of 2 Rs. notes: %d \n",x);

                        	                }
					else
						{
							 if(n%1>=0)
                                                        {
                                                                 x=n/1;
                                                                 n=n-x*1;
								  printf("Number of 1 Rs. notes: %d \n",x);


                                                        }

						}
						if(n%1>=0)
                	                                {
        	                                                 x=n/1;
	                                                         n=n-x*1;
								 printf("Number of 1 Rs. notes: %d \n",x);
									
        	                                        }
						else
							{
 								printf("Invalid currency");	
							}
							

	}
        else	
	{
		 if(n%50>=0)
       		 {
         	        x=n/50;
           		n=n-x*50;
			 printf("Number of 50 Rs. notes: %d \n",x);


                 }
	     else
		 {
			if(n%20>=0)
                        {
                                x=n/20;
                                n=n-x*20;
				 printf("Number of 20 Rs. notes: %d \n",x);


                        }
                        if(n%10>=0)
                                {
                                        x=n/10;
                                        n=n-x*10;
					 printf("Number of 10 Rs. notes: %d \n",x);


                                }
                                if(n%5>=0)
                                        {
                                                 x=n/5;
                                                 n=n-x*5;
						 printf("Number of 5 Rs. notes: %d \n",x);


                                        }
                                         if(n%2>=0)
                                                {
                                                         x=n/2;
                                                         n=n-x*2;
							 printf("Number of 2 Rs. notes: %d \n",x);

                                                }
                                                if(n%1>=0)
                                                        {
                                                                 x=n/1;
                                                                 n=n-x*1;
								 printf("Number of 1 Rs. notes: %d \n",x);

                                                        }

		 }
		 if(n%20>=0)
			{
				x=n/20;
                        	n=n-x*20;
				 printf("Number of 20 Rs. notes: %d \n",x);


			}
			else printf("Number of 1 Rs. notes: %d \n",x);

			{
			 if(n%10>=0)
                                {
                                        x=n/10;
                                        n=n-x*10;
					 printf("Number of 10 Rs. notes: %d \n",x);


                                }
                                if(n%5>=0)
                                        {
                                                 x=n/5;
                                                 n=n-x*5;
						 printf("Number of 5 Rs. notes: %d \n",x);


                                        }
                                         if(n%2>=0)
                                                {
                                                         x=n/2;
                                                         n=n-x*2;
							 printf("Number of 2 Rs. notes: %d \n",x);


                                                }
                                                if(n%1>=0)
                                                        {
                                                                 x=n/1;
                                                                 n=n-x*1;
								 printf("Number of 1 Rs. notes: %d \n",x);

                                                        }


			}
			if(n%10>=0)
                       	        {
                	                x=n/10;
                        	        n=n-x*10;
					printf("Number of 10 Rs. notes: %d \n",x);

                        	}
			 else
				{
					 if(n%5>=0)
                                        {
                                                 x=n/5;
                                                 n=n-x*5;
						 printf("Number of 5 Rs. notes: %d \n",x);

                                        }
                                         if(n%2>=0)
                                                {
                                                         x=n/2;
                                                         n=n-x*2;
							 printf("Number of 2 Rs. notes: %d \n",x);

                                                }
                                                if(n%1>=0)
                                                        {
                                                                 x=n/1;
                                                                 n=n-x*1;
								 printf("Number of 1 Rs. notes: %d \n",x);
						
							}

				}
				if(n%5>=0)
                       		        {
                               			 x=n/5;
                               			 n=n-x*5;
						 printf("Number of 5 Rs. notes: %d \n",x);


                        		}
				else
					{
						 if(n%2>=0)
                                                {
                                                         x=n/2;
                                                         n=n-x*2;
							 printf("Number of 2 Rs. notes: %d \n",x);


                                                }
                                                if(n%1>=0)
                                                        {
                                                                 x=n/1;
                                                                 n=n-x*1;
								 printf("Number of 1 Rs. notes: %d \n",x);

                                                        }
					}
					 if(n%2>=0)
                	                        {
        	                                         x=n/2;
	                                                 n=n-x*2;
							 printf("Number of 2 Rs. notes: %d \n",x);

                        	                }
					else
						{
							 if(n%1>=0)
                                                        {
                                                                 x=n/1;
                                                                 n=n-x*1;
								  printf("Number of 1 Rs. notes: %d \n",x);


                                                        }

						}
						if(n%1>=0)
                	                                {
        	                                                 x=n/1;
	                                                         n=n-x*1;
								 printf("Number of 1 Rs. notes: %d \n",x);
									
        	                                        }
						else
							{
 								printf("Invalid currency");	
							}
							
	
	}
}
