#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	int pid = fork();

	if (pid > 0){
		execlp("ps", "ps", "-l", (char *)NULL);
		sleep(11);
	}

	else if (pid == 0){
		printf("Processo zumbi foi criado");
		exit(0);
	}
	else {
		printf("Erro");
	}

	return 0;

}
