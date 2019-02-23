#include <FeynDiagram/fd.h>

main()
	{
	page pg;
	FeynDiagram fd(pg);

	vertex_dot v1(fd,-4, 0), v2(fd,4, 0);
	line_wiggle int1(fd,v1,v2);
	pg.output();
	}
