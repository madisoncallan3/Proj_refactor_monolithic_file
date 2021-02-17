/*
 * fileio.h
 *
 *  Created on: Feb 13, 2021
 *      Author: Madison Callan
 */

#ifndef INCLUDES_FILEIO_H_
#define INCLUDES_FILEIO_H_

#include <vector>
#include "constants.h"

int loadData(const std::string filename, std::vector<process> &myProcesses);
int saveData(const std::string filename, std::vector<process> &myProcesses);

#endif
