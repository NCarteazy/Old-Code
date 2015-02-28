function yp = Prand(n,f,Pr)
yp = [f(2);f(3);-3*f(1)*f(3)+ 2*(f(2)^2)-f(4);f(5);-3*Pr*f(1)*f(5)];