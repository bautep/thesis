#
# gnuplot script
#
set term postscript eps 28
set output "np_D_E_RPA.eps"
#set term latex
#set output "../latex/np_D_E_RPA.ltx"
#
set xran[-55:-15]
set xlabel "Energy (MeV)"
set yran[0:0.5]
set ylabel "GT-strength (1/MeV)" 2
#
set size 1,0.9
set ytics 0,0.1
cd  "data"
plot "GT_np_3p_dipa"   title "DIPA" with lines   , \
     "GT_np_3p_drpa"   title "DRPA" with lines   , \
     "GT_np_3p_derpa" title "DERPA" with points 
#cd ".."
#set term tgif
#set output "np_D_E_RPA.obj"
#cd  "data"
#replot
#pause -1
