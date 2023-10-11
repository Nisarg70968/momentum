//wap C program to input any character and check whether it is alphabet, digit or special character.

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch); // Note the space before %c to consume any leading whitespace.

    if (isalpha(ch)) {
        printf("%c is an alphabet.\n", ch);
    } else if (isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}

/*

Output:

Enter a character: hii
h is an alphabet.

*/

//wap to find number is even or odd

#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}

/*

output:

Enter an integer: 40
40 is even.

*/

//WAP to find out max from 4 num. using nested if

#include <stdio.h>

int main()
{
	float a,b,c,d;
	
	printf("Enter any 4 number :");
	scanf("%f %f %f %f",&a,&b,&c,&d);
			
	if(a>b){
		if(a>c){
			if(a>d){
				printf("Max number is %f",a);
			}else{
				printf("Max number is %f",d);
			}
		}else{
			if(c>d){
				printf("Max number is %f",c);
			}else{
				printf("Max number is %f",d);
			}
		}
	}else{
		if(b>c){
			if(b>d){
				printf("Max number is %f",b);
			}else{
				printf("Max number is %f",d);
			}
		}else{
			if(c>d){
				printf("Max number is %f",c);
			}else{
				printf("Max number is %f",d);
			}
		}
	}
		
	return 0;
}

/*

Output:

Enter any 4 number :78 6 12 98
Max number is 98.000000

*/


/*
Write C program use switch statement. Display Monday to Sunday.
Ex. User Input: M
Output: Monday
*/

#include <stdio.h>

int main()
{
	char day;

	printf("Enter the first letter of a day (M/T/W/TH/F/S/S): ");
	scanf(" %c", &day);

	switch (day)
	{
	case 'M':
	case 'm':
		printf("Monday\n");
		break;
	case 'T':
	case 't':
		printf("Tuesday\n");
		break;
	case 'W':
	case 'w':
		printf("Wednesday\n");
		break;
	case 'TH':
	case 'th':
		printf("Thursday\n");
		break;
	case 'F':
	case 'f':
		printf("Friday\n");
		break;
	case 'S':
	case 's':
		printf("Saturday\n");
		break;
	case 'U':
	case 'u':
		printf("Sunday\n");
		break;
	default:
		printf("Invalid input. Please enter a valid day.\n");
	}

	return 0;
}

/*

Output:

Enter the first letter of a day (M/T/W/TH/F/S/S): m
Monday

*/

/*

Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.

*/

#include <stdio.h>

int main() {
    float unitCharges, totalBill;

    printf("Enter the electricity unit charges: ");
    scanf("%f", &unitCharges);

    if (unitCharges <= 50) {
        totalBill = unitCharges * 0.50;
    } else if (unitCharges <= 150) {
        totalBill = 50 * 0.50 + (unitCharges - 50) * 0.75;
    } else if (unitCharges <= 250) {
        totalBill = 50 * 0.50 + 100 * 0.75 + (unitCharges - 150) * 1.20;
    } else {
        totalBill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unitCharges - 250) * 1.50;
    }

    // Adding a 20% surcharge to the total bill
    totalBill += 0.2 * totalBill;

    printf("Total electricity bill: Rs. %.2f\n", totalBill);

    return 0;
}

