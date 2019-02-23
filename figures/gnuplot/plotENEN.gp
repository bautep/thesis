#
# gnuplot script
#
set output "plotENEN.eps"
set term postscript eps 28
#
set xran[0:20]
set nozeroaxis
set xlabel "Energy (MeV)"
set yran[0:10]
set ylabel "GT-strength (1/MeV)"
#
set size 1,0.9
cd  "data"
plot "plot.ENEH" title "ERPA", \
     "plot.ENEN" title "'bare' ERPA" with lines
#
#pause -1
