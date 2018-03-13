#include "../include/utils.h"

int toInt(std::string str){
	std::stringstream ss(str);
	int n;
	ss >> n;
	return n;
}

bool readGraph(const char* filename, Graph& graph){
	std::ifstream file(filename);
	if(file){
		std::string line;

		getline(file, line);
		graph.order = toInt(line);
		getline(file, line);
		graph.degree = toInt(line);

		graph.vertices.resize(0);

		for(int i=0 ; i<graph.degree ; i++){
			getline(file, line);
			Vertex vertex;
			vertex.i1 = toInt(std::string(line[0]));
			vertex.i2 = toInt(std::string(line[1]));
			vertex.weight = toInt(std::string(line[2]));
			graph.vertices.push_back(vertex);
		}

		return true;
	}
	return false;
}
