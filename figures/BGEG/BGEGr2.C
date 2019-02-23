#include <FeynDiagram/fd.h>

main()
	{
	page pg;
	FeynDiagram fd(pg);

	vertex_dot v1(fd,-2, 1), v2(fd,2, 1);
	vertex_dot v3(fd,-2,-1), v4(fd,2,-1);

	line_plain int1(fd,v1,v2);
	int1.arrowon.false();
	int1.dashon.true();
	line_plain int2(fd,v3,v4);
	int2.arrowon.false();
	int2.dashon.true();

	line_plain f1(fd, xy(-2,-4), v3), 
	           f2(fd, v1, xy(-2,4) ), 
	           f3(fd, xy( 2,-4), v4), 
	           f4(fd, v2, xy( 2,4) ); 
	line_doubleplain ff1( fd, v3, v1 ),
	                 ff2( fd, v4, v2 );

	pg.output();
	}
