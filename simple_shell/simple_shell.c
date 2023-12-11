#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

void display_prompt(void);
char *read_command(void);
void execute_command(char *command);
void exit_shell(void);
void print_environment(void);

#endif

