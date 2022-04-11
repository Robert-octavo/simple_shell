#include "main.h"


int main(void)
{
	char *buff, *token[10];
	size_t sizebuf;
	int getLine = 0, i = 0;


	while(1)
	{
		printf("$ ");
		getLine = getline(&buff, &sizebuf, stdin);
		if (getLine < 0)
			return (0);
		token[i] = strtok(buff, " ");
		while (token[i])
		{
			printf("token[%d]: %s", i, token[i]);
			i++;
			token[i] = strtok(NULL, " ");
		}
		
	}
}