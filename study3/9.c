#include <stdio.h> 
int getWeek(int day)
{
	/**********Begin**********/
    int year = day / 10000;  
    int month = (day / 100) % 100;  
    int date = day % 100; 

    if (month < 3) {
        month += 12;
        year -= 1;
    }
    int century = year / 100;
    int yearOfCentury = year % 100;
    int w = (date + 13 * (month + 1) / 5 + yearOfCentury + yearOfCentury / 4 + century / 4 + 5 * century) % 7;
    w = (w + 6) % 7;
    return w;	
    /**********End**********/
}

void printWeek(int w)
{
	/**********Begin**********/
    char *weekdays[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    printf("%s\n", weekdays[w]);	
    /**********End**********/
}
int main()
{
	int date;
   scanf("%d",&date);
   int week = getWeek(date);
   printWeek(week);
	return 0;
}