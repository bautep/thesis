#include <FeynDiagram/fd.h>

main()
	{
	page pg;
	FeynDiagram fd(pg);

	xy e1(-8, 8), e2(8, 8),
	   e3(-8,-8), e4(8,-8), 
	   arcpt1(2,0),
	   arcpt2(-2,0);
	vertex_dot v1(fd,-8, 4), v2(fd,0, 4),
		   v3(fd, 0,-4), v4(fd,8,-4);
	line_wiggle int1(fd,v1,v2), int2(fd,v3,v4);
	line_plain f1(fd,e3,v1), 
                   f2(fd,v1,e1),
                   f3(fd,e2,v4),
                   f4(fd,v4,e4),
                   f5(fd,v2,v3);
        line_doubleplain f6(fd,v3,v2);

	f5.arcthru(arcpt1);
	f6.arcthru(arcpt2);
	pg.output();
	}
