#include "shell.h"

/**
 * is_dir - checks ":" if it's in the current directory.
 * @path: type char pointer char.
 * @i: type int pointer of index.
 * Return: 1 if the path is searchable in the cd, 0 otherwise.
 */
int is_dir(char *path, int *i)
{
}

/**
 * _which - locates a command
 *
 * @cmd: command name
 * @_environ: environment variable
 * Return: location of the command
 */
char *_which(char *cmd, char **_environ)
{
}

/**
 * is_executable - determines if it's an executable
 *
 * @datash: data structure
 * Return: 0 if it is not executable, other number if it does.
 */
int is_executable(data_shell *datash)
{
}

/**
 * check_error_cmd - verifies if user has permissions to access
 *
 * @dir: destination directory
 * @datash: data structure
 * Return: 1 if there is error, 0 if not
 */
int check_error_cmd(char *dir, data_shell *datash)
{
}

/**
 * cmd_exec - executes command lines
 *
 * @datash: data relevant
 * Return: 1 on success.
 */
int cmd_exec(data_shell *datash)
{
}
