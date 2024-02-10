#include<stdio.h>
#include<time.h>
int main(void)
{
	time_t Now; time (&Now); double seconds;
	struct tm New = {0};New.tm_mday=1;
	New.tm_year = localtime(&Now)	->tm_year + 1;
	time_t Newyear=mktime(&New);
	while (1)
	{
		time(&Now);
		seconds=difftime(Newyear,Now);
		if(seconds<=0)break;
		printf("New year in %d\r",(int)seconds);
		fflush(stdout);
		while (time(NULL) ==Now);
		}
		printf("happy New Year|\n");
		return 0;
}
