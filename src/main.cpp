/**
* @file main.cpp
* @author Arun Tejasvi Chaganty <arunchaganty@gmail.com>
* @date 2010-05-08
* Helvetica - CSP Workbench
*/

#include <sys/stat.h>
#include <unistd.h>
#include <cstdlib>
#include <cstdio>
#include <string>

#include "Helvetica.h"

using namespace std;
using namespace Helvetica;

extern int optind, opterr;

int main( int argc, char* argv[] )
{
    int opt;

    // Parse command line options 
    while( ( opt = getopt( argc, argv, "h" ) ) != -1 )
    {
        switch( opt ) 
        {
            case 'h':
            default: /* '?' */
                fprintf( stderr, "Usage: %s [options] <csp-file>\n", argv[ 0 ] );
                fprintf( stderr, "Options:\n" );
                fprintf( stderr, "\t-h \t--\t Print this message\n" );
                exit( EXIT_FAILURE );
        }
    }

    return EXIT_SUCCESS;
}

