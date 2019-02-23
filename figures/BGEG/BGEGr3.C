#include <FeynDiagram/fd.h>

main()
	{
	page pg;
	FeynDiagram fd(pg);

	vertex_dot v1(fd,-2, 2), v2(fd,2, 2);
	vertex_dot v3(fd,-2, 0), v4(fd,2, 0);
	vertex_dot v5(fd,-2,-2), v6(fd,2,-2);

	line_plain int1(fd,v1,v2);
	int1.arrowon.false();
	int1.dashon.true();
	line_plain int2(fd,v3,v4);
	int2.arrowon.false();
	int2.dashon.true();
	line_plain int3(fd,v5,v6);
	int3.arrowon.false();
	int3.dashon.true();

	line_plain f1(fd, xy(-2,-4), v5), 
	           f2(fd, v1, xy(-2,4) ), 
	           f3(fd, xy( 2,-4), v6), 
	           f4(fd, v2, xy( 2,4) ); 
	line_doubleplain ff1( fd, v3, v1 ),
	                 ff2( fd, v4, v2 ),
	                 ff3( fd, v5, v3 ),
	                 ff4( fd, v6, v4 );

	pg.output();
	}
