%Nick Carter
%Lab 10
%9/25/2012

%--------------------------------
%1
%--------------------------------
B = [14;8;2.5];
A = [27,14,4;14,8,2.5;4,2.5,1];
I = eye(3);
ymaxq = 0;
ymaxw = 0;
ymaxe = 0;
ome = linspace(0,3.5,1000);
for o = 1:1000;
    y = ((I - (ome(o)^2).*A)^-1)*B;
    if y(1) > ymaxq
        ymaxq = y(1);
        omeq = ome(o);
    end
    if y(2)> ymaxw
        ymaxw = y(2);
        omew = ome(o);
    end
    if y(3)> ymaxe
        ymaxe = y(3);
        omee = ome(o);
    end
end

disp(['Max of Y(1) = ' num2str(ymaxq) ' at Omega = ' num2str(omeq) ])
disp(['Max of Y(1) = ' num2str(ymaxw) ' at Omega = ' num2str(omew) ])
disp(['Max of Y(1) = ' num2str(ymaxe) ' at Omega = ' num2str(omee) ])

%Max of Y(1) = 1731.4479 at Omega = 0.16817
%Max of Y(1) = 921.0902 at Omega = 0.16817
%Max of Y(1) = 532.522 at Omega = 2.971

%--------------------------------
%2
%--------------------------------
L = input('Input the loan amount: ');
mon = input('Enter the term of loan in months: ');
la = input('Enter the annual interest rate: ' );
i = la/1200;
pfi = (i*L)/(1-(1+i)^-mon);
itot = 0;
b(1) = L;
for n = 2:mon+1
ifin(n) = i*b(n-1);
pfin(n) = pfi - ifin(n);
b(n) = b(n-1) - pfin(n);
end
for j = 2:mon+1
itot = itot + ifin(j);
end
disp(['Total interest = $' num2str(itot) ])
%Input the loan amount: 100000
%Enter the term of loan in months: 360
%Enter the annual interest rate: 8
%Total interest = $164155.2466