#include <FeynDiagram/fd.h>
#define l1x -8
#define l2x  0
#define l3x  8
#define upl  6
#define lwl  -6
#define sigX 3
#define sigY 2
#define posis xy(-4,0)
#define posplus xy(3,0)
#define vecgam xy(1,2.5)
#define vecdel xy(1,-2.5)

main()
	{
	page pg;
	FeynDiagram fd(pg);

	xy a1(l1x,lwl), a2(l2x,lwl), a3(l3x,lwl),
	   b1(l1x,upl), b2(l2x,upl), b3(l3x,upl);

        blob sigma(fd, (a3+b3)/2, sigX, sigY);

	vertex_dot v3_u(fd,sigma.location(270) ),
		   v3_l(fd,sigma.location(90));

	line_doubleplain gd1(fd,a1,b1); 
	line_plain       gf2(fd,a2,b2); 
	line_doubleplain gd3(fd,a3,v3_u); 
	line_plain gf3(fd,v3_l,b3); 

/*
 * tekst
 */
	text txa1(fd,"\\beta",a1+xy(0,-1),.5,.5);
	text txa2(fd,"\\beta",a2+xy(0,-1),.5,.5);
	text txa3(fd,"\\beta",a3+xy(0,-1),.5,.5);
	text txb1(fd,"\\alpha",b1+xy(0,1),.5,.5);
	text txb2(fd,"\\alpha",b2+xy(0,1),.5,.5);
	text txb3(fd,"\\alpha",b3+xy(0,1),.5,.5);
	text txsa(fd,"\\gamma",xy(l3x,0)+vecgam);
	text txsb(fd,"\\delta",xy(l3x,0)+vecdel,0.,1);
	text txtis(fd,"=",posis,.5,.5);
        txtis.fontsize.scale(1.5);
	text txtpl(fd,"+",posplus,.5,.5);
        txtpl.fontsize.scale(1.5);
	text txtsig(fd,"\\Sigma^\\ast",xy(l3x,0),.5,.5);
        txtsig.fontsize.scale(1.5);

	/*
        tx1.fontsize.scale(.7);
        tx1.fontname.set("Helvetica");
	*/

	pg.output();
	}
