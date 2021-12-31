#include <iostream>
#include <cstring>

/*Функция strncat.
Формат char* strncat(char* dest, const char* src, size_t maxlen).
Функция приписывает maxlen символов строки src к строке dest.*/
char* fun(char* dest, const char* src, int maxlen) //Функция приписывает maxlen символов строки src к строке dest
{
	for (int i = strlen(dest), k = 0; k < maxlen; i++, k++)
	{
		dest[i] = src[k];
	}
	return dest;
}

int main()
{
	printf("Task_3\n");
	char secondstring[30] = " my money?";
	char firststring[30] = "Jony, where's";
	int maxlen = 3;
	printf("1: %s\n", firststring);
	printf("2: %s\n", secondstring);
	char* standardresult = strncat(firststring, secondstring, maxlen);
	printf("Original: %s\n", standardresult);
	char mys[30] = " my money?";
	char myf[30] = "Jony, where's";
	char* myresult = fun(myf, mys, maxlen);
	printf("My: %s\n", myresult);
	return 0;
}