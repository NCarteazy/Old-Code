function [ad,su] = addetsub(a,b)
ad = add(a,b);
su = sub(a,b);
function [w] = add(a,b)
w = a + b;
function [q] = sub(a,b)
q = a - b;