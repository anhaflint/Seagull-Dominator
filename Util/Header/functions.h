#pragma once

/*!
 * \file functions.h
 * \brief Fichier contenant les fonctions utiles au developpement
 * \author Claire REMY, Mounia HAMEDI (relecture)
 */

#include <direct.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>

/*!
 * \brief Fonction retournant le chemin absolu vers un nom de fichier a partir du repertoire courant
 * \param file Nom du fichier a recuperer
 */
char* getAbsolutePath(char* file);
