#
# gnuplot script
#
set output "pn_D_E_RPA.eps"
set term postscript eps 28
#set output "../latex/pn_D_E_RPA.ltx"
#set term latex
#
set xran[-5:25]
set nozeroaxis
set xlabel "Energy (MeV)"
set yran[0:12]
set ylabel "GT-strength (1/MeV)" 2
#
set size 1,0.9
cd  "data"
set data style lines
plot "GT_pn_3p_dipa"   title "DIPA", \
     "GT_pn_3p_drpa"   title "DRPA", \
     "GT_pn_3p_derpa" title "DERPA" 
#
#cd ".."
#set output "pn_D_E_RPA.obj"
#set term tgif
#pause -1
