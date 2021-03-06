#include <FeynDiagram/fd.h>

main()
	{
	page pg;
	FeynDiagram fd(pg);

	xy e1(-7, 8), e2(7, 8),
	   e3(-7,-8), e4(7,-8), 
	   arcpt1(2,0),
	   arcpt2(-2,0);
	vertex_dot v1(fd,-7, 4), v2(fd,7, 4),
		   v3(fd,-7,-4), v4(fd,7,-4);
	line_wiggle int1(fd,v1,v2), int2(fd,v3,v4);
	line_plain f1(fd,e3,v3), 
                   f5(fd,v3,v1),
                   f2(fd,v1,e1),
                   f3(fd,e2,v2),
                   f4(fd,v2,v4),
                   f6(fd,v4,e4);

	/*
	f5.arcthru(arcpt1);
	f6.arcthru(arcpt2);
	*/
	pg.output();
	}
