#include <FeynDiagram/fd.h>

main()
	{
	page pg;
	FeynDiagram fd(pg);

// G matix HF
	vertex_dot  v1a(fd,-5.0, 0), v1b(fd,5.0, 0);
	line_wiggle int1(fd,v1a,v1b);
	line_doubleplain f1(fd,v1b,v1b);
        f1.arcthru(v1b+xy(3,0));

	pg.output();
	}
