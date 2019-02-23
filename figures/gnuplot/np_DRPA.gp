#
# gnuplot script
#
set term postscript eps 28
set output "np_DRPA.eps"
#
set xran[-55:-15]
set xlabel "Energy (MeV)"
set yran[0:0.5]
set ylabel "GT-strength (1/MeV)" 
#
set size 1,0.9
cd  "data"
plot "GT_np_drpa" , \
     "GT_np_dipa" with lines 
#pause -1
