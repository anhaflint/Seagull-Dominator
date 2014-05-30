#include "Util/header/functions.h"
using namespace std;

char* getAbsolutePath(char* file) {
	printf(".");
	char cwd[2048];
	if (_getcwd(cwd, sizeof(cwd)) != NULL)
	{
		//fprintf(stdout, "Current working dir: %s\n", cwd);
		//cwd[strlen(cwd) - 3] = '\0';
	}
	for (int i = 0; i < strlen(cwd); i++)
	{
		if ('\\' == cwd[i]) {
			cwd[i] = '/';
		}
	}
	//printf("\ntaille de la chaine : %d\n", strlen(cwd));
	strcat_s(cwd, "/Img/");
	strcat_s(cwd, file);
	cwd[strlen(cwd) + 1] = '\0';
	//printf("Current working dir after parsing: %s\n", cwd);
	return cwd;
}