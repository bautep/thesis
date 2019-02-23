#include	<FeynDiagram/fd.h>
#include	<math.h>
#define		p1	-8
#define		p2a	 0
#define		p3	 8
#define		width	 1
#define 	t	-8
#define 	tp	 8
#define 	t1	-3
#define 	t2	-2
#define 	t3	 3
#define 	t4	 2
#define		BeW	 1  // extra width for box.
#define		posis	 xy(-3.5,0)
#define		posplus	 xy( 3.2,0)
#define		CENTER	 0.5,0.5 // to center the text around the position

main()
	{
	page pg;
	FeynDiagram fd(pg);

//
//  L
//
        line_plain L1lh( fd, xy(p1-width-BeW, t),  xy(p1+width+BeW, t)  ),
                   L1rv( fd, xy(p1+width+BeW, t),  xy(p1+width+BeW, tp) ),
                   L1uh( fd, xy(p1+width+BeW, tp), xy(p1-width-BeW, tp) ),
                   L1lv( fd, xy(p1-width-BeW, tp), xy(p1-width-BeW, t)  );

	L1lh.arrowon.false();
	L1rv.arrowon.false();
	L1uh.arrowon.false();
	L1lv.arrowon.false();
// tekst
	text G1txt(fd, "L", xy(p1,0), CENTER );
//
// =
//
	text txtis(fd,"=",posis,CENTER);
        txtis.fontsize.scale(1.5);
//
//  Lf
//
	line_doubleplain L1a(fd,xy(p2a+width,t),xy(p2a+width,tp)), 
	                 L1b(fd,xy(p2a-width,tp),xy(p2a-width,t)); 
//
// +
//
	text txtpl(fd,"+",posplus,.5,.5);
        txtpl.fontsize.scale(1.5);

//
//  Lf Gamma L
//
        xy pt12 = xy(p3-width, t1)-xy(p3+width, t2);
           pt12 = pt12/pt12.len()*(BeW/cos((pt12.angle()/180.0*M_PI)));

        line_plain L2lh( fd, xy(p3-width-BeW, t),   xy(p3+width+BeW, t)  ),
                   L2rv( fd, xy(p3+width+BeW, t),   xy(p3+width, t2)+pt12 ),
                   L2uh( fd, xy(p3+width, t2)+pt12, xy(p3-width, t1)-pt12 ),
                   L2lv( fd, xy(p3-width, t1)-pt12, xy(p3-width-BeW, t)  );
	L2lh.arrowon.false();
	L2rv.arrowon.false();
	L2uh.arrowon.false();
	L2lv.arrowon.false();
// tekst
	text L2txt(fd, "L", xy(p3,(t+(t1+t2)/2.0)/2.0), CENTER );

	vertex_dot v1( fd, xy(p3-width, t1 ) ),
	           v2( fd, xy(p3+width, t2 ) );

        xy pt34 = xy(p3-width, t3)-xy(p3+width, t4);
           pt34 = pt34/pt34.len()*(BeW/cos((pt34.angle()/180.0*M_PI)));
        line_plain V1lh( fd, xy(p3-width, t1)-pt12, xy(p3+width, t2)+pt12 ),
                   V1rv( fd, xy(p3+width, t2)+pt12, xy(p3+width, t4)+pt34 ),
                   V1uh( fd, xy(p3+width, t4)+pt34, xy(p3-width, t3)-pt34 ),
                   V1lv( fd, xy(p3-width, t3)-pt34, xy(p3-width, t1)-pt12 );
// tekst
	text V1txt(fd, "\\Gamma^{ph}", xy(p3,(t1+t2+t3+t4)/4.0), CENTER );

	V1lh.arrowon.false();
	V1rv.arrowon.false();
	V1uh.arrowon.false();
	V1lv.arrowon.false();

	vertex_dot v3( fd, xy(p3-width, t3 ) ),
	           v4( fd, xy(p3+width, t4 ) );

	line_doubleplain L3a(fd,xy(p3-width,t3),xy(p3-width,tp)), 
	                 L3b(fd,xy(p3+width,tp),xy(p3+width,t4)); 

	pg.output();
	}
