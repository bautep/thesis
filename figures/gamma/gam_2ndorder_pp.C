#include <FeynDiagram/fd.h>
#define DX 1
#define DY 1

main()
	{
	page pg;
	FeynDiagram fd(pg);

	vertex_dot v1(fd,-8, 4), v2(fd,0, 4),
		   v3(fd,-8,-4), v4(fd,0,-4);
	line_wiggle int1(fd,v1,v2), int2(fd,v3,v4);
	line_doubleplain f2(fd,v3,v1),
                         f6(fd,v4,v2);
	line_plain       p1(fd,v1,v1+xy(-DX,DY)),
	                 p2(fd,v2,v2+xy( DX,-DY)),
	                 p3(fd,v3+xy(-DX,-DY),v3),
	                 p4(fd,v4,v4+xy(DX,DY));

	pg.output();
	}
