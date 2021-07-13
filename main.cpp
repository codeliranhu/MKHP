#include <iostream>
#include <stdio.h>
#include <vector>
#include <time.h>


#include "./src/mkhp_io.h"
#include "./src/hgraph.h"


int main(int argc, char *argv[])
{
	using std::cout;
	using std::endl;
	cout << "*************************************************************************************" << endl;
	cout << "***MKHP v1.0(c) april 2018-, by huliran" << endl;
	cout << "***Build data: Friday april 13 09:12:19 2018" << endl;
	cout << "*************************************************************************************" << endl;

	MKHP_params paras(argc, argv);
	char *hyper_graph_name = paras.get_file_name();
	MKHP_Hyper_Graph hgraph(hyper_graph_name);
	//MKHP_Hyper_Graph_Partition(hgraph, paras);



	//result info
}


