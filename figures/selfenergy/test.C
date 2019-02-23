#include <FeynDiagram/fd.h>

main()
	{
	page pg;
	FeynDiagram fd(pg);

	xy arcpt(7,0);
	vertex_dot v1(fd,-4, 0), v2(fd,4, 0);
	line_wiggle int1(fd,v1,v2);
	line_doubleplain f1(fd,v2,v2);

	f1.arcthru(arcpt,1);
	pg.output();
	}
