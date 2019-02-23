k0:; $(MAKE) $(MFLAGS) PROGRAM=KKOMY program
clean::; rm -f KKOMY

program: $(PROGRAM)


makelib:; (cd $(LIBDIR); $(MAKE) $(MFLAGS) lib)

$(PROGRAM):     $(OBJS) makelib
		$(LINKER) $(LDFLAGS) $(OBJS) $(LIB) -o $(PROGRAM) $(EXTLIB)

clean::;	rm -f *.o 

###
KKOMY.o: $(LIBDIR)/wybo.h
