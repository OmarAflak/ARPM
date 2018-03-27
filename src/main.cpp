#include <iostream>
#include "../include/algorithm.h"

int main(int argc, char const *argv[]){
	Graph graph;
	const char* graph_name = "data/graph";
	const char* arpm_name = "data/arpm";

	if(readGraph(graph_name, graph)){
		Graph arpm = kruskal(graph, 0);
		if(saveGraph(arpm_name, arpm)){
			std::cout << "Minimum Spanning Tree saved in: " << arpm_name << std::endl;
		}
		else{
			std::cout << "Could not save graph" << std::endl;
			return 1;
		}
	}
	else{
		std::cout << "Could not read " << graph_name << std::endl;
	}
	return 0;
}
