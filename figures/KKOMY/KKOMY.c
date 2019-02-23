#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>
#include        "wybo.h"

#define RSTART 0.0 
#define RSTOP 10.0
#define RSTEP  0.2
#define USAGE {fprintf( stderr, \
       "usage: %s [rstart rstop rstep]\n", argv[0] ); exit(1); }

main(int argc, char *argv[])
{ 
   double r, rstart, rstop, rstep;

   switch( argc ){
   case 1:  rstart = RSTART;
            rstop  = RSTOP;
            rstep  = RSTEP; 
            break;
   case 4:  rstart = atof( argv[1] );
            rstop  = atof( argv[2] );
            rstep  = atof( argv[3] );
            break;
   default: USAGE;
   }

   r = rstart;
   while( r< rstop ){
     printf( "%14.8f %14.8f %14.8f\n", r, corr_kk(r), corr_omy(r) );
       r += rstep;
   }
   return 0;
}
