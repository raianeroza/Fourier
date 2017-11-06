set terminal pdfcairo
set output "Grafico.pdf"

set xrange [-pi:pi]
set xlabel "x"
set ylabel "y"
set title "Sen 3x"
plot "sen3x.dat" t "sen3x" w l lw 3

reset

set xrange [0:10]
set xlabel "x"
set ylabel "a²b²"
set title "Transformada sen 3x"
plot "tfsen3x.dat" u 0:3 w l lw 3

reset

set xrange [-pi:pi]
set xlabel "x"
set ylabel "y"
set title "Sen 5x"
plot "sen5x.dat" t "sen5x" w l lw 3

reset

set xrange [0:10]
set xlabel "x"
set ylabel "a²b²"
set title "Transformada sen 5x"
plot "tfsen5x.dat" u 0:3 w l lw 3

reset

set xrange [-pi:pi]
set xlabel "x"
set ylabel "y"
set title "sen(3x)+sen(5x)"
plot "sen3xmsen5x.dat" t "sen3x+sen5x" w l lw 3

reset

set xrange [0:10]
set xlabel "x"
set ylabel "a²b²"
set title "Transformada sen(3x)+sen(5x)"
plot "tfsen3xm5x.dat" u 0:3 w l lw 3

reset

set xrange [-pi:pi]
set xlabel "x"
set ylabel "y"
set title "sen(3x) X sen(5x)"
plot "sen3xsen5x.dat" t "sen3xsen5x" w l lw 3

reset

set xrange [0:10]
set xlabel "x"
set ylabel "a²b²"
set title "Transformada sen(3x) X sen(5x)"
plot "tfsen3x5x.dat" u 0:3 w l lw 3

reset

set xlabel "x"
set ylabel "y"
set title "Número Aleatório"
plot "ale.dat" t "Aleatório" w l lw 3

reset

set xrange [0:100]
set xlabel "x"
set ylabel "a²b²"
set title "Transformada aleatório"
plot "tfale.dat" u 0:3 w l lw 3

reset

set xlabel "x"
set ylabel "y"
set title "sen(5x) x Nº aleatório"
plot "5xale.dat" t "5xale" w l lw 3

reset

set xrange [0:100]
set xlabel "x"
set ylabel "a²b²"
set title "Transformada sen(5x) x Nº aleatório"
plot "tf5xale.dat" u 0:3 w l lw 3

reset

set xlabel "x"
set ylabel "y"
set title "sen(5x) + Nº aleatório"
plot "5xmale.dat" t "5x+ale" w l lw 3

reset

set xrange [0:100]
set xlabel "x"
set ylabel "a²b²"
set title "Transformada sen(5x) + Nº aleatório"
plot "tf5xmale.dat" u 0:3 w l lw 3

reset

set xrange [0:520]
set log y
set xlabel "k"
set ylabel "a²b²"
set title "Transformada Piano"
plot "tfpiano.txt" u 0:3 w l lw 3

reset
set terminal wxt
