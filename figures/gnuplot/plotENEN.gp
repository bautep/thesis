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
set ylabel "GT-strength (1/MeV)" 2
#
set size 1,0.9
cd  "data"
set data style lines
plot "plot.ENEH" title "ERPA", \
     "plot.ENEN" title "'bare' ERPA"
#
pause -1
