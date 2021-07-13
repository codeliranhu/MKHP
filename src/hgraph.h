#ifndef HYPERGRAPH_H
#define HYPERGRAPH_H

#include "mkhp_io.h"
#include <vector>

class MKHP_Hyper_Edge;

typedef int VertexID;
typedef int WeightType;

enum HYPER_GRAPH_FORMAT {
	unweighted,
	weighted_hyper_edge,
	weighted_hyper_vertex,
	weighted
};

class MKHP_Hyper_Graph {
public:
	MKHP_Hyper_Graph(char *&hyper_graph_file){
		read_hyper_graph(hyper_graph_file);
	};
	~MKHP_Hyper_Graph() {}

	typedef std::vector<int> hyperedge_vector;

private:	
	HYPER_GRAPH_FORMAT   _format;
	int		     _num_hyper_vertex;
	int 		     _num_hyper_edge;		
	std::vector<int>     _incident_edge_array;
	std::vector<int>     _incident_edge_ptr;
	std::vector<int>     _vertex_weight;
	std::vector<int>     _edge_weight;

	bool                 _has_coarser_hyper_graph;				
	bool                 _has_finer_hyper_graph;				
	MKHP_Hyper_Graph	 *_coarser_hyper_graph;
	MKHP_Hyper_Graph 	 *_finer_hyper_graph;
	//
public:

	MKHP_Hyper_Graph     *get_coarser_hyper_graph();
	MKHP_Hyper_Graph     *get_finer_hyper_graph();

	int 		     get_num_vertex() {
	      		     return _num_hyper_vertex;
	}
	int 			 set_num_vertex(int num) {
					 _num_hyper_vertex = num;
	}

	int 			 get_num_edge() {
					 return _num_hyper_edge;
	}
	int 			 set_num_edge(int num) {
					 _num_hyper_edge = num;
	}

	std::vector<int> &get_incident_edge_array() {
						return this->_incident_edge_array;
	}

	std::vector<int> &get_incident_edge_ptr() {
						return this->_incident_edge_ptr;
	}

	void read_hyper_graph(char *&hyper_graph_file);

	void compute_total_weight();
};


inline MKHP_Hyper_Graph *
MKHP_Hyper_Graph::get_coarser_hyper_graph() {
	if (_has_coarser_hyper_graph) {
		return _coarser_hyper_graph;	
	} else {
		return 0;
	}
}


inline MKHP_Hyper_Graph *
MKHP_Hyper_Graph::get_finer_hyper_graph() {
	if (_has_finer_hyper_graph) {
		return _finer_hyper_graph;
	} else {
		return 0;
	}
}





#endif
