#ifndef __CONFIG_H__
#define __CONFIG_H__

#include <stdint.h>
#include <map>
#include <sstream>

using namespace std;

extern double min_transcript_coverage;
extern bool merge_coverage_as_counts;
int parse_parameters(int argc, const char ** argv);

#endif
