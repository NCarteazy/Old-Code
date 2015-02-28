function yp = linear(t,y,e,y,om)
yp = [y(2);-((2/(1+e*sin(om*t + 9*pi/8)^7))*(7*e*om*sin((om*t)+(9*pi/8))^6*cos(om*t+(9*pi/8)))+y*(1+e*sin(om*t + 9*pi/8)^7))*y(2)-(1/1+e*sin(om*t + 9*pi/8)^7)*sin(y(1))];

