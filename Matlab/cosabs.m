function [x,y] = cosabs(a,t,b,c)
%This takes the cos of at and adds b to it
%Then takes the absolute value of x and adds c
x = cos(a*t) + b;
y = abs(x) + c;
