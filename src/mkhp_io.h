#ifndef MKHP_IO_H
#define MKHP_IO_H

#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdlib> 
#include <getopt.h>
#include <stdlib.h>


#include "mkhp_header.h"


extern int optind, opterr, optopt;
static struct option long_options[] = 
{
    {"help", no_argument, NULL, 'h'},
    {"file", required_argument, NULL, 'f'},
    {"nparts", no_argument, NULL, 'n'},
	{0, 0, 0, 0}
};


class MKHP_params
{
private:
	char*		_file_name;	
	char*		_output_file;		
	int			_nparts;			
	int			_user_balance_factor;
	int			_nruns;
	int			_coarse_to;
	float		_reduct_ratio;

public:
	MKHP_params(int argc, char *argv[]) {
        _nparts = 0;
        _user_balance_factor = 2;
        _nruns = 0;
		_coarse_to = 100;
		_reduct_ratio = 1.7;
		parse(argc, argv);
	}

	char*       get_file_name() {
					return _file_name;
				};
private:
	void 		parse(int argc, char *argv[]);
};

#endif
