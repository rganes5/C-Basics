
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int day;
	setbuf(stdout,NULL);
	printf("Days\n");
	printf("Enter a number : ");
	scanf("%d",&day);
	switch (day)
	{
	case 1:
	printf("Monday");
	break;
	case 2:
	printf("Tuesday");
	break;
	case 3:
	printf("Wednesday");
	break;
	case 4:
	printf("Thursday");
	break;
	case 5:
	printf("Friday");
	break;
	case 6:
	printf("Saturday");
	break;
	case 7:
	printf("Sunday");
	break;
	default:
	printf("Invalid entry");
	}
	return EXIT_SUCCESS;
}
