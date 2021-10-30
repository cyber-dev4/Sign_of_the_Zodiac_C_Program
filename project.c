#include <stdio.h>

int main() {

	int month, day;
	printf("Enter month of birth (1-12)\n");
	scanf_s("%d", &month);

	printf("Enter day of birth (1-31)\n");
	scanf_s("%d", &day);

	if ((month == 0 ||day == 0)) {
		printf("You have entered incorrect parameters\n");
	}
	else if ((month > 12 ||day > 31)) {
		printf("You have entered incorrect parameters\n");
	}
	else if ((month < 0 ||day < 0)) {
		printf("You have entered incorrect parameters\n");
	}
	else if ((month == 3) &&day >= 21 || (month == 4 &&day <= 20)) {
		printf("Your Zodiac sign is: Aries\n");
	}
	else if ((month == 4 &&day >= 21) || (month == 5 &&day <= 21)) {
		printf("Your Zodiac sign is: Taurus\n");
	}
	else if ((month == 5 &&day >= 22) || (month == 6 &&day <= 21)) {
		printf("Your Zodiac sign is: Gemini\n");
	}
	else if ((month == 6 &&day >= 22) || (month == 7 &&day <= 22)) {
		printf("Your Zodiac sign is: Cancer\n");
	}
	else if ((month == 7 &&day >= 23) || (month == 8 &&day <= 22)) {
		printf("Your Zodiac sign is: Leo\n");
	}
	else if ((month == 8 &&day >= 23) || (month == 9 &&day <= 22)) {
		printf("Your Zodiac sign is: Virgo\n");
	}
	else if ((month == 9 &&day >= 23) || (month == 10 &&day <= 22)) {
		printf("Your Zodiac sign is: Libra\n");
	}
	else if ((month == 10 &&day >= 23) || (month == 11 &&day <= 21)) {
		printf("Your Zodiac sign is: Scorpius\n");
	}
	else if ((month == 11 &&day >= 22) || (month == 12 &&day <= 21)) {
		printf("Your Zodiac sign is: Sagittarius\n");
	}
	else if ((month == 12 &&day >= 22) || (month == 1 &&day <= 20)) {
		printf("Your Zodiac sign is: Capricornus\n");
	}
	else if ((month == 1 &&day >= 21) || (month == 2 &&day <= 18)) {
		printf("Your Zodiac sign is: Aquarius\n");
	}
	else if ((month == 2 &&day >= 19) || (month == 3 &&day <= 20)) {
		printf("Your Zodiac sign is: Pisces\n");
	}

	return 0;
}