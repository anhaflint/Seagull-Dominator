#include "Util/header/functions.h"

/*!
* \file functions.h
* \brief Fichier contenant les fonctions utiles au developpement
* \author Claire REMY, Mounia HAMEDI (relecture)
*/

using namespace std;

char* getAbsolutePath(char* file) {
	printf(".");
	char cwd[2048];
	if (_getcwd(cwd, sizeof(cwd)) != NULL)
	{
		for (int i = 0; i < strlen(cwd); i++)
		{
			if ('\\' == cwd[i]) {
				cwd[i] = '/';
			}
		}
		strcat_s(cwd, "/Img/");
		strcat_s(cwd, file);
		cwd[strlen(cwd) + 1] = '\0';
	}
	return cwd;
}