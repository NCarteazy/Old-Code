%Nick Carter
%Lab 12
%10/2/2012

%-------------------------------------------
%1
%-------------------------------------------
a = [1.45,2.75,3.2,4];
for b = 1:4;
xold = .1;
n = 1;
z = 1;
while z > 1e-4
xnew = a(b)*xold*(1-xold);
n = n + 1;
z = abs((xnew-xold)/xnew);
xold = xnew;
if n > 200
break
end
end
disp(['For a = ' num2str(a(b)) ',x(n=' num2str(n) ') = ' num2str(xnew)])
end
clear
 
%
%For a = 1.45,x(n=19) = 0.31031
%For a = 2.75,x(n=31) = 0.63634
%For a = 3.2,x(n=201) = 0.51304
%For a = 4,x(n=201) = 0.08737
%
%-------------------------------------------
%2
%-------------------------------------------
N = input('Please enter an integer < 10: ');
H = zeros(N);
for i = 1:N
for j = 1:N
if i + j -1 <= N
H(i,j) = i + j - 1;
end
end
end
disp(H)

%
%Please enter an integer < 10: 6
% 1 2 3 4 5 6
% 2 3 4 5 6 0
% 3 4 5 6 0 0
% 4 5 6 0 0 0
% 5 6 0 0 0 0
% 6 0 0 0 0 0
%
%-------------------------------------------
%3
%-------------------------------------------
p = input('Please the coefficients of Y: ');
s = input('Please the coefficients of Z: ');
x = 1;
if length(p) > length(s)
L = length(p) - length(s);
while x <= L 
h(x) = p(x);
x = x + 1;
end
while x > L & x <= length(p)
h(x) = p(x) + s(x-L);
x = x + 1;
end
end
if length(p) < length(s)
L = length(s) - length(p);
while x <= L
h(x) = s(x);
x = x + 1;
end
while x > L & x <= length(s)
h(x) = s(x) + p(x-L);
x = x + 1;
end
end
if length(p) == length(s)
L = length(p);
while x <= L
h(x) = p(x) + s(x);
x = x + 1;
end
end
disp(h)

%
%Please the coefficients of Y: [1,2,3,4]
%Please the coefficients of Z: [10,20,30,40]
%    11    22    33    44
%Please the coefficients of Y: [11,12,13,14]
%Please the coefficients of Z: [101,102]
%    11    12   114   116
%Please the coefficients of Y: [43,54,55]
%Please the coefficients of Z: [77,66,88,44,33]
%    77    66   131    98    88
%