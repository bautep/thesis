#include <FeynDiagram/fd.h>

main()
	{
	page pg;
	FeynDiagram fd(pg);

	vertex_dot v1(fd,-8, 4), v2(fd,0, 4),
		   v3(fd,-8,-4), v4(fd,0,-4);
	line_wiggle int1(fd,v1,v2), int2(fd,v3,v4);
        line_plain  TDAll( fd, xy(-10,-2), xy( 2,-2 ) ),
                    TDAlr( fd, xy( 2,-2), xy( 2, 2 ) ),
                    TDAur( fd, xy( 2, 2), xy(-10, 2 ) ),
                    TDAul( fd, xy(-10, 2), xy(-10,-2 ) );
        TDAll.arrowon.false();
        TDAul.arrowon.false();
        TDAlr.arrowon.false();
        TDAur.arrowon.false();
	line_doubleplain 
                   f1a(fd,v3,xy(-8,-2) ),
                   f1b(fd,xy(-8, 2), v1 );
	line_doubleplain 
                   f2a(fd,v4,xy(-1,-2) ),
                   f2b(fd,xy(-1, 2), v2 );
	line_doubleplain 
                   f3a(fd,xy( 1,-2),v4 ),
                   f3b(fd, v2,xy( 1, 2) );
        f2a.arcthru( xy( -0.85,-3 ));
        f3a.arcthru( xy(  0.85,-3 ));
        f2b.arcthru( xy( -0.85, 3 ));
        f3b.arcthru( xy(  0.85, 3 ));

        text TDAtxt( fd, "pphTDA", xy( -4, 0 ), 0.5,  0.5 );
        TDAtxt.fontsize.scale(2.0);
	pg.output();
	}
