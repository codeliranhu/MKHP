
#include "hgraph.h"
#include <fstream>

const int MAX = 64 * 1024 * 1024;

void
MKHP_Hyper_Graph::read_hyper_graph(char *&filename) {
	char buf[MAX];


	std::ifstream fin(filename);
	if (!fin) {
		INFO ("Error: can not open this file!");
		exit(0);
	}


}
