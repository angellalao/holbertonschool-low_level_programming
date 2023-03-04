#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - i
 * is_negative - i
 * number_of_digits - i
 * atoi - i
 * skip_it - i
 * @c:
 * Return: result
 */

int is_digit(char c) {
	if (c >= '0' && c <= '9') {
		return (1);
	}
	return (0);
}

char *skip_it(char *str) {
	while (*str != '\0') {
		if (is_digit(*str)) {
			return (str);
		}
		str = str + 1;
	}

	return (str);
}

int is_negative(char *number) {
	int number_of_negative_sign;

	number_of_negative_sign = 0;
	while (*number != '\0') {
		if (is_digit(*number) == 1) {
			break;
		}
		if (*number == '-') {
			number_of_negative_sign = number_of_negative_sign + 1;
		}
		number = number + 1;
	}
	return (number_of_negative_sign % 2);
}

int number_of_digits(char *s) {
	int i;

	i = 0;
	while (s[i] != '\0') {
		if (is_digit(s[i]) == 0) {
			break;
		}
		i = i + 1;
	}
	return (i);
}

int _atoi(char *s) {
	char *first_digit;
	int power_of_ten;
	int result;
	int current_digit;
	int length;
	int i;

	result = 0;
	power_of_ten = 1;
	first_digit = skip_it(s);
	length = number_of_digits(first_digit);
	i = length - 1;
	while (i >= 0) {
		current_digit = first_digit[i] - '0';
		result = result + current_digit * power_of_ten;
		i = i - 1;
		power_of_ten = power_of_ten * 10;
	}
	if (is_negative(s) == 1) {
		return (result * -1);
	}
	return (result);
}
