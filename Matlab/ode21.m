function dydx = odea(x,y)
dydx=[(y(1)/y(2))*(y(3)-y(1));-.5*y(3)*y(1);(1/y(4))*(.9-1000*(y(3)-y(5))-(y(3)/2)*(y(3)-y(1)));.5*(y(3)-y(1));-100*(y(5)-y(3))]
