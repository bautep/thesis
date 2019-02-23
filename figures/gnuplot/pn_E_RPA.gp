#
# gnuplot script
#
set output "pn_E_RPA.eps"
set term postscript eps 28
#
set xran[-5:25]
set nozeroaxis
set xlabel "Energy (MeV)"
set yran[0:30]
set ylabel "GT-strength (1/MeV)" 2
#
set size 1,0.9
cd  "data"
set data style lines
plot "GT_pn_ipsm" , \
     "GT_pn_rpa" , \
     "GT_pn_erpa" 
#
#pause -1
