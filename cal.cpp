#include<stdio.h>
int no_of_days(int month, int year)
{
	switch (month)
	{
		case 1: return 31;
		 break;
		case 2: if(year%4==0 && year%100!=0 || year%400==0)
		           return 29;
		        else 
		           return 28;
		 break;
		case 3: return 31;
		 break;
		case 4: return 30;
		 break;
		case 5: return 31;
		 break;
		case 6: return 30;
		 break;
		case 7: return 31;
		 break;
		case 8: return 31;
		 break;
		case 9: return 30;
		 break;
		case 10: return 31;
		 break;
		case 11: return 30;
		 break;
		case 12: return 31;
		 break;
	}
}

int prev_day(int month, int year)
{
	int ref_year=0001;
	int ref_month=1;
	int ref_day=1;
	int count_day, limit;
	while (ref_year<=year)
	{
		limit=no_of_days(ref_month,ref_year);
		for (count_day=1; count_day<=limit; count_day++)
		{
			if (ref_day!=7)
			  ref_day++;
			else
			  ref_day=1;
		}
		ref_month++;
		if (ref_month>12)
		{
			ref_month=1;
			ref_year++;
		}
		if (ref_month==month && ref_year==year)
		  break;
	}
	return(ref_day);
}

void print_cal (int ref_day, int month, int year)
{
	int n[6][7], i, j;
	int limit=no_of_days(month,year);
	int check_day=1, check_limit=1;
	for (i=0; i<6; i++)
	{
		for (j=0; j<7; j++)
		{
			if (check_day>ref_day && check_limit<=limit)
			{
				printf("%d", check_limit++);
				if (check_limit>10)
				  printf("     ");
				else 
				  printf("      ");
			}
			
			else if(ref_day==7&&check_limit<=limit)
            {
                printf("%d", check_limit++);
				if (check_limit>10)
				  printf("     ");
				else 
				  printf("      ");
            }
			
			else
			{
				check_day++;
				printf("-      ");
			}
		}
		
		if (check_limit>limit)
		  break;
		printf("\n");
	}
}

main()
{
	int ref_day=0,month=0,year=0;
	printf("Enter the year in format yyyy:");
	scanf("%d", &year);
	printf("\nEnter the month in format mm:");
	scanf("%d", &month);
	printf("\n\n");
	switch(month)
	{
		case 1:printf("                  Jan %d",year);
		 break;
		case 2:printf("                  Feb %d",year);
		 break;
		case 3:printf("                  Mar %d",year);
		 break;
		case 4:printf("                  Apr %d",year);
		 break;
		case 5:printf("                  May %d",year);
		 break;
		case 6:printf("                  Jun %d",year);
		 break;
		case 7:printf("                  Jul %d",year);
		 break;
		case 8:printf("                  Aug %d",year);
		 break;
		case 9:printf("                  Sep %d",year);
		 break;
		case 10:printf("                 Oct %d",year);
		 break;
		case 11:printf("                 Nov %d",year);
		 break; 
		case 12:printf("                 Dec %d",year);
		 break;
		default:
			printf("INVALID");
	}
	printf("\n---------------------------------------------");
	ref_day=prev_day(month, year);
	printf("\n");
	printf("SUN    MON    TUE    WED    THU    FRI    SAT\n");
	printf("---------------------------------------------\n");
	print_cal(ref_day,month,year);	
}
