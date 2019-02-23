BEGIN {cum=0}
{cum += $2}
END {print "cum=",cum}
