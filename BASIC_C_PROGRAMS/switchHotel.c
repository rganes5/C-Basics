
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	setbuf(stdout,NULL);

	printf("Hotel Menu\n");
	printf("Press\n1 for Biriyani\n2 for Mandhi\n3 for fried rice\n4 for pulav\n");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	printf("Biriyani");
	break;
	case 2:
	printf("Mandhi");
	break;
	case 3:
	printf("Fried Rice");
	break;
	case 4:
	printf("Pulav");
	break;
	default:
		printf("You have selected an option which is not available. ");
	}
	return EXIT_SUCCESS;
}
