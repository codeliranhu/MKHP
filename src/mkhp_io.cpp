#include "mkhp_io.h"

void MKHP_params::parse(int argc, char *argv[])
{
    //determine whether the number of command line parameters is correct
    if (argc < 4) {
        printf ("Usage : ./MHKP hypergraph.hgr nparts\n");
        exit(1);
    }

	int index = 0;
	int c = 0;
	while ( EOF != (c = getopt_long_only(argc, argv, "f:n:", long_options, &index))) {
		switch (c) {
			case 'f':
				_file_name = optarg;
				printf ("file name : %s\n", optarg);
				break;
			case 'n':		
				_nparts = atoi(argv[optind]);
				printf ("nparts : %d\n", _nparts);
				break;
			default:
				break;
		}
	}
}


