%NickCarter
%Lab 13
%10/9/2012

%--------------------
%1
%--------------------

function min = sec2min(s)
%This function converts minutes to seconds
min = s / 60;

%sec2min(600)
%ans =
%    10
%--------------------
%2
%--------------------

function prod = matbymat(a,b)
%This function multiplies two matrics
prod = a * b;

%a = [1,2,3,4]; b = [1;2;3;4]; matbymat(a,b)
%ans =
%    30
%--------------------
%3
%--------------------
function [accel,vel,dist] = diveac(t)
%This function returns a value of acceleration, velocity, and distance
%traveled after time 't'
accel = .5*t;
vel = t.^2/4;
dist = t.^3/12;

%[a,v,d] = diveac(16)
%a =
%    8
%v =
%    64
%d =
%  341.3333
%--------------------
%4
%--------------------
function dist = gravfall(t)
%This calculates how far an object falls after time 't'
g = 9.8;
dist = 1/2*g*t.^2;

%gravfall(10)
%ans =
%  490.0000
%--------------------
%5
%--------------------
function [x,y] = cosabs(a,t,b,c)
%This takes the cos of at and adds b to it
%Then takes the absolute value of x and adds c
x = cos(a*t) + b;
y = abs(x) + c;

%[x,y] = cosabs(45,2,-12,5)
%x =
%  -12.4481
%y =
%   17.4481

