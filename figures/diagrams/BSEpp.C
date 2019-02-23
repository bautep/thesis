#include	<FeynDiagram/fd.h>
#include	<math.h>
#define		p1	-8
#define		p2a	-2
#define		p2b	 2
#define		p3	 8
#define		width	 1
#define 	t	-8
#define 	tp	 8
#define 	t1	-3
#define 	t2	-2
#define 	t3	 3
#define 	t4	 2
#define		BeW	 1  // extra width for box.
#define		posis	 xy(-4.5,0)
#define		posplus	 xy( 4,0)
#define		posmin	 xy( 0,0)
#define		CENTER	 0.5,0.5 // to center the text around the position

main()
	{
	page pg;
	FeynDiagram fd(pg);

//
//  G2
//
        line_plain G1lh( fd, xy(p1-width-BeW, t),  xy(p1+width+BeW, t)  ),
                   G1rv( fd, xy(p1+width+BeW, t),  xy(p1+width+BeW, tp) ),
                   G1uh( fd, xy(p1+width+BeW, tp), xy(p1-width-BeW, tp) ),
                   G1lv( fd, xy(p1-width-BeW, tp), xy(p1-width-BeW, t)  );

	G1lh.arrowon.false();
	G1rv.arrowon.false();
	G1uh.arrowon.false();
	G1lv.arrowon.false();
// tekst
	text G1txt(fd, "G^{II}", xy(p1,0), CENTER );
//
// =
//
	text txtis(fd,"=",posis,CENTER);
        txtis.fontsize.scale(1.5);
//
//  G2f
//
	line_doubleplain L1a(fd,xy(p2a+width,t),xy(p2a+width,tp)), 
	                 L1b(fd,xy(p2a-width,t),xy(p2a-width,tp)); 
	line_doubleplain 
	  L2a11(fd,xy(p2b+width,t           ),xy(p2b+width,t+(tp-t)/3.0)), 
	  L2a12(fd,xy(p2b+width,t+(tp-t)/3.0),xy(p2b-width,t+(tp-t)*2.0/3.0)), 
	  L2a13(fd,xy(p2b-width,t+(tp-t)*2.0/3.0),xy(p2b-width,tp)), 
	  L2a21(fd,xy(p2b-width,t           ),xy(p2b-width,t+(tp-t)/3.0)), 
	  L2a22(fd,xy(p2b-width,t+(tp-t)/3.0),xy(p2b+width,t+(tp-t)*2.0/3.0)), 
	  L2a23(fd,xy(p2b+width,t+(tp-t)*2.0/3.0),xy(p2b+width,tp)); 
	L2a22.arrowon.false();
	L2a12.arrowon.false();
	text txtmin(fd,"-",posmin,CENTER);
        txtmin.fontsize.scale(1.5);
//
// +
//
	text txtpl(fd,"+",posplus,.5,.5);
        txtpl.fontsize.scale(1.5);

//
//  G2f Gamma G2
//
        xy pt12 = xy(p3-width, t1)-xy(p3+width, t2);
           pt12 = pt12/pt12.len()*(BeW/cos((pt12.angle()/180.0*M_PI)));

        line_plain G2lh( fd, xy(p3-width-BeW, t),   xy(p3+width+BeW, t)  ),
                   G2rv( fd, xy(p3+width+BeW, t),   xy(p3+width, t2)+pt12 ),
                   G2uh( fd, xy(p3+width, t2)+pt12, xy(p3-width, t1)-pt12 ),
                   G2lv( fd, xy(p3-width, t1)-pt12, xy(p3-width-BeW, t)  );
	G2lh.arrowon.false();
	G2rv.arrowon.false();
	G2uh.arrowon.false();
	G2lv.arrowon.false();
// tekst
	text G2txt(fd, "G^{II}", xy(p3,(t+(t1+t2)/2.0)/2.0), CENTER );

	vertex_dot v1( fd, xy(p3-width, t1 ) ),
	           v2( fd, xy(p3+width, t2 ) );

        xy pt34 = xy(p3-width, t3)-xy(p3+width, t4);
           pt34 = pt34/pt34.len()*(BeW/cos((pt34.angle()/180.0*M_PI)));
        line_plain V1lh( fd, xy(p3-width, t1)-pt12, xy(p3+width, t2)+pt12 ),
                   V1rv( fd, xy(p3+width, t2)+pt12, xy(p3+width, t4)+pt34 ),
                   V1uh( fd, xy(p3+width, t4)+pt34, xy(p3-width, t3)-pt34 ),
                   V1lv( fd, xy(p3-width, t3)-pt34, xy(p3-width, t1)-pt12 );
// tekst
	text V1txt(fd, "\\Gamma^{pp}", xy(p3,(t1+t2+t3+t4)/4.0), CENTER );

	V1lh.arrowon.false();
	V1rv.arrowon.false();
	V1uh.arrowon.false();
	V1lv.arrowon.false();

	vertex_dot v3( fd, xy(p3-width, t3 ) ),
	           v4( fd, xy(p3+width, t4 ) );

	line_doubleplain L3a(fd,xy(p3-width,t3),xy(p3-width,tp)), 
	                 L3b(fd,xy(p3+width,t4),xy(p3+width,tp)); 

/*
 * tekst
 */

/*
	text txa1(fd,"\\beta",a1+xy(0,-1),.5,.5);
	text txa2(fd,"\\beta",a2+xy(0,-1),.5,.5);
	text txa3(fd,"\\beta",a3+xy(0,-1),.5,.5);
	text txb1(fd,"\\alpha",b1+xy(0,1),.5,.5);
	text txb2(fd,"\\alpha",b2+xy(0,1),.5,.5);
	text txb3(fd,"\\alpha",b3+xy(0,1),.5,.5);
	text txsa(fd,"\\gamma",xy(l3x,0)+vecgam);
	text txsb(fd,"\\delta",xy(l3x,0)+vecdel,0.,1);
	text txtsig(fd,"\\Sigma^\\ast",xy(l3x,0),.5,.5);
        txtsig.fontsize.scale(1.5);

*/
	/*
        tx1.fontsize.scale(.7);
        tx1.fontname.set("Helvetica");
	*/

	pg.output();
	}
