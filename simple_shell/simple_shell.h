#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

void display_prompt(void);
char *read_command(void);
char *read_file(const char *filename);
char *read_line(void);
void execute_command(char **args);
void handle_comments(char *command);
char *replace_variables(char *command);
void handle_separator(char *command);
void handle_logical_operators(char *command);
void handle_alias(char *command);
void exit_shell(char *status);
void print_environment(void);

#endif

