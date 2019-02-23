#include <FeynDiagram/fd.h>

main()
	{
	page pg;
	FeynDiagram fd(pg);

	vertex_dot v1(fd,-5, 5), v2(fd,5, 5),
		   v3(fd,-5,-5), v4(fd,5,-5),
		   v5(fd,-5,0),  v6(fd,5,0);
	line_plain int1(fd,v1,v2), int2(fd,v3,v4),int3(fd,v5,v6);
	int1.dashon.true();
	int1.arrowon.false();
	int2.dashon.true();
	int2.arrowon.false();
	int3.dashon.true();
	int3.arrowon.false();
	line_doubleplain 
                   f2(fd,v3,v1),
                   f3(fd,v4,v2),
                   f6(fd,v2,v4);

	f6.arcthru(xy(7,0));

	pg.output();
	}
