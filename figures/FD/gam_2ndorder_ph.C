#include <FeynDiagram/fd.h>

main()
	{
	page pg;
	FeynDiagram fd(pg);

	vertex_dot v1(fd,-6, 4), v2(fd,0, 4),
		   v3(fd, 0,-4), v4(fd,6,-4);
	line_wiggle int1(fd,v1,v2), int2(fd,v3,v4);
	line_doubleplain f2(fd,v3,v2),
                         f6(fd,v2,v3);
        f2.arcthru( 2,0);
        f6.arcthru(-2,0);
	pg.output();
	}
