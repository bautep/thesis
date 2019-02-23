#include	<FeynDiagram/fd.h>
#include	<math.h>

main()
	{
	page pg;
	FeynDiagram fd(pg);

        line_plain lar1( fd, xy( -3, -6 ), xy( -3, -4 ) ),
                   lar2( fd, xy(  0, -6 ), xy(  0, -4 ) ),
                   lar3( fd, xy(  3, -4 ), xy(  3, -6 ) );

	line_plain bxll( fd, xy( -4,-4 ), xy(  4,-4 ) ),
	           bxlr( fd, xy(  4,-4 ), xy(  4, 4 ) ),
	           bxur( fd, xy(  4, 4 ), xy( -4, 4 ) ),
	           bxul( fd, xy( -4, 4 ), xy( -4,-4 ) );
	bxll.arrowon.false();
	bxlr.arrowon.false();
	bxul.arrowon.false();
	bxur.arrowon.false();

        line_plain uar1( fd, xy( -3,  4 ), xy( -3, 6 ) ),
                   uar2( fd, xy(  0,  4 ), xy(  0, 6 ) ),
                   uar3( fd, xy(  3,  6 ), xy(  3, 4 ) );

        text txR( fd, "R", xy( 0, 0), 0.5, 0.5 );
        txR.fontsize.scale(2.0);

	pg.output();
	}
