#include "config.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstring>

using namespace std;

double min_transcript_coverage = -1;
bool merge_coverage_as_counts = false;

int parse_parameters(int argc, const char ** argv)
{
	for(int i = 1; i < argc; i++)
	{
		if(string(argv[i]) == "-c")
		{
			min_transcript_coverage = atof(argv[i + 1]);
			i++;
		}
	}

	for(int i = 1; i < argc; i++)
	{
		if(string(argv[i]) == "-n")
		{
			merge_coverage_as_counts = true;
		}
	}

	return 0;
}
