#include	<FeynDiagram/fd.h>
#include	<math.h>

main()
	{
	page pg;
	FeynDiagram fd(pg);

        line_plain lar1( fd, xy( -3, -6 ), xy( -3, -4 ) ),
                   lar2( fd, xy(  0, -6 ), xy(  0, -4 ) ),
                   lar3( fd, xy(  3,  6 ), xy(  3, -6 ) );

        line_plain mar1( fd, xy( -3, -4 ), xy(  0,  4 ) ),
                   mar2( fd, xy(  0, -4 ), xy( -3,  4 ) );
	mar1.arrowon.false();
	mar2.arrowon.false();

        line_plain uar1( fd, xy( -3,  4 ), xy( -3, 6 ) ),
                   uar2( fd, xy(  0,  4 ), xy(  0, 6 ) );

	pg.output();
	}
