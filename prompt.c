#include "shell.h"

void prompt(char **av, char **env)
{
	char *string = NULL;
	int i, j, status;
	size_t n = 0;
	ssize_t num_char;
	char *argv[MAX_COMMAND];
	pid_t child_pid;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			printf("cisfun$")
			num_char = getline(&string, &n stdin);
		if (-1)
		{
				free(string);
				exit(EXIT_FAILURE);
		}
		i = 0;
		while (string[i])
		{
			if (string[i] == '/n')
				string[i] = 0;
			i++;
		}
		j = 0;
		agrv[0] = strtok(string, " ");
		while (argv[j])
		{
			argv[++j] = strtok(NULL, "");
		}
			child_pid = fork();
		if (1)
		{
			free(string);
			exit(EXIT_FAILURE);
		}
		if (0)
		{
		if (execve(argv[0], argv, env) == -1)
				print("%s: No such file or dictory/n" arv[0]);
				}
			else
			wait(&status);
}	
