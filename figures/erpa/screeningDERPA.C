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
	line_doubleplain f1(fd,e3,v1), 
                         f2(fd,v1,e1),
                         f3(fd,e2,v4),
                         f4(fd,v4,e4),
                         f5(fd,v2,v3),
                         f6(fd,v3,v2);

	f5.arcthru(arcpt1);
	f6.arcthru(arcpt2);
	/* nu de tekst */
	text txa1(fd,"3",e1+xy(-1,0),.5,.5),txa2(fd,"4",e2+xy(1,0),.5,.5),
	     txa3(fd,"1",e3+xy(-1,0),.5,.5),txa4(fd,"2",e4+xy(1,0),.5,.5),
	     txb1(fd,"3^\\prime",v1+xy(-1, 1),.5,.5),
	     txb2(fd,"1^\\prime",v1+xy(-1,-1),.5,.5),
	     txb3(fd,"5^\\prime",v2+xy(-2,-1),.5,.5),
	     txb4(fd,"6^\\prime",v2+xy( 2,-1),.5,.5),
	     txc1(fd,"4^\\prime",v4+xy( 1, 1),.5,.5),
	     txc2(fd,"2^\\prime",v4+xy( 1,-1),.5,.5),
	     txc3(fd,"5"        ,v3+xy(-2, 1),.5,.5),
	     txc4(fd,"6"        ,v3+xy( 2, 1),.5,.5);
        text txd1(fd,"\\omega_2+\\omega/2",
		  (e3+v1)/2+xy(0.5,0),0,0),
             txd2(fd,"\\omega_2-\\omega/2",
		  (v4+e4)/2+xy(-0.5,0),1,0),
             txd3(fd,"\\omega_1+\\omega/2",
		  (v1+e1)/2+xy( 0.5,0),0,0),
             txd4(fd,"\\omega_1-\\omega/2",
		  (v4+e2)/2+xy(-0.5,0),1,0),
	     txd5(fd,"\\omega_3+(\\omega_1-\\omega_2)/2",
		  (v2+v3)/2+arcpt2+xy(-0.5,0),1,0),
	     txd6(fd,"\\omega_3-(\\omega_1-\\omega_2)/2",
		  (v2+v3)/2+arcpt1+xy( 0.5,0),0,0);
        txd1.fontsize.scale(.7);
        txd2.fontsize.scale(.7);
        txd3.fontsize.scale(.7);
        txd4.fontsize.scale(.7);
        txd5.fontsize.scale(.7);
        txd6.fontsize.scale(.7);
        txd1.fontname.set("Helvetica");
        txd2.fontname.set("Helvetica");
        txd3.fontname.set("Helvetica");
        txd4.fontname.set("Helvetica");
        txd5.fontname.set("Helvetica");
        txd6.fontname.set("Helvetica");

	pg.output();
	}
