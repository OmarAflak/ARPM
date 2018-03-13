#ifndef VERTEX
#define VERTEX

struct Vertex {
	int i1;
	int i2;
	float weight;
	bool processed;

	Vertex(){
		i1 = 0;
		i2 = 0;
		weight = 0.0f;
		processed = false;
	}
};

#endif
