%Nick Carter
%lab 14
%10/11/12

%----------------------
%1
%----------------------

function [ad,su] = addetsub(a,b)
ad = add(a,b);
su = sub(a,b);
function [w] = add(a,b)
w = a + b;
function [q] = sub(a,b)
q = a - b;

%[ad,su] = addetsub(4,5)
%ad =
%     9
%su =
%    -1

%----------------------
%2
%----------------------

ln = @(a)(log(a))

%ln(10)
%ans =
%    2.3026

%----------------------
%3
%----------------------

function [men,stand] = stanmean(a)

men = meanw(a);
stand = stanw(a);

function [q] = meanw(a)
q = (1/length(a-1)) * (sum(a));

function [t] = stanw(b)
for j = 1:length(b)
    list(j) = (b(j)- meanw(b))^2;
end
t = sqrt(sum(list)/(length(b)-1));

%[mean, stan] = stanmean(dat)
%mean =
%   26.5000
%stan =
%   16.0156

%----------------------
%4
%----------------------

%Here, I declare the mean function first, then find the sum of all the
%values minus the mean, then caluclate the stddev from there.

mean = @(d)((1/length(d-1)) * (sum(d)))
for j = 1:length(dat)
    list(j) = (dat(j)- mean(dat))^2;
end
stan = @(d,l)(sqrt(sum(l)/(length(d)-1)))
dev = stan(dat,list)
avg = mean(dat)

%dev =
%   16.0156
%avg =
%   26.5000

%----------------------
%5
%----------------------

mean = inline('(1/length(a-1)) * (sum(a))','a');
stand = inline('sqrt(sum(l)/(length(d)-1))','d','l');

%stand(dat,list)
%ans =
%   16.0156
%mean(dat)
%ans =
%   26.5000
