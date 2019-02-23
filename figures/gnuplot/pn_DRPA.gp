#
# gnuplot script
#
set output "pn_DRPA.eps"
set term postscript eps 28
#
set xran[-5:25]
set nozeroaxis
set xlabel "Energy (MeV)"
set yran[0:10]
set ylabel "GT-strength (1/MeV)"
#
set size 1,0.9
cd  "data"
plot "GT_pn_dipa" , \
     "GT_pn_drpa" with lines
#
#pause -1
