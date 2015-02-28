x = input('X matrix: ');
e = input('E matrix: ');

xsq = 0;
b = cumsum(e)
for i = 1:length(e)
    newe = 0;
    newx = 0;
    fi = i;
while b(fi) < 5 && fi < length(e)
    newe = e(fi) + newe;
    newx = x(fi) + newx;
    fi = fi + 1;
end
j = cumsum(e(fi:length(e)));
while b(fi) >= 5 && j(end) < 5 && fi < length(e)
   newe = e(fi) + newe;
   fi = fi + 1;
   j = cumsum(e(fi:length(e)));
end
    
    xsq = xsq + (newx - newe)/newe;
end
xsq