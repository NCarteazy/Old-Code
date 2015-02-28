function dist = gravfall(t)
%This calculates how far an object falls after time 't'
g = 9.8;
dist = 1/2*g*t.^2;
