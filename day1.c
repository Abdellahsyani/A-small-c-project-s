#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void)
{
	int hour, minute, second;
	hour = 0;
	minute = 0;
	second = 0;
	
	while (1)
	{
		system("clear");   //to clear the terminal

		printf("%02d : %02d : %02d", hour, minute, second);    //this for print the number like the watch

		second++;   //start increment the second

		fflush(stdout);      // for support the printf to sort everything on the screen

		if (second == 60)
		{
			minute++;
			second = 0;
		}
		if (minute == 60)
		{
			hour++;
			minute = 0;
		}
		if (hour == 24)
		{
			hour = 0;
			minute = 0;
			second = 0;
		}
		sleep(1);   //sleep one second to let the watch work perfect
	}
	return 0;
}
