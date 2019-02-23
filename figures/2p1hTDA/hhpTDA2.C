#include	<FeynDiagram/fd.h>
#include	<math.h>

main()
	{
	page pg;
	FeynDiagram fd(pg);

        line_plain lar1( fd, xy( -3, -6 ), xy( -3,  6 ) ),
                   lar2( fd, xy(  0, -6 ), xy(  0,  6 ) ),
                   lar3( fd, xy(  3,  6 ), xy(  3, -6 ) );


	pg.output();
	}
