#include "Util/header/functions.h"

char* getAbsolutePath(char* file) {
	char cwd[1024];
	if (_getcwd(cwd, sizeof(cwd)) != NULL)
		fprintf(stdout, "Current working dir: %s\n", cwd);
	cwd[strlen(cwd) - 3] = '\0';
	for (int i = 0; i < strlen(cwd); i++)
	{
		if ('\\' == cwd[i]) {
			cwd[i] = '/';
		}
	}
	printf("\ntaille de la chaine : %d\n", strlen(cwd));
	strcat(cwd, "src/Img/");
	strcat(cwd, file);
	fprintf(stdout, "Current working dir after parsing: %s\n", cwd);
	return cwd;
}