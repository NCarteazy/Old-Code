function [c1,c2,c3,m] = vector_add(a1,a2,a3,b1,b2,b3)
%vector_add.m 2/23/2014 adds two vectors and returns magnitude
%   This function takes in six values in the format of 
%   a1i + a2j + a3k = vector1 and b1i + b2j + b2k = vector 2
%   and they are added, returning a new vector c1i+c2j+c3k
%   and the magnitude of the new vector is also returned.
c1 = a1 + b1;
c2 = a2 + b2;
c3 = a3 + b3; 
m = sqrt(c1^2 + c2^2 + c3^2);

end

