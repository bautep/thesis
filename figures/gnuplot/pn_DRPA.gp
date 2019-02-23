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
set ylabel "GT-strength (1/MeV)" 2
#
set size 1,0.9
cd  "data"
set data style lines
plot "GT_pn_dipa" , \
     "GT_pn_drpa" 
#
#pause -1
