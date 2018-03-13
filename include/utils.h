#ifndef UTILS
#define UTILS

#include <vector>
#include <fstream>
#include <sstream>

#include "Graph.h"

int toInt(std::string str);
bool readGraph(const char* filename, Graph& graph);

#endif
