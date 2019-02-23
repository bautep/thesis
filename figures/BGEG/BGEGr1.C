#include <FeynDiagram/fd.h>

main()
	{
	page pg;
	FeynDiagram fd(pg);

	vertex_dot v1(fd,-2, 0), v2(fd,2, 0);

	line_plain int1(fd,v1,v2);
	int1.arrowon.false();
	int1.dashon.true();

	line_plain f1(fd, xy(-2,-4), v1), 
	           f2(fd, v1, xy(-2,4) ), 
	           f3(fd, xy( 2,-4), v2), 
	           f4(fd, v2, xy( 2,4) ); 

	pg.output();
	}
