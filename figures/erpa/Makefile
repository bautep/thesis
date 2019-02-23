PSFILES= 	RPA2ndorder.ps \
		ladder.ps      \
		screening.ps   \
		selfscr1.ps    \
		selfscr2.ps    \
		screeningDERPA.ps

.SUFFIXES: .C .ps
.C.ps:
	FD -o $*.ps $*

all: $(PSFILES)
