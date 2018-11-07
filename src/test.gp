set xlabel 'X'
set ylabel 'Y'
set key spacing 1.5
set xrange [-20.0:-3.1]
set key left
plot(sin(2*x)/(x*x))w li lw 2 lt rgb 'red' ti 'sin(2x)/(x^2)'
pause -1
