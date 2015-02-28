function [accel,vel,dist] = diveac(t)
%This function returns a value of acceleration, velocity, and distance
%traveled after time 't'
accel = .5*t;
vel = t.^2/4;
dist = t.^3/12;
