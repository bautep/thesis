GNUPLOT=gnuplot
EPSFILES= np_D_E_RPA.eps \
          np_DRPA.eps \
	  pn_DRPA.eps \
	  pn_D_E_RPA.eps \
	  pn_E_RPA.eps\
	  plotENEN.eps

.SUFFIXES: .eps .gp

.gp.eps:
	rm -f $*.eps
	$(GNUPLOT) $*.gp

figures: $(EPSFILES)

clean:; rm -f $(EPSFILES)
